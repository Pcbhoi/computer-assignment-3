#include <iostream>
using namespace std;

int main()
{
    char al;
    cout<<"Enter an alphabet: \n";
    cin>>al;
    if (al=='a'||al=='A'||al=='e'||al=='E'||al=='i'||al=='I'||al=='o'||al=='O'||al=='u'||al=='U'){
        cout<<"The alphabet is a vowel";
    } else {
        cout<<"The character is a consonant";
    }




    return 0;
}
