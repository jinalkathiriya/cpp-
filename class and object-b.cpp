#include<iostream>
using namespace std;
class person
{
	private:
	int run;
	string msg;
	public:
		void play()
		{
			run=50;
			cout<<"scored"<<run<<"runs"<<endl;
		}
		void walk()
		{
			msg="today i walked 3 km";
			cout<<msg;
		}
};
int main()
{
	person obj;
	obj.play();
	obj.walk();
	
	return 0;
}
