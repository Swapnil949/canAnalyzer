#include <iostream>
#include <canlib.h>

#define TEMP    BAUD_100K

int main()
{   
    int i;
    canGetNumberOfChannels(&i);
    std::cout << "start " << i << std::endl;
    return 0;
}