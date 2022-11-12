
#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    for (int i = 9; i <= 89; i++) {
        if (i % 3 == 0) {
            counter += 1;
        }
    }
    cout << "Result is: " << counter;
}
