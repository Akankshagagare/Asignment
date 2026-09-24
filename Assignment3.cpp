#include<iostream>
#include<string>
using namespace std;

class Product
{
	public :
	int productId;
	string product_name;
	float price;
	int monthlySales[12];

void get_data()
{
	cout<<"PLEASE ENTER PRODUCT ID: ";
	cin>>productId;
	
	cout<<"PLEASE ENTER PRODUCT NAME: ";
	getline(cin >> ws, product_name);
	
	cout<<"ENTER PRODUCT PRICE: ";
	cin>>price;
	
	cout<<"INPUT SALES DATA FOR 12 MONTHS:\n";
	for(int i=0; i < 12; i++)
	{
		cout<<"MONTH NO. "<<i+1<<": ";
		cin>>monthlySales[i];
	}
}
int total_qty()
{
	int total = 0;
	for(int i=0; i<12; i++)
	{
		total = total+monthlySales[i];
	}
	return total;
}

float total_bill()
{
	return total_qty()*price;
}

void display_product()
{
	cout<<"\n--- PRODUCT ID : "<<productId;
	cout<<"\n--- PRODUCT NAME : "<<product_name;
	cout<<"\n--- PRODUCT PRICE : "<<price;
	cout<<"\n--- TOTAL QUANTITY : "<<total_qty();
	cout<<"\n--- TOTAL BILL AMOUNT : "<<total_bill()<<endl;
}
};

int main()
{
	Product p;
	p.get_data();
	p.display_product();
return 0;
}
