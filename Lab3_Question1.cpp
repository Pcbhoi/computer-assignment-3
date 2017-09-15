#include<iostream>
using namespace std;
int main()
{
        float a, b, c;
	cout<<"Enter a number\n";
	cin>>a;
	cout<<"Enter another number\n";
	cin>>b;
	if(a>b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	cout<<"Biggest of the two number is "<<c;
	return 0;
}
