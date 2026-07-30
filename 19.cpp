//Copy array to another array
#include<iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int n = 5;

    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Elements of arr2: ";
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}