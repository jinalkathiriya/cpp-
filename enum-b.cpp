#include<iostream>
using namespace std;
int main()
{
	enum gender {
		male,female,other
	};
	cout<<male<<endl;
	gender str=gender(0);
	cout<<str<<endl;
	cout<<gender(0);
	return 0;
	
 } 
