//cout can output the numbers in fixed and scientific notations (It decides for scientific for big numbers)
//to stop seeing values in scientific notation we use iomanip
//so we can use "fixed" in cout or "scientific"

//with float you can count with 7 digits after point with double with 15.

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float fValue = 75.6;

    cout << fixed << fValue << endl;

    //note: cout can output only 8 significant digits
    //we can change this number by using setprecision from iomanip

    cout << setprecision(20) << scientific << fValue << endl;
    cout << setprecision(20) << fixed << fValue << endl;

    //if you want more precision use double

    double dValue = 75.6;
    cout << setprecision(20) << fixed << dValue << endl;

    //long double has more precision

    long double ldValue = 75.6;
    cout << setprecision(20) << fixed << ldValue << endl;


}