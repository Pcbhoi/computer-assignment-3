#include <iostream>
using namespace std;
int main()
{
     int num,b,a=0 ;

    cout << "Enter the number : ";
    cin >>b;
    num = b;
    cout << "The reverse of "<<b<<" = ";
    while (num != 0)
    {
        a= num % 10;
        num = num / 10;
        cout << a;
    }


   return 0;
}
