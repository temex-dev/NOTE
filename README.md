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

## Usage
After [installation](#installation) everytime you run this app it checks if config file exists `/home/user/.config/NOTE/config.json`, if doesn't, it will create one there with default settings.

| Command | Usage |
| :- | :- |
| `NOTE [file]` | opens file in NOTE |
| `NOTE --help` | prints this list of commands |
| `NOTE --config-edit` | opens config file in NOTE |
| `NOTE --config-path` | prints path to config |
| `NOTE --config-default` | overwrites config into default values |


## Roadmap checklist
- [x] ~Line counter~
- [ ] Select text
- [ ] Copy and paste text (Ctrl + X, C, V)
- [ ] Undo (Ctrl + Z)
- [x] ~Duplicate current line (Ctrl + D)~
- [ ] Better cursor movement (more shortcuts)
- [x] ~Config file~
- [x] ~More filetypes syntax hightlighting~
- [ ] Install script

## Installation
From the project root:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o note
./note
```
