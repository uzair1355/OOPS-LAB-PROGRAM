#include <iostream>
using namespace std;

int main(){

int x;

// program that takes a student's score (out of 100) as input and displays the grade based on 
// wing criteria:A: 90-100 B: 80-89 C: 70-79  D: 60-69  F: Below 60 f

cout<<"enter the marks u got from 100 \n";
cin>>x;

if(x>90 && x<=100){

    cout<<"u got A grade ";

}

else if (x>=80 && x<90){

cout<<"u got B grade ";


}

else if (x>=70 && x<80){

cout<<"u got C grade ";


}

else if (x>=60 && x<70){

cout<<"u got D grade ";


}

else   {

cout<<"u got F grade ";

}





}