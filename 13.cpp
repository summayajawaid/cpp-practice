//Find average of array.
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    double average;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    average = static_cast<double>(sum) / 5;
    cout << "Average of array elements: " << average << endl;
    return 0;
}