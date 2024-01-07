#include<iostream>
using namespace std;
struct stu
{ 
	int marks;
	float avg;
	double salary;
};
union stu2
{
	int marks;
	float avg;
	double salary;
};
int main()
{
	struct stu s;
	union stu2 s2;
	cout<<"structure size= "<<sizeof(s)<<endl;
	cout<<"union size= "<<sizeof(s2)<<endl;
	
	return 0;
}
