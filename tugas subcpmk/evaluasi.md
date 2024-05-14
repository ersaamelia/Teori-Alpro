# <h1 align="center">Evaluasi</h1>
<p align="center">Ersa Amelia</p>

## Sub2CPMK2
1. Terdapat tiga algoritma sorting yang umum digunakan yakni, Bubble Sort, Selection Sort, dan Merge Sort. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma!

### Bubble sort
Algoritma bubble sort cukup populer dan sederhana. Proses pada bubble sort dilakukan dengan penukaran data disebelahnya secara terus menerus hingga dalam suatu iterasi tertentu tidak ada lagi perubahan atau pertukaran. Algoritma bubble sort termasuk ke dalam kategori algoritma comparison sort, karena menggunakan perbandingan pada operasi antar elemenya.

proses algoritma bubble sort :

a. Bandingkan nilai pada data ke satu dengan data ke dua

b. Apabila nilai data ke satu lebih besar dari data ke dua maka tukar posisinya

c. Kemudian data yang lebih besar tersebut dibandingkan lagi dengan data ketiga

d. Apabila data ke tiga lebih kecil dari data ke dua maka tukar posisinya
Dan begitu seterusnya hingga semua data yang ada menjadi terurut

# Runtime
#Best Case: O(n) - Ketika array sudah terurut, maka Bubble Sort hanya memerlukan satu pass untuk menyelesaikan sorting.

#Worst Case: O(n^2) - Ketika array tidak terurut, maka Bubble Sort memerlukan perbandingan sebanyak n^2 untuk menyelesaikan sorting.

## selection sort
Algoritma selection sort merupakan pengurutan dengan konsep memilih elemen dengan nilai paling rendah dan menukar elemen tersebut dengan elemen ke –i. Nilai dari i dimulai dari 1 ke n, yang dimana n merupakan jumlah total elemen dikurangi satu.

Proses algoritma selection sort :

a. Memulai pengecekan data dari data ke 1 hingga data ke n.

b. Menentukan bilangan dengan index terkecil dari data pada bilangan tersebut.

c. Menukar bilangan index terkecil dengan bilangan pertama.

d. Begitu seterusnya hingga data berhasil diurutkan semuanya.

# Runtime
#Best Case: O(n^2) - Ketika array tidak terurut, maka Selection Sort memerlukan perbandingan sebanyak n^2 untuk menyelesaikan sorting.

#Worst Case: O(n^2) - Ketika array tidak terurut, maka Selection Sort memerlukan perbandingan sebanyak n^2 untuk menyelesaikan sorting.

## Merge sort

Merge sort adalah  algoritma pengurutan yang  membagi array menjadi dua bagian, mengurutkan setiap bagian, dan akhirnya menggabungkan kembali bagian-bagian yang telah diurutkan.

algoritma merge sort ;
a. Jika array berisi lebih dari satu elemen, pisahkan array menjadi dua bagian yang sama.
b. Urutkan setiap bagian.
c. Mengembalikan bagian yang disusun ulang.

# Runtime 
Best Case: O(n log n) - Ketika array sudah terurut, maka Merge Sort hanya memerlukan perbandingan sebanyak n log n untuk menyelesaikan sorting.

Worst Case: O(n log n) - Ketika array tidak terurut, maka Merge Sort memerlukan perbandingan sebanyak n log n untuk menyelesaikan sorting.


# 2. 
Buatlah fungsi dari salah satu algoritma sorting pada soal nomor 1, dan berikan penjelasan pada program tersebut!

jawaban:

kodingan bubble sort
~~~C++
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
~~~

## output :
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/e7b7d19f-1f04-4054-9f1e-68c19bb9a4aa)

## interprestasikan: 
terdapat data [9, 18, 2, 40, 3, 10]
Pada iterasi pertama, elemen terkecil (2) dipindahkan ke posisi pertama array.
Hasilnya adalah: 9 2 18 3 10 40.

Pada iterasi kedua, elemen terkecil (3) dipindahkan ke posisi kedua array.
Hasilnya adalah: 2 9 3 10 18 40.

Pada iterasi ketiga, tidak ada pertukaran yang dilakukan karena array sudah terurut dari index 0 sampai index 3.
Hasilnya tetap: 2 3 9 10 18 40.

Iterasi terakhir juga tidak memerlukan pertukaran elemen, karena array sudah terurut.
Hasil akhir: 2 3 9 10 18 40.


### SubCPMK3
1. Terdapat dua algoritma searching yang umum digunakan yakni, Binary Search dan Linear Search. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma! 

Jawab:

Binary Search 
Algoritma ini bekerja dengan cara membandingkan nilai tengah dari array dengan nilai yang ingin dicari.
Jika nilai tengah lebih besar dari nilai yang ingin dicari, maka pencarian dilanjutkan pada bagian kiri array.
Jika nilai tengah lebih kecil dari nilai yang ingin dicari, maka pencarian dilanjutkan pada bagian kanan array.

#Best Case: O(1) - Ketika nilai yang ingin dicari terletak di tengah array, maka Binary Search hanya memerlukan satu perbandingan untuk menemukan nilai tersebut.

#Worst Case: O(log n) - Ketika nilai yang ingin dicari terletak di ujung array, maka Binary Search memerlukan perbandingan sebanyak logaritma dari jumlah elemen dalam array untuk menemukan nilai tersebut.

Linear Search 
algoritma searching yang bekerja dengan cara membandingkan setiap elemen dalam array dengan nilai yang ingin dicari. Jika elemen yang dibandingkan sama dengan nilai yang ingin dicari, maka posisi elemen tersebut dalam array dikembalikan. Jika tidak ditemukan, maka pencarian dilanjutkan hingga akhir array.

#Best Case: O(1) - Ketika nilai yang ingin dicari terletak di awal array, maka Linear Search hanya memerlukan satu perbandingan untuk menemukan nilai tersebut.

#Worst Case: O(n) - Ketika nilai yang ingin dicari terletak di akhir array, maka Linear Search memerlukan perbandingan sebanyak jumlah elemen dalam array untuk menemukan nilai tersebut.


# 2. 
Buatlah fungsi dari salah satu algoritma searching pada soal nomor 1, dan berikan penjelasan pada program tersebut.

Searching adalah metode pencarian informasi dalam suatu aplikasi dengan suatu kunci (key). Pencarian diperlukan untuk mencari informasi khusus dari table pada saat lokasi yang pasti dari informasi tersebut sebelumnya tidak diketahui.

kodingan 
~~~C++
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
~~~

## ouput :
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/47008dba-d780-4813-88ec-b089bc92d254)

## interprestasikan :
#include <iostream> untuk Mengimpor library input-output untuk menggunakan cout dan cin.
using namespace std:: untuk  Menghindari penulisan std:: di depan cout, cin, dan endl
int binary_search(int arr[], int n, int target): Fungsi yang menerima array arr dengan panjang n dan target yang ingin dicari target. Mengembalikan indeks target jika ditemukan, atau -1 jika tidak ditemukan.
int low = 0, high = n - 1 untuk Menginisialisasi batas bawah (low) dan batas atas (high) dari pencarian.
while (low <= high) untuk Loop yang berlanjut selama low kurang dari atau sama dengan high.
int mid = low + (high - low) / 2 untuk Menghitung indeks tengah untuk menghindari overflow.
if (arr[mid] == target) untuk Jika elemen tengah adalah target, mengembalikan indeks tengah.
else if (arr[mid] > target) untuk Jika elemen tengah lebih besar dari target, mempersempit pencarian ke setengah kiri (high = mid - 1).
else untuk Jika elemen tengah lebih kecil dari target, mempersempit pencarian ke setengah kanan (low = mid + 1).
return -1 Jika target tidak ditemukan dalam loop, mengembalikan -1.

Mencetak Array dan Target:

Program mencetak elemen-elemen dalam array: 2 3 9 10 18 40.
Program mencetak target yang akan dicari: 10.
Hasil Binary Search:

Fungsi binary_search dipanggil dengan target 10.
Fungsi menemukan target 10 pada indeks 3.
Program mencetak pesan: "Target ditemukan pada index: 3


## Sub4CPMK

1. Berikan penjelasan dari struct dan buatlah sebuah contoh program dari struct!

jawaban:

# struct
Struct adalah kumpulan dari satu atau lebih variabel yang digabungkan dalam satu unit. Ini memungkinkan kita untuk membuat tipe data baru yang terdiri dari beberapa tipe data yang berbeda.

kodingan struct
~~~C++
#include <iostream>
#include <iomanip>
using namespace std;

struct buku {
    string Judul;
    string Penulis; 
    string genre; 
    int tahunTerbit; 
    int harga;
    int halaman;
};

int main() {
    buku myBooks[3]; 

    // Mengisi data untuk 3 buku
    myBooks[0].Judul = "Godfall";
    myBooks[0].Penulis = "Jeph Loeb";
    myBooks[0].genre = "Superhero";
    myBooks[0].tahunTerbit = 2004;
    myBooks[0].harga = 200000;
    myBooks[0].halaman = 112;


    myBooks[1].Judul = "Crush";
    myBooks[1].Penulis = "Josephine Abigail";
    myBooks[1].genre = "Romantis";
    myBooks[1].tahunTerbit = 2020;
    myBooks[1].harga = 89100;
    myBooks[1].halaman = 360;


    myBooks[2].Judul = "Cuan Trading Pakai Fibonacci";
    myBooks[2].Penulis = "Catherine Wiliam";
    myBooks[2].genre = "Investasi";
    myBooks[2].tahunTerbit = 2022;
    myBooks[2].harga = 70400;
    myBooks[2].halaman = 104;

    cout << "======================================================================================================================" << endl;
    cout << "| " << setw(10) << "No." << " | " << setw(30) << "Judul" << " | " << setw(20) << "Penulis" << " | " << setw(15) << "Genre" << " | " << setw(15) << "Tahun Terbit" << " | " << setw(10) << "Harga" << " | " << setw(10) << "Halaman" << " |" << endl;
    cout << "======================================================================================================================" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| " << setw(10) << i + 1;
        cout << " | " << setw(30) << myBooks[i].Judul;
        cout << " | " << setw(20) << myBooks[i].Penulis;
        cout << " | " << setw(15) << myBooks[i].genre;
        cout << " | " << setw(15) << myBooks[i].tahunTerbit;
        cout << " | " << setw(10) << myBooks[i].harga;
        cout << " | " << setw(10) << myBooks[i].halaman << " |" << endl;
    }
    cout << "======================================================================================================================" << endl;

    return 0;
}
~~~

## output :
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/1d9f493d-9431-42ea-b8bf-86c37ee83dd6)

## interprestasikan :
program struct buku ada beberapa variabel seperti judul, penulis, tahun terbit, harga, dan jumlah halaman. program array myBooks berisi 3 objek yaitu : godfall, crush, dan cuan trading pakai fibonacci. program fungsi setw dari header <iomanip>. untuk menentukan lebar kolom yang tetap. untuk pemisah tabel di tampilkan menggunakan karakter '-'.


## SUBCPMK5 

# 2.
 Buatlah sebuah algoritma dan fungsi program untuk menghapus node di tengah single linked list!

kodingan
~~~C++
#include <iostream>
#include <iomanip>

using namespace std;

// Deklarasi Struct Mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    Mahasiswa* next;
};

class LinkedList {
private:
    Mahasiswa* head;
    Mahasiswa* tail;
    int count;

public:
    // Constructor
    LinkedList() {
        head = NULL;
        tail = NULL;
        count = 0;
    }

    // Destructor
    ~LinkedList() {
        Mahasiswa* temp;
        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void tambahDepan(string nama, string nim) {
        Mahasiswa* baru = new Mahasiswa;
        baru->nama = nama;
        baru->nim = nim;
        baru->next = head;
        head = baru;
        if (tail == NULL) {
            tail = head;
        }
        count++;
        cout << "Data telah ditambahkan" << endl;
    }

    void tambahBelakang(string nama, string nim) {
        Mahasiswa* baru = new Mahasiswa;
        baru->nama = nama;
        baru->nim = nim;
        baru->next = NULL;
        if (tail != NULL) {
            tail->next = baru;
        }
        tail = baru;
        if (head == NULL) {
            head = tail;
        }
        count++;
        cout << "Data telah ditambahkan" << endl;
    }

    void tambahTengah(string nama, string nim, int posisi) {
        if (posisi < 1 || posisi > count + 1) {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        Mahasiswa* baru = new Mahasiswa;
        baru->nama = nama;
        baru->nim = nim;
        Mahasiswa* temp = head;
        for (int i = 1; i < posisi - 1; i++) {
            temp = temp->next;
        }
        baru->next = temp->next;
        temp->next = baru;
        count++;
        cout << "Data telah ditambahkan" << endl;
    }

    void hapusDepan() {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }
        Mahasiswa* temp = head;
        head = head->next;
        cout << "Data " << temp->nama << " berhasil dihapus" << endl;
        delete temp;
        count--;
    }

    void hapusBelakang() {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }
        Mahasiswa* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
        cout << "Data berhasil dihapus" << endl;
        count--;
    }

    void hapusTengah(int posisi) {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }
        if (posisi < 1 || posisi > count) {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        Mahasiswa* temp = head;
        for (int i = 1; i < posisi - 1; i++) {
            temp = temp->next;
        }
        Mahasiswa* hapus = temp->next;
        temp->next = hapus->next;
        cout << "Data " << hapus->nama << " berhasil dihapus" << endl;
        delete hapus;
        count--;
    }

    void ubahDepan(string nama, string nim) {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }
        head->nama = nama;
        head->nim = nim;
        cout << "Data telah diubah" << endl;
    }

    void ubahBelakang(string nama, string nim) {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }
        tail->nama = nama;
        tail->nim = nim;
        cout << "Data telah diubah" << endl;
    }

    void ubahTengah(string nama, string nim, int posisi) {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }
        if (posisi < 1 || posisi > count) {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        Mahasiswa* temp = head;
        for (int i = 1; i < posisi; i++) {
            temp = temp->next;
        }
        temp->nama = nama;
        temp->nim = nim;
        cout << "Data telah diubah" << endl;
    }

    void tampilkan() {
        if (head == NULL) {
            cout << "List kosong" << endl;
            return;
        }
        cout << "\tDATA MAHASISWA" << endl;
        cout << setw(5) << left << "No" << setw(20) << left << "NAMA" << setw(15) << "NIM" << endl;
        cout << setfill('-') << setw(40) << "-" << endl;
        Mahasiswa* temp = head;
        int no = 1;
        while (temp != NULL) {
            cout << setfill(' ') << setw(5) << left << no << setw(20) << temp->nama << setw(15) << temp->nim << endl;
            temp = temp->next;
            no++;
        }
    }
};

int main() {
    LinkedList list;
    int pilihan, posisi;
    string nama, nim;

    do {
        cout << "\nPROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. TAMPILKAN" << endl;
        cout << "0. KELUAR" << endl;
        cout << "Pilih Operasi : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\n1. Tambah Depan" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                list.tambahDepan(nama, nim);
                break;
            case 2:
                cout << "\n2. Tambah Belakang" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                list.tambahBelakang(nama, nim);
                break;
            case 3:
                cout << "\n3. Tambah Tengah" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                list.tambahTengah(nama, nim, posisi);
                break;
            case 4:
                cout << "\n4. Ubah Depan" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                list.ubahDepan(nama, nim);
                break;
            case 5:
                cout << "\n5. Ubah Belakang" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                list.ubahBelakang(nama, nim);
                break;
            case 6:
                cout << "\n6. Ubah Tengah" << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                list.ubahTengah(nama, nim, posisi);
                break;
            case 7:
                cout << "\n7. Hapus Depan" << endl;
                list.hapusDepan();
                break;
            case 8:
                cout << "\n8. Hapus Belakang" << endl;
                list.hapusBelakang();
                break;
            case 9:
                cout << "\n9. Hapus Tengah" << endl;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                list.hapusTengah(posisi);
                break;
            case 10:
                cout << "\n10. Tampilkan" << endl;
                list.tampilkan();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
    } while (pilihan != 0);

    return 0;
}
~~~

## Output :
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/8e5ba6b1-694f-426a-b072-527098f2fa8c)

## interprestasikan :
Selain itu, struct ini juga memiliki pointer next yang akan digunakan untuk menunjukkan ke node selanjutnya dalam linked list.
Destructor digunakan untuk membersihkan semua node dalam linked list saat program selesai dijalankan.
tambahDepan(string nama, string nim) untuk Menambahkan node baru di depan linked list.
tambahBelakang(string nama, string nim) untuk Menambahkan node baru di belakang linked list.
tambahTengah(string nama, string nim, int posisi) untuk Menambahkan node baru di posisi tertentu dalam linked list.
hapusTengah(int posisi) untuk Menghapus node pada posisi tertentu dari linked list.
ubahDepan(string nama, string nim) untuk Mengubah data pada node pertama dari linked list.
ubahBelakang(string nama, string nim) untuk Mengubah data pada node terakhir dari linked list.
ubahTengah(string nama, string nim, int posisi) untuk Mengubah data pada node pada posisi tertentu dari linked list.

### Subcpmk6
# 1.
Tulislah sebuah program dari operasi stack seperti pop, push, isEmpty, isFull, dll(min 5)!

kodingan 
~~~C++
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
~~~

## output :
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/9b0c8a49-5ba2-4c91-88fb-ec22bb3e9f66)

![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/41544b7e-d1c7-4215-8c1a-5748a2a5724e)

## interprestasikan:
Metode isEmpty() untuk Mengembalikan true jika stack kosong (top == -1), dan false jika tidak.
isFull() untuk Mengembalikan true jika stack penuh (top == MAX_SIZE - 1), dan false jika tidak.
push(int value) untuk Menambahkan value ke stack jika tidak penuh, dan mencetak pesan berhasil.
pop() untuk Menghapus elemen teratas dari stack jika tidak kosong, dan mencetak elemen yang dihapus.
tampilkan() untuk Menampilkan semua elemen di dalam stack jika tidak kosong.
Fungsi main() Di dalam fungsi main(), program menyediakan menu interaktif untuk pengguna agar dapat melakukan operasi pada stack: Push: Menambahkan nilai ke stack jika tidak penuh.
Pop untuk Menghapus elemen teratas dari stack jika tidak kosong.
Berdasarkan input pengguna, program akan memanggil metode yang sesuai dari objek stack (s).
Menampilkan Menu dan Memilih Push:
Program menampilkan menu operasi stack.
Pengguna memilih opsi 1 untuk menambahkan nilai ke stack.
Program meminta pengguna memasukkan nilai yang ingin ditambahkan.

masukkan nilai 1 (push) dengan nilai 33, 77, 56, 89, dan 45.

opearsi stack pop : 45 terhapus dari stack. 

operasi stack tampilkkan untuk menampilkan hasil : 33, 77, 56, dan 89.

 operasi stack keluar Φ░óΦ░ó.
 
