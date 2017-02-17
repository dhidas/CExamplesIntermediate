#ifndef GUARD_ENamespace_h
#define GUARD_ENamespace_h
////////////////////////////////////////////////////////////////////
//
// Dean Andrew Hidas <dhidas@bnl.gov>
//
// Created on: Fri Feb 17 08:16:33 EST 2017
//
// Notes: This is a namespace.  Functions defined in this namespace
//        live under TENamespace::
//
//        Although it is sometimes common to have a statement like:
//          using namespace TENamespace;
//        I discourage this as misusing it is easy.  You should
//        never put a statement like this in a header (.h) file
//
////////////////////////////////////////////////////////////////////


namespace TENamespace
{
   double Pi ();
   double AddTwo (double const, double const);

}






#endif
