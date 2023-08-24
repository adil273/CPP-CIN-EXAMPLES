#include <iostream>
using namespace std;

int main() {

    // create variables for kilometers and miles
    double km, miles;

    // take input for kilometers
    cout << "Enter distance in km: ";
    cin >> km;

    // conversion ratio of km to miles
    double conversion_ratio = 0.621;

    // computing distance in miles
    miles = km * conversion_ratio;

    // print the distance in miles
    cout << "Distance in miles: " << miles;

    return 0;
}
