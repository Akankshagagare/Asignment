#include<iostream>
using namespace std;
class Calculator
{
	public:
	int sum;
int add(int a,int b)
{
	return sum=a+b;
}
int add(int a,int b,int c)
{
	return sum=a+b+c;
}
};
int main()
{
	Calculator c;
	cout<<"The sum1 is:"<<c.add(2,3);
	cout<<"The sum2 is:"<<c.add(2,3,4);
	return 0;
}
