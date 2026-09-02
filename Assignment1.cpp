#include <iostream>
#include <string>
using namespace std;

class Student
{
	public:
	int roll_no;
	string student_name;
	float score;

	void accept_details()
		{
		cout<< "roll number of the student:"<<endl;
		cin>>roll_no;

		cout<<"name of the student:"<<endl;
		cin>>student_name;

		cout<<"marks of the student:"<<endl;
		cin>>score;
		}
	void print_result()
		{
		if (score>40)
		{
			cout<< "pass"<<endl;
		}
		else{
			cout<<"failed"<<endl;
		}
		}
	void print_details()
		{
		cout<<"\n ---student detail---"<<endl;
		cout<<"roll number of the student:"<<roll_no<<endl;
		cout<<"name of the student:"<<student_name<<endl;
		cout<<"marks of the student:"<<score<<endl;
		print_result();
		}
};

int main(){
	Student s;
	s.accept_details();
	s.print_details();

return 0;
}
