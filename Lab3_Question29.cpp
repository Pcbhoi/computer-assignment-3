#include <iostream>
using namespace std;

int main()
{
      int n,a,sum=0;
      cout<<"Till how many odd numbers you want to find the sum:\n";
      cin>>n;
      a=1;
      while(a<=n){
        if(a%2==1){
        sum += a;
        }
        ++a;
      } cout<<"sum = "<<sum<<endl;
      return 0;
}
