////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Mon Feb 13 08:23:27 EST 2017
//
////////////////////////////////////////////////////////////////////

#include "DClass.h"

#include <cmath>
#include <stdexcept>


DClass::DClass()
{
  // Default constructor

  // Let's make the default vector (1, 0):
  fX = 1;
  fY = 0;

  // Set protected member default to zero
  fDim = 2;
}




DClass::DClass(double const X, double const Y)
{
  // Constructor taking 2 arguments, x and y components of a vector

  // Create the vector as specified
  fX = X;
  fY = Y;

  // Set protected member default to zero
  fDim = 2;
}




DClass::~DClass ()
{
  // Destruction!
}




double DClass::X () const
{
  // Get the internal fX variable
  return fX;
}




double DClass::Y () const
{
  // Get the internal fY variable
  return fY;
}




double DClass::Mag () const
{
  // Get the magnitude of the vector
  return sqrt(fX * fX + fY * fY);
}




void DClass::X (double const X)
{
  // Set the internal fX variable
  fX = X;
  return;
}



void DClass::Y (double const Y)
{
  // Set the internal fY variable
  fY = Y;
  return;
}

