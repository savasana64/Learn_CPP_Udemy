#include <iostream>
#include <limits.h>

//limits is to see how big, how small, etc. the integer value can be in our compiler

//if you store a big number in a small memory you get gybrish in cout and warning through IDE


using namespace std;

int main() {
    int value = 56465;
    //int value = 2147483648; test it
    cout << value << endl;

    cout << INT_MAX << endl; //Possible with limits.h
    cout << INT_MIN << endl;

    cout << "size of int is: " << sizeof(int) << endl; //4 means here 4 bytes allocated to integer
    cout << "size of unsigned int is: " << sizeof(unsigned int) << endl;
    cout << "size of short int is: " << sizeof(short int) << endl;
    cout << "size of value is: " << sizeof(value) << endl;;
    cout << "size of long is: " << sizeof(long) << endl;
}