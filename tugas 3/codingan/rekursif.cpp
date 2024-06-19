#include <iostream>

using namespace std;


int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    
    cout << "Faktorial dari 12 adalah " << faktorial(12) << endl;  
    return 0;
}