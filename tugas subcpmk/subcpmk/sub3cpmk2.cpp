#include <iostream>
using namespace std;

// Fungsi untuk melakukan binary search
int binary_search(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Jika target ditemukan di tengah
        if (arr[mid] == target)
            return mid;
        
        // Jika target lebih kecil, cari di setengah kiri array
        else if (arr[mid] > target)
            high = mid - 1;
        
        // Jika target lebih besar, cari di setengah kanan array
        else
            low = mid + 1;
    }
    
    // Jika target tidak ditemukan
    return -1;
}

int main() {
    int arr[] = {2, 3, 9, 10, 18, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    cout << "Array yang akan di cari: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Target: " << target << endl;

    // Panggil fungsi binary_search
    int result = binary_search(arr, n, target);
    if (result != -1)
        cout << "Target ditemukan pada index: " << result << endl;
    else
        cout << "Target tidak ditemukan" << endl;

    return 0;
}