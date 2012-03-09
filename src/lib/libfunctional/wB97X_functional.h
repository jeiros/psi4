#ifndef wB97X_functional_h
#define wB97X_functional_h
/**********************************************************
* wB97X_functional.h: declarations for wB97X_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 07-Mar-2012
*
***********************************************************/
#include "functional.h"

namespace psi { namespace functional {

class wB97X_Functional : public Functional {
public:
    wB97X_Functional(int npoints, int deriv);
    virtual ~wB97X_Functional();
    virtual void computeRKSFunctional(boost::shared_ptr<RKSFunctions> prop);
    virtual void computeUKSFunctional(boost::shared_ptr<UKSFunctions> prop);
};
}}
#endif

