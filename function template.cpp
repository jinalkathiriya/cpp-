#include<iostream>
using namespace std;
template<class A>
void print(A X,A Y)
{
	cout<<X<<ends<<Y<<endl;
}
int main()
{
	print(10,20);
	print('a','b');
	print(45.76,367.48);
	print("jinal","swastik");
	
	return 0;
}
