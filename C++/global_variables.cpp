#include <iostream>

void myFunction(); // Function prototype

int x = 5, y = 7; // Global variables
int main() {
    using namespace std;
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
    myFunction();
    cout << "Back from myFunction" << endl;
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;
}

void myFunction() {
    using namespace std;
    int y = 10;
    cout << "x from myFunction: " << x << endl;
    cout << "y from myFunction: " << y << endl;
}
