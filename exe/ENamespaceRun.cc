////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Fri Feb 17 08:16:45 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>

#include "ENamespace.h"



int main (int argc, char* argv[])
{
  // Get Pi from the namespace function
  std::cout << TENamespace::Pi() << std::endl;

  // Add using the function defined in the namespace
  std::cout << TENamespace::AddTwo(1.23, 3.21) << std::endl;

  return 0;
}
