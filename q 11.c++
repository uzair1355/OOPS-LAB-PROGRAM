#include <iostream>
#include<cmath>
using namespace std;
// Write a program that accepts two complex numbers (real and imaginary parts) and compares 
// them.
// • Use if-else to determine which complex number has a higher magnitude.
// • Print "Equal" if they have the same magnitude.
int main(){


double x,y,a,b;


cout<< "enter the real parts numbers  real1 and real2\n";
cin>>x>>y;

cout<< "enter the imaginary  parts numbers  imaginary1 and imaginary2\n";
cin>>a>>b;

double mag1 = sqrt((x*x) +( a*a));

double mag2 = sqrt((y*y) +( b*b));


if(mag1>mag2){
    cout<<"1st complex no has greater magnitude\n";
}

else if (mag1<mag2) {
     cout<<"2nd complex no has greater magnitude\n";
}

else{
     cout<<"1st complex and 2nd complex have equal magnitude\n";
}

    return 0;

}