#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter your amount:\n";
    cin>>x;
    if(x>0){
    cout<<"no. of 2000=";
    cout<<x/2000,x=x%2000;
    cout<<"\nno. of 500=";
    cout<<x/500,x=x%500;
    cout<<"\nno. of 100=";
    cout<<x/100,x=x%100;
    cout<<"\nno. of 50=";
    cout<<x/50,x=x%50;
    cout<<"\nno. of 20=";
    cout<<x/20,x=x%20;
    cout<<"\nno. of 10=";
    cout<<x/10,x=x%10;
    cout<<"\nno. of 5=";
    cout<<x/5,x=x%5;
    cout<<"\nno. of 2=";
    cout<<x/2,x=x%2;
    cout<<"\nno. of 1=";
    cout<<x/1,x=x%1;
} else{
    cout<<"Entered amount is invalid";
}   
    return 0;
}
