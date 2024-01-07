#include<iostream>
using namespace std;
class jinal
{
	private:
		string tv;
	public:
		void show()
		{
			tv="ipl final 2021";
		}
		friend void swastik(jinal r);
};
void swastik(jinal r)
{
	cout<<"I'm swastik now i,'watching "<<r.tv;
}
int main()
{
	jinal a;
	a.show();
	swastik(a);
		
	return 0;
}
