#include<iostream>
using namespace std;
template<class A>
class print
{
	public:
		print(A X,A Y)
		{
			cout<<X<<ends<<Y<<endl;
		}
};
int main()
{
//	print<int>obj(100,200);
//	print<char>obj('j','s');
	print<double>obj(25.37,470.367738);
	
	return 0;
}
