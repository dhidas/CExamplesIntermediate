////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Mon Feb 13 08:23:33 EST 2017
//
////////////////////////////////////////////////////////////////////

#include "DClassDerived.h"

#include <cmath>


DClassDerived::DClassDerived ()
{
  // Constructor

  // Set the Z component default is zero
  fZ = 0;

  // Set the dimension variable (protected member of DClass)
  fDim = 3;
}




DClassDerived::DClassDerived (double const X, double const Y, double const Z) : DClass(X, Y)
{
  // Constructor taking x y and z argumnets.  This constructor calls the constructor of
  // DClass that takes two arguments (seen above)

  // Set the Z component
  fZ = Z;

  // Set the dimension variable (protected member of DClass)
  fDim = 3;
}




DClassDerived::~DClassDerived ()
{
  // Destruction!
}




double DClassDerived::Z () const
{
  // Return the fZ component
  return fZ;
}




int DClassDerived::Dim () const
{
  // Return the protected member of DClass for the dimension
  return fDim;
}




double DClassDerived::Mag () const
{
  // We must redefine the Mag function for 3D.  Why do we use this->X(), Y() and not
  // fX like we do fZ?  fX and fY are private members of DClass so we do not have
  // access to them as we do fZ.  We do however have access to the setting functions
  // X(double const) and Y(double const)
  return sqrt( this->X() * this->X() + this->Y() * this->Y() + fZ * fZ );
}




void DClassDerived::Z (double const Z)
{
  // Set the internal Z variable
  fZ = Z;
  return;
}




std::ostream& operator << (std::ostream& os, DClassDerived const& V)
{
  // For easy printing
  os << "(" << V.X() << ", " << V.Y() << ", " << V.Z() << ")";
  return os;
}


