#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string a,b,c;
	
	ofstream newfile("C:\\Users\\hp\\Desktop\\jay.txt");
	//cout<<"ok";
	cin>>a>>b>>c;
	
	newfile<<a<<b<<c;
	
	newfile.close();
	
	
	return 0;
	
}
