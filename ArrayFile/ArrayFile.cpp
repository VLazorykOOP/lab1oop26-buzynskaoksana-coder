#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void task1() {
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    vector<int>A(N);
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int maxNeg = -10000000;
    int index = -1;

    for (int i = 0; i < N; i++) {
        if (A[i] < 0 && A[i] > maxNeg) {
            maxNeg = A[i];
            index = i;
        }
    }

    if (index == -1) {
        cout << "No negative elements.\n";
    }
    else {
        cout << "Max negative element: " << maxNeg << endl;
        cout << "Index: " << index << endl;
    }
}

void task2() {
    int N;
    cout << "Enter size: ";
    cin >> N;

    vector<int> A(N);
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int A1, B;
    cout << "Enter A1 and B: ";
    cin >> A1 >> B;

    int pos = -1;

    for (int i = 0; i < N; i++) {
        if (A[i] > A1) {
            pos = i;
            break;
        }
    }

    int minVal = INT_MAX;

    if (pos != -1) {
        for (int i = pos + 1; i < N; i++) {
            if (A[i] < B && A[i] < minVal) {
                minVal = A[i];
            }
        }
    }

    if (minVal == INT_MAX) {
        cout << "No such elements.\n";
    }
    else {
        cout << "Min element: " << minVal << endl;
    }
}
void task3() {
    int n;
    double r;

    cout << "Enter number of points: ";
    cin >> n;

    cout << "Enter radius r: ";
    cin >> r;

    double A[400];

    cout << "Enter array elements:\n";
    for (int i = 0; i < 2 * n; i++) {
        cin >> A[i];
    }

    int count = 0;

    for (int i = 0; i < 2 * n; i += 2) {
        double x = A[i];
        double y = A[i + 1];

        if (x * x + y * y <= r * r) {
            count++;
        }
    }

    cout << "Points inside or on the circle: " << count << endl;
}

int main() {
    int choice;

    cout << "Choose task:\n";
    cout << "1 - Max negative element\n";
    cout << "2 - Min element by condition\n";
    cout << "3 - Points in circle\n";
    cin >> choice;

    if (choice == 1) {
        task1();
    }
    else if (choice == 2) {
        task2();
    }
    else if (choice == 3) {
        task3();
    }
    else {
        cout << "Wrong choice!";
    }

    return 0;
}