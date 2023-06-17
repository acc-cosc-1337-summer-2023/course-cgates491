//add include statements
#include "repetition.h"
#include<iostream>

using std::string;
//add function(s) code here

double get_gc_content(std::string str)
{
    double count = 0;
    for (auto i = 0; i < str.size(); i++)
    if(str[i] == 'C' || str[i] == 'G')
    count++;
    
    double result = (count /str.size());
    return result;

}


