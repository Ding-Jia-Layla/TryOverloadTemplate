
#include <iostream>
#include <string>
#include <cstdlib>
#include "max.h"

int main()
{
    std::cout<< ::max(2,5)<<'\n';
    std::cout<< ::max(0.1,0.02)<<'\n';
    std::cout<< ::max('a','c')<<'\n';
    std::cout<< ::max("hello","world")<<'\n';

    return EXIT_SUCCESS;
}