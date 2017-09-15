#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three sides of a triangle\n";
    cin>>a>>b>>c;
    if(a+b>c||b+c>){
        cout<<"This is an equilateral triangle";
    } else if(a==b||b==c||a==c){
        cout<<"This is an isosceles triangle";
    } else if(a+b<=c||b+c<=a||a+c<=b){
        cout<<"These sides are invalid for a triangle";
    } else {
        cout<<"This is a scalene triangle";
    }

   return 0;
}
