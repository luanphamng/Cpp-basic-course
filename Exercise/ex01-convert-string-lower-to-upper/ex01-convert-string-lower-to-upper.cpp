#include <iostream>
#include <cstring>

int main()
{
    char x[8] = "Goodbye";
    unsigned int length = std::strlen(x);

    for (int i = 0; i < length; i++)
    {
        x[i] = std::toupper(x[i]);
    }

    std::cout << x;
    return 0;
}
