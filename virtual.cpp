#include<iostream>
using namespace std;
class Animal
{
	public:
virtual void sleep()
{
	cout<<"Animals sleep a lot"<<endl;
}
};
class Koala:public Animal
{
void sleep()
{
	cout<<"Koala sleeps all day"<<endl;
}
};
int main()
{
	Animal *ptr;
	Koala k;

	ptr=&k;
	ptr->sleep();

	return 0;
}
