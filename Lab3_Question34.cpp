#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,z,a,b,i=0,w,x,y,snum;
    cout<<"Enter a number :";
    cin>>num;
    z=num;
    b=num%10;
    while(num>10){
       if (a=num/10){
           num=a;
          }i++;
     }cout<<"The first digit ="<<a<<endl;
      cout<<"The last digit ="<<b<<endl;
      w= pow(10,i);
      x= z%w;
      y= (b*w)+x;
      snum= (y-b)+a;
      cout<<"The number after swapping = "<<snum;
      return 0;
}
