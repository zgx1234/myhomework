#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"
class OvernightPackage : public Package
{
public:
   OvernightPackage( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double, double );

   void setOvernightFeePerOunce( double );
   double getOvernightFeePerOunce() const;

   virtual double calculateCost() const;
private:
   double overnightFeePerOunce;
};
#endif
