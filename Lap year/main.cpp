#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Input year that you want to check: ";
    cin >> year;
    if(year%4==0 && year>0){
        cout << endl << year << " is a lap year";
    } else if(year%4!=0 && year>0){
        cout << endl << year << " is not a lap year";
    } else if (year<0) {
        cout << endl << "Enter proper date (AD)";
    }

    return 0;
}
