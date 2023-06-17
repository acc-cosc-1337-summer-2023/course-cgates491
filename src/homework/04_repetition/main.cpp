//write include statements
#include "repetition.h"
#include<iostream>
#include<string>

//write using statements


using std::cout;
using std::cin;

int main() 
{
	
	
	char again;

	do
	{
		std::string dna;
	cout<<"Enter a DNA string: ";
	cin>>dna;

	double percent;
	percent = get_gc_content(dna);

	cout<<"The GC content is: "<<percent<< "\n";


		cout<<"Enter y to stop: ";
		cin>>again;
		
		

	} while (again != 'y');


	return 0;
}
