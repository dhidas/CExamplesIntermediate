////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Sat Feb 11 15:59:07 EST 2017
//
// Notes; This example shows how to use a class with operators
//
////////////////////////////////////////////////////////////////////


#include <iostream>

#include "CClassOperators.h"


int main (int argc, char* argv[])
{

  // Create two objects (orthogonal basis vectors in this case)
  CClassOperators A(1, 0);
  CClassOperators B(0, 1);

  // We can print them easily now!
  std::cout << "A: " << A << std::endl;
  std::cout << "B: " << B << std::endl;

  // We can add and subtract them now
  std::cout << "A + B = " << A + B << std::endl;
  std::cout << "A - B = " << A - B << std::endl;

  // We can scale them:
  std::cout << "5 * A = " << 5 * A << std::endl;
  std::cout << "B / 5 = " << B / 5 << std::endl;

  // We can reference their components by index
  std::cout << "A[0] = " << A[0] << std::endl;
  std::cout << "A[1] = " << A[1] << std::endl;

  // We can set them by index
  A[0] = 0;
  A[1] = 1;
  B[0] = 1;
  B[1] = 0;
  std::cout << "A: " << A << std::endl;
  std::cout << "B: " << B << std::endl;



  // And some more manipulations
  std::cout << "The answer is " << ((A + B) * 29.69848480983499602483).Mag() << std::endl;
  return 0;
}
