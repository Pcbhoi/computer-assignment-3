#include <iostream>
using namespace std;

int main()
{
   int m;
   bool leapyear=false;
   cout<<"Enter a number between 1 and 12\n";
   cin>>m;
   if(m==1){
    cout<<"The month is January with 31 days";
   } else if(m==2){
    cout<<"The month is February with 28 or 29 days";
   }else if(m==3){
    cout<<"The month is March with 31 days";
   } else if(m==4){
    cout<<"The month is April with 30 days";
   } else if(m==5){
    cout<<"The month is May with 31 days";
   } else if(m==6){
    cout<<"The month is June with 30 days";
   } else if(m==7){
    cout<<"The month is July with 31 days";
   } else if(m==8){
    cout<<"The month is August with 31 days";
   } else if(m==9){
    cout<<"The month is September with 30 days";
   } else if(m==10){
    cout<<"The month is October with 31 days";
   } else if(m==11){
    cout<<"The month is November with 30 days";
   } else if(m==12){
    cout<<"The month is December with 31 days";
   } else {
    cout<<"The entered number is invalid";
   }


   return 0;
}
