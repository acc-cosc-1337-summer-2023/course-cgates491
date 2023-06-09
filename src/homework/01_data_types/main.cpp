//write include statements
#include<iostream>
#include "data_types.h"
//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;

	int result;
	result = multiply_numbers(num);

	cout<<"your number is " <<result;

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<" "<<result;

	return 0;
}
