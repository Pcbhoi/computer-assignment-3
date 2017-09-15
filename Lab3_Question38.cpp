#include<iostream>
using namespace std;
int main()
{
    int64_t num0,num1,num2,rev=0;
    cout<<"Enter a number :\n";
    cin>>num1;
    num0=num1;
    do
     {
        num2=num1% 10;
        rev=(rev*10)+num2;
        num1 = num1 / 10;
    } while(num1!=0);
        cout<<"The reverse of the number :"<<rev;
    if(num0==rev){
       cout<<"\nThe number follows palindromic sequence.";
     }else{
       cout<<"\nThe number does follow not palindromic sequence.";
    }


	return 0;
}
