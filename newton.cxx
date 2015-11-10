#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){

  // Example how to declare a single complex variable:
  double re,im;
  int n;
  complex<double> z,zsave;
  
  for(double im=-2;im<=2;im+=0.01){
  
    for(double re=-2;re<=2;re+=0.01){
      complex<double> z0=complex<double>(re,im);
      zsave = z0;
      for (n=0; n<40; n++){
	z=z0-((z0*z0*z0*z0-1.0)/(4.0*z0*z0*z0));
	// z0*z0*z0 ~ pow(z0,3)
        if(abs(z-z0) < 1e-8) break;
	z0=z;
      }
      cout <<real(zsave) <<"\t" <<imag(zsave) <<"\t" << n << endl;
    }
  }

  return 0;
}
