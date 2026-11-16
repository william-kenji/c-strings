#include <iostream>
#include <cstdlib> // atoi, atof, atol
#include <string> // Now this allows the use of stoi, stof, stol, stoul (unsigned long), stoll (long long), stoull, stod, stold
// Especial Function: to_string
// sto[letter] stands for "String to [int, long, float, double, etc.]"

using namespace std;

int main()
{
    // c-string into the function from cstdlib, and it will return a number
    // atoi returns an int, atof returns a float, atol returns a long
    char num[] = "918273"; // can't perform arithmetic operations with strings

    int i =atoi(num);

    cout << i << endl; // now I can perform arithmetic

    i += 10;
    cout << i << endl;



    // the string functions are different from the atoi or other functions because they accept a string, not a c-string
    string sqrt2 = "1.4142";

    double d = stod(sqrt2);

    cout << d << endl;

    d += d * 100;
    cout << d << endl;


    // Now let's try to_string()
    double e = 2.71828;
    string e_1power = to_string(e);
    string add = "e to the first power is ";
    
    cout << e_1power << endl;
    add += e_1power;
    cout << add << endl;

    return 0;
}