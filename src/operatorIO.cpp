#include <iostream>
class Vector
{
    friend std::ostream& operator<<(std::ostream &_output, const Vector &_s);
}