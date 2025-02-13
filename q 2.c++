#include <iostream>
using namespace std;
int main (){


int age;

// >12 child
// >12<18 teen
// >18<60 adult
// >60 senior

cout<<"enter the age\n";
cin>>age;

if(age>0 && age<120)

if(age<12)
{
    cout<<"yot are child";

}
else if(age>12 && age<18){
    cout<<"you are teenager";

}
 else if (age>18 && age<60){
    cout<<"you are adult";

}

else {
    cout<<"you are senior";

}

}