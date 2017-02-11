////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Fri Feb 10 13:22:48 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>

// Include function declarations from the header file
#include "AHeader.h"



int main (int argc, char* argv[])
{
  SayHello();

  std::cout << AddTwo(1, 41) << std::endl;

  return 0;
}
