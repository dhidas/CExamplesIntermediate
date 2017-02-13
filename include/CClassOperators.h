#ifndef GUARD_CClassOperators_h
#define GUARD_CClassOperators_h
////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Sat Feb 11 15:58:53 EST 2017
//
// Notes: This is an example of a class where we define a few
//        operators such as +-*/ between the class and other
//        types.  We also define the << operator for easy printing
//        and the [] operators for simple indexing.
//
//
////////////////////////////////////////////////////////////////////


#include <ostream>


class CClassOperators
{
  public:
    CClassOperators ();
    CClassOperators (double const, double const);
    ~CClassOperators ();

    // Get  functions
    double X () const;
    double Y () const;
    double Mag ()  const;

    // Setting functions
    void X  (double const);
    void Y  (double const);
    void Mag   (double const);


  private:
    double fX;
    double fY;


  public:
    CClassOperators operator  + (CClassOperators const&) const;
    CClassOperators operator  - (CClassOperators const&) const;
    CClassOperators operator  * (double const&) const;
    CClassOperators operator  / (double const&) const;

    double     operator [] (int const) const;
    double&    operator [] (int const);
};



std::ostream& operator << (std::ostream&, CClassOperators const&);

CClassOperators operator * (double const V, CClassOperators const& R);




#endif





