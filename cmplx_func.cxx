#include <iostream>
#include <complex>
#include <cmath>

using namespace std;



complex<double> f(double phi){
  complex<double> ii=complex<double>(0.0,1.0);
  return tan((1.0+ii)*phi);
}

int main(){

  // i einführen
  complex<double> ii=complex<double>(0.0,1.0);
  complex<double> z; 
  int N=100;
  complex<double> p[N];
  double dphi=2.0*M_PI/N;
  double phi,r[N];
  
  for(int i=0;i<N;i++){
    phi=i*dphi-M_PI;
    z=f(phi);
    //z=exp(phi*ii);
    p[i]=z;
    r[i]=phi;
  }  
  for(int i=0;i<N;i++){
    cout << r[i] << "\t";
    cout << real(p[i]) << "\t";
    cout << imag(p[i]) << "\t";
    cout << abs(p[i]) << endl;
  } 
  return 0;
}
