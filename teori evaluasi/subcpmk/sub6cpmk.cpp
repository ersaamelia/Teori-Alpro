#include <iostream>
using namespace std;

#define MAX_SIZE 5

class Stack {
private:
    int top;
    int data[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack penuh!" << endl;
            return;
        }
        data[++top] = value;
        cout << "Nilai " << value << " berhasil ditambahkan ke stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
            return;
        }
        int value = data[top--];
        cout << "Nilai " << value << " berhasil dihapus dari stack." << endl;
    }

    void tampilkan() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
            return;
        }
        cout << "Isi stack: ";
        for (int i = 0; i <= top; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int pilihan, value;

    do {
        cout << "\nMenu Operasi Stack" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                if (!s.isFull()) {
                    cout << "Masukkan nilai: ";
                    cin >> value;
                    s.push(value);
                } else {
                    cout << "Stack penuh!" << endl;
                }
                break;
            case 2:
                if (!s.isEmpty()) {
                    s.pop();
                } else {
                    cout << "Stack kosong!" << endl;
                }
                break;
            case 3:
                s.tampilkan();
                break;
            case 0:
                cout << "谢谢" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 0);

    return 0;
}