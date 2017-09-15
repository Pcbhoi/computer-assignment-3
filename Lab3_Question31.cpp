#include <iostream>
using namespace std;

int main()
{
    int64_t x,a,i=0;
    cout<<"Enter a number:\n";
    cin>>x;
    while(x!=0){
        a=x/10;
        x=a;
        i++;
    }
    cout<<"No. of digits ="<<i;
    return 0;
}
