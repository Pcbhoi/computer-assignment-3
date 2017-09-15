#include <iostream>
using namespace std;

int main()
{
    char cht;
    cout<<"Enter an character: \n";
    cin>>cht;
    if (isalpha(cht)){
        cout<<"The character is an alphabet";
} else if (isdigit(cht)){
        cout <<"The character is a digit";
} else {
        cout<<"The character is a special character";
}

    return 0;
}
