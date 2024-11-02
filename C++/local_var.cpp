// #include <iostream>

// void printLocalVariable() {
//     int localVar = 10; // Local variable
//     std::cout << "Inside printLocalVariable, localVar = " << localVar << std::endl;
//     localVar += 5; // Modify the local variable
//     std::cout << "After modification, localVar = " << localVar << std::endl;
// }

// int main() {
//     printLocalVariable(); // Call the function that uses a local variable
//     return 0;
// }


#include <iostream>

void myFunc();

int main() {
    int x = 5;
    std::cout << "In main x is: " << x << std::endl;

    myFunc();
    std::cout << "Back in main, x is: " << x << std::endl;

    return 0;
}

void myFunc() {
    int x = 8;
    std::cout << "In myFunc, local x is: " << x << std::endl;

    {
        std::cout << "In block, x is: " << x << std::endl;
        int x = 9;
        std::cout << "Very local x is: " << x << std::endl;
    }

    std::cout << "After modification in myFunc, x is: " << x << std::endl;
}