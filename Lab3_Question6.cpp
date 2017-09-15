#include <iostream>
using namespace std;
int main()
{

    int x;
    cout<<"enter the year : ";
    cin>>x;
    if (x%400==0 || x%4==0&&x%100!=0)
    {
        cout <<"it is a leap year";
    }
    else{cout<<"it is not a leap year";}
    return 0;
}
