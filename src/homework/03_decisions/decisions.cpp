//write include statement for decisions header
#include "decisions.h"

using std::string;

//Write code for function(s) code here

string get_letter_grade_using_switch(int grade)
{
    string result = "";

    switch(grade)
    {
    case 95:
        result = "A";
        break;
    
    case 85:
        result = "B";
        break;

    case 75:
        result = "C";
        break;

    case 65:
        result = "D";
        break;

    case 50:
        result = "F";
        break;

    default:
        result = "Invalid Option";
        break;

    }


    return result;
}

string get_letter_grade_using_if(int grade)
{
    string result = "";
    if (grade <= 100 && grade >= 90)
    {
        result = "A";
    }

    if (grade <= 89 && grade >= 80)
    {
        result = "B";
    }

    if (grade <= 79 && grade >= 70)
    {
        result = "C";
    }

    if (grade <= 69 && grade >= 60)
    {
        result = "D";
    }
    
    if (grade <= 59)
    {
        result = "F";
    }

    return result;
}