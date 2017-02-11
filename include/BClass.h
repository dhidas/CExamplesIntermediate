#ifndef GUARD_BClass_h
#define GUARD_BClass_h
////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Sat Feb 11 08:35:30 EST 2017
//
// Notes: A simple class to get, set, and scale a 2D vector.
//
//        There are member functinos with the same name: Mag.
//        'Overloading' in c++ is allowed.  This allows us to have
//        two functions of the same name, taking different inputs
//        which do different things.  They are distinguished by
//        their inputs (overloading based on return values is not
//        allowed).
//
//        There are also now 2 constructors.  A default one (with no
//        arguments) and one which takes 2 arguments.
//
////////////////////////////////////////////////////////////////////



class BClass
{
  public:
    BClass ();
    BClass (double const, double const);
    ~BClass ();

    // Get  functions
    double GetX () const;
    double GetY () const;
    double Mag ()  const;

    // Setting functions
    void SetX  (double const);
    void SetY  (double const);
    void Mag   (double const);


  private:
    double fX;
    double fY;
};



#endif
