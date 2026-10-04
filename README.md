# NOTE
**N**ot **O**ptimized **T**ext **E**ditor

> [!NOTE]
> Built through version 1.0.0 by following the original Kilo tutorial and rewriting the implementation from C to C++.
>
> > [Original tutorial](https://viewsourcecode.org/snaptoken/kilo/index.html)

## About
NOTE is a C++ port of the Kilo text editor tutorial, built through version 1.0.0.

It follows the original Kilo editor concept and rewrites the implementation from C into C++ while keeping the same editor workflow and structure.

## Current features
- Basic text editing
- Cursor movement
- Save and open files
- Search
- Syntax highlighting for certain file extensions
- Status bar
### Shortcuts
- Arrows, PgUp, PgDown, Home, End
  - Cursor movement
- Ctrl + Q
  - Quit text editor
- Ctrl + S
  - Save File
- Ctrl + F
  - Find phrase in file
- Ctrl + G
  - Go to line

## Roadmap checklist
- [ ] Line counter
- [ ] Select text
- [ ] Copy and paste text (Ctrl + X, C, V)
- [ ] Undo (Ctrl + Z)
- [ ] Duplicate current line (Ctrl + D)
- [ ] Better cursor movement (more shortcuts)
- [ ] Config file
- [ ] More filetypes syntax hightlighting
- [ ] Install script

## Build
From the project root:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o note
./note
```
