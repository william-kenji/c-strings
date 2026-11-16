// Just as  a reminder that characters are still ascii numbers
#include <iostream>

int main()
{
    std::cout << static_cast<int>('A') << std::endl;
    std::cout << static_cast<int>('7') << std::endl; // outputs 55... interesting
    std::cout << char(2) << char(7) << std::endl;
    std::cout << "+255 ascii codes\n";
    return 0;
}