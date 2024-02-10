#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    const int NUMBERS = 15;
    int arr[NUMBERS];

    cout << "Main array: ";
    for (int i = 0; i < NUMBERS; ++i) {
        arr[i] = rand() % 999 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, NUMBERS);

    cout << "Sorted array: ";
    printArray(arr, NUMBERS);

    return 0;
}
