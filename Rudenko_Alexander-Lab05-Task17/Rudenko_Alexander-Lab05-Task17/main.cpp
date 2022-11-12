#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    int arr[n1][n2];
    int garr[n1][n2];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cout << "Enter list " << i << " element " << j << " value: ";
            cin >> arr[i][j];
        }
    }
    int s = 1;
    int a = s * -1;
    int q = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = q, x = n2 - s; j < n2; j++, x++, a++) {
            if (j < s) {
                garr[i][j] = arr[i][x];
            }
            if (j >= s) {
                garr[i][j] = arr[i][a];
            }
        }
        a = s * -1;
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cout << garr[i][j];
        }
        cout << endl;
    }
}
