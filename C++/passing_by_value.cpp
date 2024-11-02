#include <iostream>

using namespace std;
void swap(int x, int y);

int main() {
    int x = 5;
    int y = 10;

    cout << "Main. Before swap, x: " << x << " y: " << y << endl;
    swap(x, y);
    cout << "Main. After swap, x: " << x << " y: " << y << endl;

    return 0;
}

void swap(int x, int y) {
    cout << "Swap. Before swap, x: " << x << " y: " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "Swap. After swap, x: " << x << " y: " << y << endl;
}