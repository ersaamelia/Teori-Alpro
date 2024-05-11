#include <iostream>
using namespace std;

int findMaxDup(int arr[], int n, int x, int index) {
    if (index == n) {
        return 0;
    }

    int count = (arr[index] == x) ? 1 : 0;
    return count + findMaxDup(arr, n, x, index + 1);
}

int main() {
    int arr[] = {2, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_dup = 0;
    for (int i = 0; i < n; i++) {
        int count = findMaxDup(arr, n, arr[i], i);
        max_dup = max(max_dup, count);
    }

    cout << "Duplikasi maksimal: " << max_dup << endl;

    return 0;
}