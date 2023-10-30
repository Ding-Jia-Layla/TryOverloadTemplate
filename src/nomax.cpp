#include <iostream>
#include <complex>
#include <cstdlib>
#include "max.h"

int main()
{
    std::complex<float> c1,c2;
    std::cout<< ::max(c1,c2)<<'\n';

    return EXIT_SUCCESS;
}

/*In file included from nomax.cpp:4:
./max.h:9:11: error: invalid operands to binary expression ('const
      std::__1::complex<float>' and 'const std::__1::complex<float>')
        return a < b ? b : a;
               ~ ^ ~*/