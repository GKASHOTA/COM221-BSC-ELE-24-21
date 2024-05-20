#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer and a string
    int* myInt = new int;
    string* myString = new string;

    // Accept user input
    cout << "Enter an integer: ";
    cin >> *myInt;
    cin.ignore(); // Clear the newline character from the buffer
    cout << "Enter a string: ";
    getline(std::cin, *myString);

    // Output the values
    cout << "Integer: " << *myInt << "\nString: " << *myString << std::endl;

    // Deallocate the memory
    delete myInt;
    delete myString;

    return 0;
}
