#include <iostream>
using namespace std;

int main()
{
      char alp;
      cout<<"Type 'a'\n";
      cin>>alp;
      cout<<"All the alphabets are:\n";
      while(alp>='a'&&alp<='z'){
        cout<<alp++<<endl;
      }


    return 0;
}
