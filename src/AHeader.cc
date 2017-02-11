////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Fri Feb 10 13:27:56 EST 2017
//
// Notes: Function definitions go here.  This file '#include's the
//        header file for the declarations.
//
////////////////////////////////////////////////////////////////////


#include <iostream>

// You should include the associated header file.  Technically for this example
// it is not necessairy, but it *will* be for nearly everything else
#include "AHeader.h"

void SayHello ()
{
  // Say Hello function

  std::cout << "Hello world!" << std::endl;

  return;
}




int AddTwo (int const A, int const B)
{
  // Function to add to integers and return the result

  return A + B;
}
