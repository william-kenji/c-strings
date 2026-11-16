#include <iostream>
#include <cstring> // This is the cstring library
using namespace std;

// The cstring library gives us access to: strlen, strcat, strcpy, strncat, strncpy, strcp, strstr





int main()
{
    // strlen function: length of a c-string
    int n = strlen("Hello"); // returns a length of 5, because it excludes the terminating character '0'
    cout << n << endl;
    // also you can pass it a character array:
    char str[] = "hello";
    n = strlen(str);
    cout << n << endl;

    // strcat concatenates two strings
    char destination[50] = "hello";
    char source[] = " world!";
    cout << "Current Destination: " << destination << endl;
    strcat(destination, source); // destination first, then source
    cout << "Updated destination: " << destination << endl;


    // strcpy copies one c-string to naother, overwrites one with another
    strcpy(destination, "One Two Three Four"); // the "One Two..." string will overwrite destination
    cout <<"Destination after strcpy: " << destination << endl;


    // strncpy has a third character that specifies how many characters:
    strncpy(destination, source, 6); // copies the first four characters
    cout << destination << endl;


    // strncat concatenates, but gives you control of what you concatenate
    strncat(destination, "Old McDonald Had A Laptop", 26);
    cout << destination << endl;


    // strcmp compares two c-strings
    char a[] = "Apple";
    char b[] = "Apple";
    char m[] = "Mapple";

    if (strcmp(a, b) == 0) // if it returns 0, they are the same. strcmp compares them one at a time
    {
        cout << a << " Is the same as " << b << endl;
    }
    else
    {
        cout << a << " Is not the same as " << b << endl;
    }
    // Something special about strcmp is that you can compare using > and < operators, because ascii codes for each character can be compared directly
    // This helps to see what goes first
    if (strcmp(a, m) < 0)
    {
        cout << a << " goes before " << m << endl;
    }
    else
    {
        cout << m << " goes before " << a << endl;
    }

    return 0;
}