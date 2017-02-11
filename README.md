# CExamplesIntermediate

This repository contains some itermediate examples in c++ for an introduction to scientific computing.

Here header files will contain function declarations and class declarations.  These will be placed in the include/ directory.  Source files will be placed in the src/ directory, and files containing a main function will be placed in the exe/ directory.  The Makefile contains directions for compilation such that anything matching src/\*.cc will be compiled into object code with the name lib/\*.o.  All exec/\*.cc files will be similarly compiled (though the key difference is that these contain a main function) into object code as lib/\*.o (thus avoid giving the same name to something in src/ and exec/.  The Makefile will then link these into executable code in bin/ and there will be one executable program for each file matching exec/\*.cc.

This is done in such a way that all files for one example are similar, for example the first example consists of:
```
include/AHeader.h  - Header file with function and class declarations
src/AHeader.cc     - Source code for functions and class members
exec/AHeaderRun.cc - Containing a main function and support code
bin/AHeaderRun     - Created by the compilation, is the actual executable binary code

## Compilation and Running

You can compile a specific example by typing `make bin/NAME` where NAME matches the exec/NAME.cc file you wish to compile.  For example
```
make bin/AHeaderRun
```
will compile the first example.  To run this example you can type:
```
./bin/AHeaderRun
```
