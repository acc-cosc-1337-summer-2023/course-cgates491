//write include statements
#include<iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	int num;
	cout<<"Enter a grade: ";
	cin>>num;

	std::string letter;
	letter = get_letter_grade_using_switch(num);

	cout<<"Your grade is: "<<letter;

	std::string letter2;
	letter2 = get_letter_grade_using_if(num);

	cout<<"Your grade is: "<<letter2;

	return 0;
}