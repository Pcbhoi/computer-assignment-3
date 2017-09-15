#include <iostream>
using namespace std;

int main()
{
      int a,n,i=1,product;
      cout<<"Enter the number for which you want the multiplication table : ";
      cin>>a;
      cout<<"Till what number, you want the table to exist : ";
      cin>>n;
      while(i<=n)
      {
         product=a*i;
         ++i;
        cout<<product<<endl;
      }

        return 0;
}
