 /***************************************************************************** 
  * Project: RooFit                                                           * 
  *                                                                           * 
  * This code was autogenerated by RooClassFactory                            * 
  *****************************************************************************/ 

 // Your description goes here... 

 #include "Riostream.h" 

 #include "RooJohnsonSU.h" 
 #include "RooAbsReal.h" 
 #include "RooAbsCategory.h" 
 #include <math.h> 
 #include "TMath.h" 

 ClassImp(RooJohnsonSU) 

 RooJohnsonSU::RooJohnsonSU(const char *name, const char *title, 
                        RooAbsReal& _x,
                        RooAbsReal& _xi,
                        RooAbsReal& _lambda,
                        RooAbsReal& _gamma,
                        RooAbsReal& _delta) :
   RooAbsPdf(name,title), 
   x("x","x",this,_x),
    xi(" xi"," xi",this,_xi),
    lambda(" lambda"," lambda",this,_lambda),
    gamma(" gamma"," gamma",this,_gamma),
    delta(" delta"," delta",this,_delta)
 {
 }


 RooJohnsonSU::RooJohnsonSU(const RooJohnsonSU& other, const char* name) :  
   RooAbsPdf(other,name), 
   x("x",this,other.x),
    xi(" xi",this,other. xi),
    lambda(" lambda",this,other.lambda),
    gamma(" gamma",this,other.gamma),
   delta(" delta",this,other.delta)
 { 
 } 

 Double_t RooJohnsonSU::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   Double_t tmp = (Double_t)(x-xi) / TMath::Abs(lambda);
    //return delta/lambda/sqrt(2*M_PI)/sqrt(1+tmp*tmp)*exp(-0.5*pow(gamma+delta*log(tmp+sqrt(1+tmp*tmp)),2));
    //return 1./sqrt(1+tmp*tmp)*exp(-0.5*(2*gamma*delta*log(tmp+sqrt(1+tmp*tmp))+pow(delta*log(tmp+sqrt(1+tmp*tmp)),2) )   );
   return ( ((Double_t)1./TMath::Sqrt((Double_t)1.+tmp*tmp)) * TMath::Power(tmp+TMath::Sqrt((Double_t)1.+tmp*tmp), (Double_t)-1.*gamma-(Double_t)0.5*delta*TMath::Log(tmp+TMath::Sqrt((Double_t)1.+tmp*tmp))) ) ;

 } 

