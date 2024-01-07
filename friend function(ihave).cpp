#include<iostream>
using namespace std;
class swastik;
class jinal
{
	private:
		int a;
	public:
		void ihave()
		{
			a=10;
		}
		friend void janu(jinal p,swastik p2);
};
class swastik
{
	private:
		int b;
	public:
		void ihave()
		{
			b=10;
		}
		friend void janu(jinal p,swastik p2);
};
void janu(jinal p,swastik p2)
{
	int c;
	c=p.a + p2.b;
	cout<<c;
}
int main()
{
	jinal a;
	a.ihave();
	swastik a2;
	a2.ihave();
	janu(a,a2);
		
	return 0;
}
