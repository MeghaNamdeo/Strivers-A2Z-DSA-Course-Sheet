#include <iostream>
using namespace std;

int main() {
    // Creation of 2D array
    int arr[3][3];
    // Initialization of 2D array
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Printing 2D array : " << endl;
    // Print 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << brr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Taking input : " << endl;
    // Taking input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    // Print row wise
    cout << "Print row wise : " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Print Column wise : " << endl;
    // Print column wise
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
