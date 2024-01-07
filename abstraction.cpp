#include<iostream>
using namespace std;
class myBank
{
	private:
		int atmPIN,Balance;
	public:
	string bName,IFSC;
	int accNumber;
	
	void input()
	{
		atmPIN=2611;
		Balance=123456;
		bName="paytm";
		IFSC="pytm0987654";
		accNumber=98765432;	
	}
	void output()
	{
		cout<<"My bank details.."<<endl;
		cout<<atmPIN<<endl;
		cout<<Balance<<endl;
		cout<<bName<<endl;
		cout<<IFSC<<endl;
		cout<<accNumber<<endl;
	}
};
int main()
{
	myBank m;
	m.input();
	m.output();
	
	cout<<"regestring to access my account.."<<endl;
//	cout<<m.atmPIN<<endl;
//	cout<<m.Balance<<endl;
	cout<<m.bName<<endl;
	cout<<m.IFSC<<endl;
	cout<<m.accNumber<<endl;
	
	return 0;
}
