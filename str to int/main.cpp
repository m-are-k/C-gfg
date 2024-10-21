#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "123";
    int number= stoi(str);
    cout << number + 10 << endl;
    int numberv2 = 151;
    string numberToStringv2 = to_string(numberv2);
    cout << numberToStringv2;

    return 0;
}
