#include <iostream>

using namespace std;

int main()
{
    float firstNum;
    float secondNum;
    cout << "Enter first number:  ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;
    char task;
    cout << "Enter letter (if substraction type 's' if multiplication type 'm' and if division type 'd': ";
    cin >> task;
    if(task == 's')
    {
        cout << "result of substraction is: " << firstNum - secondNum;
    } else if(task == 'm')
    {
        cout << "result of multiplication is: " << firstNum * secondNum;
    } else if(task == 'd')
    {
        cout << "result of division is: " << firstNum / secondNum;
    }
    return 0;
}

