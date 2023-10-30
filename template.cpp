#include <cstdio>
#include <iostream>
template <typename T>
//name of the template
T add(T _a, T _b)
{
    return _a+_b;
}
//Template argument deduction:argument type needs to be fitted
int add(int a, int b)
{
    return a+b;
}

int main(){
    auto a =add(1,2.3);
    a =add(2,3);
    
    //add double type
    /*auto a =add(1,2);
  	double b =add(2.03,3.0);
  	auto c =add(2.03f,2.01f);*/
    std::cout<<a<<std::endl;
}