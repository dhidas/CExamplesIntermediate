////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Mon Feb 13 08:23:27 EST 2017
//
// Notes: This is a simple class containing 2 internal variables,
//        functions to get and set them, a function to calculate the
//        magnitude of the 2D vector, and a constructor taking both
//        X and Y components as arguments.  There is an additional
//        'protected' variable fDim.  Nee note below
//
////////////////////////////////////////////////////////////////////

class DClass
{
  public:
    DClass ();
    DClass (double const, double const);
    ~DClass ();

    double X () const;
    double Y () const;

    void X (double const);
    void Y (double const);

    double Mag () const;

  private:
    double fX;
    double fY;

  // public members everyone has direct access to,
  // private members only this class has direct access to,
  // protected member this class has direct access to as well as
  // class that inherit from this class
  protected:
    int fDim;
};

