#include <iostream>
using namespace std;

int main()
{
    char cht;
    cout<<"Enter an character: \n";
    cin>>cht;
    if (cht>='a'&& cht<='z' || cht>='A' && cht<='Z'){
        cout<<"The character is an alphabet";
    } else {
        cout<<"The character is not an alphabet";
    }




    return 0;
}
