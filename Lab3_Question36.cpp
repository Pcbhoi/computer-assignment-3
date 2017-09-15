#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     int tot, num, pro = 1;

    cout << "Enter the number : ";
    cin >> tot;
    num = tot;
    while (num != 0)
    {
        pro = pro * (num % 10);
        num = num / 10;
    }
    cout << "The product of the digits of "
         << tot << " is " << pro;

   return 0;
}
