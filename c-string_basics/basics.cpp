#include <iostream>

using namespace std;



int main()
{
    string userchoice;
    cout << "A C-string comes from the `C`programming language, and it has the following characteristics:\n";
    cout << "<more>\n";
    cin >> userchoice;
    cout << endl << "C-strings are a sequence of characters with a **Null Terminator** at the end:\n";
    cout << "That null terminator is 0 (seen as \"\\0\") as a string literal\n";
    cout << "<more>\n";
    cin >> userchoice;
    cout << endl << "A string literal is anything you type into a program between quotes.\n\0"; // I put \0 on purpose

    cout << "You can type the following code in your IDE and see what happens:\n";
    cout << endl;
    cout << "\t+------------------------------------+\n";
    cout << "\t|const int SIZE = 4 // notice the 4? |\n";
    cout << "\t|char name[SIZE] = \"Joe\";            |\n";
    cout << "\t|                                    |\n";
    cout << "\t|for (int c = 0; c < SIZE; c++)      |\n";
    cout << "\t|{                                   |\n";
    cout << "\t|    cout << name[c] << endl;        |\n";
    cout << "\t|}                                   |\n";
    cout << "\t|// Notice that the last character   |\n";
    cout << "\t|// will be \\0 in this sequence      |\n";
    cout << "\t+------------------------------------+\n";
    cout << endl << endl;
    // There is no need to fill an array of strings or characters element by element, unlike numbers or floats

    cout << "<more>\n";
    cin >> userchoice;
    cout << endl << "Use cin.getline(name, SIZE) and it will put all the whole name in the name[] array including whitespaces, and then it will cout the whole name for you if you just cout << name << endl;";
    cout << "If the user enters something past the limit, getline will ignore the rest, thus protecting your program!\n" << "Try to use cin.getline() in your programs to make them very stable and resilient!\n";
    cout << endl << endl;
    return 0;
}