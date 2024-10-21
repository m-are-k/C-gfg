#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << "Entered number: " << num;

    char letter;
    cout << endl << "podaj litere aby wyswietlic kod ascii: ";
    cin >> letter;
    cout << "oto jej kod: " << int(letter);
    int a = 10;
    int b = 250;
    int c;
    c = a;
    a = b;
    b = c;
    cout << endl << "zmienna a wynosi: " << a;
    cout << endl << "zmienna b wynosi: " << b;
    return 0;
}
