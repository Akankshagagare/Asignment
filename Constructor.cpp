#include<iostream>
using namespace std;
class Book
{
 string Title;
 string Author;
 public:
   Book(string t,string a)
{
	Title=t;
	Author=a;
}
Book(Book &b)
{
 Title=b.Title;
 Author=b.Author;
}
void display()
{
	cout<<"The title of the book is="<<Title<<endl;
	cout<<"The author of the book is="<<Author<<endl;
}
};

int main()
{
 Book b1("Whatever","Akanksha");
 Book b2(b1);
 b1.display();
 b2.display();
 return 0;
}
