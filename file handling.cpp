#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//	ofstream newfile("D:\\c++jinal\\win10\\Desktop\\cpp.txt");
//	cout<<"file created...";
//	newfile<<"cpp full course...";
//	newfile.close();
	
	
	string str;
	ifstream newfile("D:\\c++jinal\\win10\\desktop\\cpp.txt");
	
	while(getline(newfile,str))
	{
		cout<<str<<endl;
	}
	newfile.close();
	
	
	return 0;
}
