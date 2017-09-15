#include <iostream>
using namespace std;

int main()
{
      int a,n;
      cout<<"Till what number, you want to find the odd numbers :\n";
      cin>>n;
      cout<<"All even numbers till "<<n<<"=\n";
      a=1;
      while(a<=n){
        if(a%2==1){
            cout<<a<<endl;
        } a++;
      }
      return 0;
}
