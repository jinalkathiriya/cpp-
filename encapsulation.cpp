#include<iostream>
using namespace std;
class thief
{
	private:
	string name,address;
	int mob;
	
	public:
		void input()
		{
			name="JINAL";
			address="old purulia road";
			mob=1234567890;
		}
		void output()
		{
			cout<<name<<endl;
			cout<<address<<endl;
			cout<<mob;
		}
};
class police:public thief
{
	
};
int main()
{
	police p;
	p.input();
	p.output();
	
	return 0;
}
