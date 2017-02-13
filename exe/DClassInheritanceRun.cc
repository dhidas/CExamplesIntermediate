////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Mon Feb 13 08:20:25 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>

#include "DClassDerived.h"



int main (int argc, char* argv[])
{
  // Create an object of DClassDerived and print some details
  DClassDerived A(0, 1, 0);
  std::cout << "A:       " << A << std::endl;
  std::cout << "A.Mag(): " << A.Mag() << std::endl;
  std::cout << "A.Dim(): " << A.Dim() << std::endl;

  // Set the X Y and Z components.  See that Mag() is the 3D version
  A.X(3);
  A.Y(2);
  A.Z(1);
  std::cout << "A:       " << A << std::endl;
  std::cout << "A.Mag(): " << A.Mag() << std::endl;

  return 0;
}
