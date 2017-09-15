#include <iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter your initial amount:\n";
    cin>>a;
    cout<<"Enter your final amount:\n";
    cin>>b;
    if(a>b){
        cout<<"There is a loss of\n";
        cout<<((a-b)*100)/a;
        cout<<"percent";
    } else if(a<b){
        cout<<"There is a profit of\n";
        cout<<((b-a)*100)/a;
        cout<<"percent";
    } else{
        cout<<"There is neither profit nor loss";
    }
    return 0;
}
