#include <iostream>
using namespace std;

int main()
{
    int ang1,ang2,ang3;
    cout<<"Enter three angles to check if it is a triangle\n";
    cin>>ang1>>ang2>>ang3;
    if(ang1+ang2+ang3==180){
        cout<<"These angles form a triangle";
    } else{
        cout<<"These angles does not form a triangle";
    }

   return 0;
}
