#ifndef GUARD_AHeader_h
#define GUARD_AHeader_h
////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Fri Feb 10 13:27:48 EST 2017
//
// Notes: This is the 'header' file for functions in src/AHeader.cc
//        The #ifndef, #define, and #endif are for guarding against
//        the compiler including this header multiple times from
//        different sources that are asking for it (via #include)
//
//        Function declarations go here.  Function definitions go in
//        .cc files.
//
// NEVER: put a statement like the following in a header file:
//          using namespace std;
//        'using' is a dangerous thing to put in a header file and
//        should be reserved for use in .cc files only, although I
//        generally discourage their use.
//
////////////////////////////////////////////////////////////////////


// Declare the functions you need here!

// Function to say hello
void SayHello ();

// Function to add to ints and return the summation
int AddTwo (int const, int const);



#endif
