#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a = 10;
    int b = 21;
    int c = 4;
    int maximum = max({a,b,c});
    cout << maximum << " <-- is the biggest number";
    return 0;
}
