#include <iostream>
using namespace std;

int main() {
    // Variables to store user input
    int num1, num2, num3;

    // Prompt the user for input
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    // Dynamically allocate memory for three pointers
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Store the values in dynamic memory
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display the contents of the variables and the pointers
    cout << "\nValues entered:" << endl;
    cout << "num1 = " << num1 << ", pointer = " << *ptr1 << endl;
    cout << "num2 = " << num2 << ", pointer = " << *ptr2 << endl;
    cout << "num3 = " << num3 << ", pointer = " << *ptr3 << endl;

    // Display the memory addresses
    cout << "\nMemory addresses:" << endl;
    cout << "Address of num1 = " << &num1 << ", pointer address = " << ptr1 << endl;
    cout << "Address of num2 = " << &num2 << ", pointer address = " << ptr2 << endl;
    cout << "Address of num3 = " << &num3 << ", pointer address = " << ptr3 << endl;

    // Deallocate the memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
