#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#define _CTR_SECURE_NO_WARNINGS

using namespace std;

int main()
{
    struct AEROFLOT
    {
        string Nazv;
        string Number;
        string Type;
        string Time;
    };

    AEROFLOT rozklad[100];

    int counter;
    cout << "Enter count raice: ";
    cin >> counter;
    for (int i = 0; i < counter; i++) {
        cout << "Enter name raice: ";
        cin >> rozklad[i].Nazv;
        cout << "Enter Number raice: ";
        cin >> rozklad[i].Number;
        cout << "Enter Type (Business or VIP) raice: ";
        cin >> rozklad[i].Type;
        cout << "Enter Time raice: ";
        cin >> rozklad[i].Time;
    }

    for (int i = 0; i < counter; i++) {
        if (rozklad[i].Type == "VIP") {
            cout << rozklad[i].Nazv << endl;
            cout << rozklad[i].Number << endl;
            cout << rozklad[i].Type << endl;
            cout << rozklad[i].Time << endl;
            cout << endl;
        }
        else {
            continue;
        }

        for (int i = 0; i < counter; i++) {
            if (rozklad[i].Type == "Business") {
                cout << rozklad[i].Nazv << endl;
                cout << rozklad[i].Number << endl;
                cout << rozklad[i].Type << endl;
                cout << rozklad[i].Time << endl;
                cout << endl;
            }
            else {
                continue;
            }

        }
    }


    return 0;
}
