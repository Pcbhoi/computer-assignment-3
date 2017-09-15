#include <iostream>
using namespace std;
int main()
{
     int tot, num, sum = 0;

    cout << "Enter the number : ";
    cin >> tot;
    num = tot;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "The sum of the digits of "
         << tot << " is " << sum;

   return 0;
}
