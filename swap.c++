#include <iostream>
using namespace std;
void swap (int &x ,int &y );

int main()
{
    int a,b;
cout<<"enter the two numbers"<<endl;
cin>>a>>b;

cout<<"numbers before swap:"<<a<<b<<endl;

swap(a,b);

cout<<"numbers after swap:"<<a<<b<<endl;

return 0;


}

void swap(int &x, int &y){
int temp;
temp = x;
x=y;
y=temp;

cout<<"swaped numbers in fuctions"<<x<<y<<endl;




}