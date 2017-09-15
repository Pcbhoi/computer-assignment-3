#include<iostream>
using namespace std;
int main()
{   float a, b, c;
    cout<<"Enter three numbers \n";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"Largest of three number is " <<a;
    } else if (b>a && b>c){
    cout<<"Largest of three number is " <<b;
    }else {
    cout<<"Largest of three number is " <<c;
    }


	return 0;
}
