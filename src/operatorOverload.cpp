#include <iostream>
class Op{
    private:
    int a;
    int b;
    public:
    Op(int _a, int _b):a{_a},b(_b){}
    Op operator+(const Op& another) const{
        return Op(a+another.a, b+another.b);
    }
    friend std::ostream& operator<<(std::ostream& os, const Op& obj) {
        os << obj.a << " + " << obj.b <<'\n';
        return os;
    }

};
int main(){
    Op o1(2,3);
    Op o2(1,2);
    Op o=o1+o2;
    std::cout << "Result: " << o<< '\n'; 
}