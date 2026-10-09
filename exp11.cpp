#include <iostream>
using namespace std;

// Function for integer values
void display(int a, int b) {
    cout << "Sum of integers: " << a + b << endl;
}

// Function for double values
void display(double a, double b) {
    cout << "Sum of double values: " << a + b << endl;
}

// Function for character values
void display(char a, char b) {
    cout << "Characters: " << a << " " << b << endl;
}

int main() {
    display(10, 20);          // Calls int version
    display(10.5, 20.5);      // Calls double version
    display('A', 'B');        // Calls char version

    return 0;
}