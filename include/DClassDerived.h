////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Mon Feb 13 08:23:33 EST 2017
//
// Notes; This is a derived class.  It inherits from DClass and thus
//        public and protected members of DClass are accessible from
//        this class.  We add a Z component and overload the Mag()
//        function to correctly calculate the magnitude for 3D.
//        There is also a member function to get and set the
//        protected member fDim of DClass.
//
////////////////////////////////////////////////////////////////////

#include "DClass.h"

#include <ostream>

// DClassDerived inherits from DClass
class DClassDerived : public DClass
{
  public:
    DClassDerived ();
    DClassDerived (double const, double const, double const);
    ~DClassDerived ();

    double Z () const;
    int    Dim () const;
    double Mag () const;

    void Z (double const);

  private:
    double fZ;
};


std::ostream& operator << (std::ostream&, DClassDerived const&);
