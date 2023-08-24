#include <iostream>
using namespace std;

int main() {

    int age;
    cout<<"enter your age";
    cin>>age;
    cout<<"Age is ="<<age;

    double salary;
    double bonus,bonus1;
    double income;
    cout<<"enter salary=";
    cin>>salary>>bonus1;
    cout<<"enter bonus=";
    cin>>bonus;
    income = salary + bonus1 + bonus;
    cout<<"Enter income"<<income;


    return 0;
}
