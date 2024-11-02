#include <iostream>

class Cat
{
    public:
        unsigned int itsAge;
        unsigned int itsWeight;
        void Meow();
};



int main()
{
    Cat Frisky;
    Frisky.itsAge = 5;
    std::cout << "Frisky age is: " << Frisky.itsAge << std::endl;
    return 0;
}