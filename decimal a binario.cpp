#include <iostream>
#include <string>
 
void toBinary(unsigned int n)
{
    if (n / 2 != 0) {
        toBinary(n / 2);
    }
 
    std::cout << n % 2;
}
 
int main()
{
    unsigned int decimal = 65;
 
    toBinary(decimal);        // 1000001
 
    return 0;
}