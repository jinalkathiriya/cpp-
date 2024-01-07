#include<iostream>
using namespace std;
union stu
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	union stu s;
	cout<<"Enter student rollnumber: ";
	cin>>s.roll;
	cout<<"roll number"<<s.roll<<endl;
	cout<<"Enter student name: ";
	cin>>s.name;
	cout<<"student name"<<s.name<<endl;
	cout<<"Enter student marks: ";
	cin>>s.marks;
	cout<<"student marks"<<s.marks<<endl;

	return 0;
}
