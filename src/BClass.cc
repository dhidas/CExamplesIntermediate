////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Sat Feb 11 08:35:26 EST 2017
//
////////////////////////////////////////////////////////////////////

#include "BClass.h"

#include <cmath>


BClass::BClass()
{
  // Default constructor

  // Let's make the default vector (1, 0):
  fX = 1;
  fY = 0;
}




BClass::BClass(double const X, double const Y)
{
  // Constructor taking 2 arguments, x and y components of a vector

  // Create the vector as specified
  fX = X;
  fY = Y;
}




BClass::~BClass ()
{
  // Destruction!
}




double BClass::GetX () const
{
  // Get the internal fX variable
  return fX;
}




double BClass::GetY () const
{
  // Get the internal fY variable
  return fY;
}




double BClass::Mag () const
{
  // Get the magnitude of the vector
  return sqrt(fX * fX + fY * fY);
}




void BClass::SetX (double const X)
{
  // Set the internal fX variable
  fX = X;
  return;
}



void BClass::SetY (double const Y)
{
  // Set the internal fY variable
  fY = Y;
  return;
}




void BClass::Mag (double const M)
{
  // Set the magnitude.  A nagative number is interpreted as a desire to switch the
  // direction of the vector

  // Create a scale factor based on the old and new magnitudes.  *this* is a
  // pointer to the object itself the -> is to dereference that pointer which
  // is used to call the member Mag()
  double const SF = M / this->Mag();

  // Scale the vector components
  fX *= SF;
  fY *= SF;

  return;
}
