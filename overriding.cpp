#include<iostream>
using namespace std;
class Animal
{
	public:
void eat()
{
	cout<<"Animal eat food"<<endl;
}
};
class Cat:public Animal
{
	public:
void eat()
{
	cout<<"Cat eats fish"<<endl;
}
};
int main()
{
	Animal *ptr;
	Cat c;

	ptr=&c;

	ptr->eat();
	return 0;
}
