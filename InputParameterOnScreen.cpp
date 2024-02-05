#include <iostream>
using namespace std;

int main() {
    cout << "Enter your name: " << flush;

    string input;
    cin >> input;   //input from user is done by extraction operator ">>"
    // could be done for other variables like int
    cout << "you entered: " << input << endl;

}