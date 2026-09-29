#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstdlib>

struct termios orig_termios;

void disableRawMode() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}
void enableRawMode() {
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRawMode);

    struct termios raw = orig_termios;
    raw.c_lflag &= ~(ECHO | ICANON);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}


int main() {
    char c;
    enableRawMode();
    while (read(STDIN_FILENO, &c, 1) > 0 && c != 'q') {

    }
    return 0;
}
