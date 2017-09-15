#include <iostream>
using namespace std;

int main()
{
    char al;
    cout<<"Enter a character: \n";
    cin>>al;
    if (al>='a'&&al<='z'){
        cout<<"This is a lower case alphabet";
    } else if(al>='A'&&al<='Z') {
        cout<<"This is an upper case alphabet";
    } else {
        cout<<"This is not an alphabet";
    }

   return 0;
}
