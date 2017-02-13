////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Sat Feb 11 15:58:43 EST 2017
//
////////////////////////////////////////////////////////////////////

#include "CClassOperators.h"

#include <cmath>
#include <stdexcept>


CClassOperators::CClassOperators()
{
  // Default constructor

  // Let's make the default vector (1, 0):
  fX = 1;
  fY = 0;
}




CClassOperators::CClassOperators(double const X, double const Y)
{
  // Constructor taking 2 arguments, x and y components of a vector

  // Create the vector as specified
  fX = X;
  fY = Y;
}




CClassOperators::~CClassOperators ()
{
  // Destruction!
}




double CClassOperators::X () const
{
  // Get the internal fX variable
  return fX;
}




double CClassOperators::Y () const
{
  // Get the internal fY variable
  return fY;
}




double CClassOperators::Mag () const
{
  // Get the magnitude of the vector
  return sqrt(fX * fX + fY * fY);
}




void CClassOperators::X (double const X)
{
  // Set the internal fX variable
  fX = X;
  return;
}



void CClassOperators::Y (double const Y)
{
  // Set the internal fY variable
  fY = Y;
  return;
}




void CClassOperators::Mag (double const M)
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




CClassOperators CClassOperators::operator + (CClassOperators const& V) const
{
  // Vector addition, add components and return a class object
  return CClassOperators(this->X() + V.X(), this->Y() + V.Y());
}




CClassOperators CClassOperators::operator - (CClassOperators const& V) const
{
  // Vector subtraction, add components and return a class object
  return CClassOperators(this->X() - V.X(), this->Y() - V.Y());
}




CClassOperators CClassOperators::operator * (double const& S) const
{
  // Vector multiplication by a scalar, return class object
  return CClassOperators(this->X() * S, this->Y() * S);
}




CClassOperators CClassOperators::operator / (double const& S) const
{
  // Vector division by a scalar, return class object
  return CClassOperators(this->X() / S, this->Y() / S);
}




std::ostream& operator << (std::ostream& os, CClassOperators const& V)
{
  // For easy printing
  os << "(" << V.X() << ", " << V.Y() << ")";
  return os;
}


CClassOperators operator * (double const V, CClassOperators const& R)
{
  // Multiply vector by some scalar
  return CClassOperators(R.X() * V, R.Y() * V);
}



double CClassOperators::operator [] (int const i) const
{
  // An operator to use an index like a vector
  // For getting a value

  if (i == 0) {
    return this->X();
  } else if (i == 1) {
    return this->Y();
  }

  throw std::out_of_range("Index out of range in CClassOperators::operator []");
}





double& CClassOperators::operator [] (int const i)
{
  // An operator to use an index like a vector
  // For setting a value

  if (i == 0) {
    return fX;
  } else if (i == 1) {
    return fY;
  }

  throw std::out_of_range("Index out of range in CClassOperators::operator []");
}
