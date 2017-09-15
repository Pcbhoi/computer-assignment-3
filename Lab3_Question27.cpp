#include <iostream>
using namespace std;

int main()
{
      int n,a,sum=0;
      cout<<"Till what number, you want to find the sum:\n";
      cin>>n;
      a=1;
      while(a<=n){
        sum += a;
        ++a;
      } cout<<"sum = "<<sum<<endl;
      return 0;
}
