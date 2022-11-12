
#include <iostream>

using namespace std;

int main()
{
    int a[15];
    double result = 0;
    for (int i = 0; i < 15; i++) {
        cout << "Enter num: ";
        cin >> a[i];
    }
    for (int i = 0; i < 15; i++) {
        result += a[i];
    }
    result = result / 15;
    cout << "Result is: " << result;
}
