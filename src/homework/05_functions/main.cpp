#include "func.h"
#include<iostream>
#include<vector>

using std::cin;
using std::cout;

int main() 
{
	std::vector<int> num{5,7,-1,99,-100,10};
	std::vector<int> sqr{6,1,8,9,4};

	auto option = 0;
	

		cout<<"1 - Get max value""\n";
		cout<<"2 - Get square of elements""\n";
		cout<<"3 - Exit""\n";

		cout<<"Enter an option: ""\n";
		cin>>option;
		
		if (option == 1)
		{
		cout<<get_vector_max_value(num);
		cout<<"\n";
		}

		if (option == 2)
		{
		get_square_of_each_element(sqr);
		}
		

	return 0;
}
