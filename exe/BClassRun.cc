////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Sat Feb 11 08:35:09 EST 2017
//
////////////////////////////////////////////////////////////////////


#include <iostream>

#include "BClass.h"


int main (int argc, char* argv[])
{

  // Create a BClass object and print it
  BClass B0;
  std::cout << "B0: " << B0.GetX() << " " << B0.GetY() << " " << B0.Mag()<< std::endl;

  // Modify the X vaule
  B0.SetY(1);
  std::cout << "B0: " << B0.GetX() << " " << B0.GetY() << " " << B0.Mag()<< std::endl;

  // Modify the Magnitude
  B0.Mag(2);
  std::cout << "B0: " << B0.GetX() << " " << B0.GetY() << " " << B0.Mag()<< std::endl;

  // Modify the Magnitude
  B0.Mag(-2);
  std::cout << "B0: " << B0.GetX() << " " << B0.GetY() << " " << B0.Mag()<< std::endl;




  // Now create a BClass using the alternative constructor
  BClass B1(3, 4);
  std::cout << "B1: " << B1.GetX() << " " << B1.GetY() << " " << B1.Mag()<< std::endl;


  return 0;
}
