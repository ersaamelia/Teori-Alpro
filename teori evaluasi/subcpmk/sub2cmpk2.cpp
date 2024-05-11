#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int j = 0; j < n - 1; j++) {
        bool swapped = false;
        for (int i = 0; i < n - 1 - j; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
            }
        }
        cout << "Iterasi " << j + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;

        
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {9, 18, 2, 40, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Data yang akan di sort :";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
    
    cout << "Bubble Sort :" << endl;
    bubble_sort(arr, n);
    
    return 0;
} 