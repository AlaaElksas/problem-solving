#include <iostream>
using namespace std;

// ages in days

int main(){

    // declaration and initialization
    int indays, years, months, days;

    // take age in days from the user
    cout <<"what is your age?: ";
    cin >> indays;

    // calculate age in years , months & days
    years = indays / 365;
    indays = indays - (365 * years);
    months = indays / 30;
    indays = indays - (30 * months);
    days = indays;

    // print the result
    cout << years << "years\n";
    cout << months << "months\n";
    cout << days << "days\n";

}