# <h1 align="center">Laporan Teori Struktur Data Tugas 3 </h1>
<p align="center">Ersa Amelia</p>

## soal 
### 1. priority queue

penjelasan 
Antrian Prioritas adalah antrian di mana setiap elemen diberi prioritas. Dalam antrian prioritas, elemen-elemen dihapus dan diproses dengan mengikuti aturan tertentu. Pertama, elemen dengan prioritas lebih tinggi diproses sebelum elemen dengan prioritas lebih rendah. Kedua, dua elemen dengan prioritas yang sama diproses sesuai urutan di mana mereka dimasukkan ke dalam antrian. Misalnya, pertimbangkan seorang manajer yang sedang memeriksa dan menyetujui berkas-berkas berdasarkan prinsip "first come, first serve". Jika di tengah proses ada berkas mendesak (dengan prioritas tinggi) yang masuk, dia akan memproses berkas mendesak tersebut terlebih dahulu dan kemudian melanjutkan dengan berkas-berkas lain yang kurang mendesak.[1]

![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/2d0ce684-95a3-402a-acd3-4557de96d127)

Ilustrasi dalam Fig. 5.35 menunjukkan antrian prioritas menggunakan array setelah menambahkan 5 elemen (10, 14, 12, 60, 13) dengan prioritas masing-masing (9, 10, 17, 30, 46). Prioritas dalam ilustrasi diurutkan secara ascending, namun dalam kenyataannya, prioritas bisa acak. Menggunakan array, sulit menemukan elemen prioritas tertinggi dari daftar campuran, memerlukan n perbandingan (O(n)), sedangkan antrian lain hanya membutuhkan O(1) untuk memasukkan elemen. Oleh karena itu, lebih baik menggunakan linked list, di mana elemen dapat dimasukkan di mana saja dalam daftar.

Node dalam antrian prioritas berisi DATA, PRIORITY, dan NEXT. DATA menyimpan informasi, PRIORITY menyimpan prioritas, dan NEXT menyimpan alamat node berikutnya. Fig. 5.36 menunjukkan linked list dari node dengan DATA (12) dan PRIORITY (17) dimasukkan ke dalam antrian prioritas.Implementasi antrian prioritas dengan linked list lebih efisien karena elemen dapat ditempatkan sesuai prioritas tanpa menggeser elemen lain, memberikan keuntungan signifikan dalam kecepatan dan fleksibilitas pengelolaan antrian.[1]

~~~C++
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;

    
    pq.push(make_pair(2, "pekerjaan 2"));
    pq.push(make_pair(1, "pekerjaan 1"));
    pq.push(make_pair(3, "pekerjaan 3"));

    
    while (!pq.empty()) {
        pair<int, string> pekerjaan = pq.top();
        pq.pop();
        cout << "Memproses " << pekerjaan.second << " dengan prioritas " << pekerjaan.first << endl;
    }

    return 0;
}
~~~
### Output:
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/2e530fdc-0291-46a7-a2a2-6fe5a46f4c3c)

### interprestasikan:
Program ini menggunakan priority_queue di C++ untuk mengelola dan memproses pekerjaan berdasarkan prioritas yang telah ditentukan. Prioritas dan deskripsi pekerjaan disimpan dalam pasangan (pair) yang terdiri dari integer dan string. priority_queue ini dikonfigurasi sebagai min-heap menggunakan greater<pair<int, string>>, sehingga pekerjaan dengan prioritas terkecil selalu berada di bagian atas antrian. Program ini menambahkan tiga pekerjaan dengan prioritas berbeda ke dalam antrian, kemudian memproses dan mencetak setiap pekerjaan sesuai urutan prioritasnya. Hasilnya, pekerjaan dengan prioritas terendah diproses terlebih dahulu, memastikan bahwa tugas yang lebih mendesak diselesaikan lebih awal. Output program ini mencerminkan urutan pemrosesan pekerjaan, yaitu "pekerjaan 1" dengan prioritas 1, "pekerjaan 2" dengan prioritas 2, dan "pekerjaan 3" dengan prioritas 3.

### 2. Hash Table
Hash table digunakan untuk mengindeks array agar proses pencarian lebih mudah. Misalnya, jika perusahaan menggunakan PIN 5 digit untuk 100 karyawan, menggunakan array dengan 100.000 elemen akan boros memori. Oleh karena itu, array yang lebih kecil dan efisien diperlukan, yang dicapai dengan fungsi hash. Fungsi hash mengubah nilai kunci menjadi alamat hash, yang mewakili indeks dalam array, memungkinkan pencarian data yang cepat tanpa membandingkan semua kunci.[2]

Dalam memilih fungsi hash, perhitungan harus mudah dan cepat, serta nilai harus didistribusikan merata dalam rentang indeks array. Metode umum mencakup sisa pembagian, pemotongan, dan pelipatan (folding). Sisa pembagian menggunakan sisa hasil pembagian sebagai alamat hash. Pemotongan mengabaikan bagian kunci dan menggunakan sisanya. Pelipatan membagi kunci menjadi bagian-bagian, menjumlahkannya, dan memotong hasilnya agar sesuai dengan indeks tabel hash.

Tabrakan hash terjadi ketika dua kunci memiliki alamat hash yang sama. Teknik untuk mengatasinya meliputi pengalamatan terbuka (open addressing), pembentukan rantai (chaining), dan pengalamatan buket (bucket addressing). Dalam pengalamatan terbuka, elemen disimpan dalam tabel hash dengan metode seperti pemeriksaan linier, pemeriksaan kuadratik, dan double hashing. Pembentukan rantai menyimpan data secara dinamis menggunakan rantai, sedangkan pengalamatan buket menyediakan ruang untuk beberapa data dengan alamat hash yang sama. Dengan teknik-teknik ini, masalah tabrakan hash dapat diatasi dengan lebih efisien.

~~~C++
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    
    unordered_map<string, string> hash_table;

    
    hash_table["nama"] = "Ersa";
    hash_table["umur"] = "20";
    hash_table["kota"] = "Tegal";

    
    cout << "Nama: " << hash_table["nama"] << endl;
    cout << "Umur: " << hash_table["umur"] << endl;
    cout << "kota: " << hash_table["kota"] << endl;


    return 0;
}
~~~
#### Output:
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/4e6fc809-5e4e-4f10-acad-dd9e362d30bd)

#### Interprestasi:
Program ini menggunakan unordered_map dalam bahasa C++ untuk menyimpan dan mengakses informasi menggunakan kunci (key) berbasis string. unordered_map berfungsi sebagai tabel hash yang memungkinkan penyimpanan pasangan kunci-nilai (key-value pairs). Dalam program ini, beberapa entri dimasukkan ke dalam tabel hash, yaitu kunci "nama" dengan nilai "Ersa", kunci "umur" dengan nilai "20", dan kunci "kota" dengan nilai "Tegal". Setelah itu, program mencetak nilai-nilai yang terkait dengan kunci-kunci tersebut dengan mengakses tabel hash menggunakan kunci masing-masing. Hasilnya, program menampilkan nama, umur, dan kota sesuai dengan nilai yang telah disimpan dalam tabel hash. Output dari program ini adalah: "Nama: Ersa", "Umur: 20", dan "Kota: Tegal".

### 3.  Rekursif
Rekursif merupakan proses memanggil dirinya sendiri yang biasa dilakukan oleh fungsi atau prosedur pada pemograman. rekursif akan terus berjalan sampai kondisi berhenti terpenuhi, mirip dengan perulangan / looping. 
### Program menentukan nilai faktorial dengan pemograman rekursif 
faktorial dari bilangan asli n adalah hasil perkalian antara bilangan bulat positif yang kurang dari atau sama  dengan n. Tanda (!) disebut dengan notasi faktorial. [3]

n! = n(n-1)!

~~~C++
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
~~~
#### Output:
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/c8e39569-6fe9-46d5-b03c-5e7c3f74ba50)

#### Interprestasikan:
Program ini menggunakan fungsi rekursif dalam bahasa C++ untuk menghitung faktorial dari suatu bilangan bulat. Fungsi faktorial menerima sebuah argumen integer n dan mengembalikan nilai faktorial dari n. Jika n bernilai 0, fungsi ini mengembalikan 1, sesuai dengan definisi faktorial bahwa 0! = 1. Jika n lebih besar dari 0, fungsi ini mengembalikan hasil perkalian antara n dan hasil pemanggilan rekursif dari fungsi faktorial dengan argumen n-1. Dalam fungsi main, program memanggil fungsi faktorial dengan argumen 12 dan mencetak hasilnya ke layar. Oleh karena itu, program ini akan menampilkan output "Faktorial dari 12 adalah 479001600", yang merupakan hasil perhitungan faktorial dari 12 (12!).

### 4. Graph 
Teori grap adalah cabang matematika dan ilmu komputer yang mempelajari graf, yaitu himpunan simpul (vertex) yang terhubung oleh sisi (edge) atau busur (arc).

Elemen-Elemen Grap:

Simpul (Vertex/Node): Titik dalam graf.
Sisi (Edge): Garis yang menghubungkan dua simpul.
Busur (Arc): Garis berpanah yang menghubungkan dua simpul.
Gelang (Loop): Sisi yang menghubungkan simpul dengan dirinya sendiri.
Jenis-Jenis Graf:

Grap Tak Berarah: Sisi tanpa arah.
Grap Berarah (Digrap): Sisi memiliki arah.
Grap Berbobot: Sisi memiliki nilai bobot.
Jaringan: Digraf dengan sisi berbobot.

Aplikasi Grap :
A. Jaringan Sosial: Representasi hubungan pertemanan, seperti di Facebook.
B. Jaringan Jalan: Representasi rute dengan bobot menunjukkan jarak atau waktu tempuh.
Analisis Jaringan: Digunakan untuk menganalisis struktur dalam jaringan komputer, transportasi, atau sosial.
Pentingnya Algoritme Grap:
Algoritme untuk grap penting dalam ilmu komputer untuk menyelesaikan masalah seperti pencarian jalur terpendek dan deteksi siklus. Dengan teori graf, struktur kompleks dan berbagai masalah dapat direpresentasikan dan diselesaikan secara efisien, berdampak besar pada berbagai bidang dalam ilmu komputer dan matematika.

![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/fd1088b9-2f7b-4e33-b269-b49499f58622)
bahwa matriks biaya adalah simetris yang berarti jarak antara desa 2 hingga 3
sama dengan jarak antara desa 3 hingga 2.
Masalah di sini adalah penjual keliling ingin mengetahui turnya dengan biaya minimum.
Katakanlah T (1, {2,3,4}), artinya, awalnya dia di desa 1 dan kemudian dia bisa pergi ke salah satu dari {2,3,4}.
Dari sana untuk mencapai simpul yang tidak dikunjungi (desa) menjadi masalah baru. Di sini kita dapat
mengamati bahwa masalah utama meluas menjadi sub-masalah, ini adalah milik pemrograman dinamis.[4]

T (1, {2,3,4}) = minimum
= {(1,2) + T (2, {3,4}) 4 + 6 = 10}
= {(1,3) + T (3, {2,4}) 1 + 3 = 4}

~~~C++
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


class Graph {
    int V; 
    unordered_map<string, vector<string>> adjList;  Adjacency list

public:
   
    Graph(int V) {
        this->V = V;
    }

    
    void addEdge(const string& u, const string& v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); 
    }

    
    void printGraph() {
        for (const auto &pair : adjList) {
            cout << "Kota " << pair.first << ":";
            for (const string &neighbor : pair.second) {
                cout << " -> " << neighbor;
            }
            cout << endl;
        }
    }
};

int main() {
    
    Graph g(5);

    
    g.addEdge("Slawi", "Tegal");
    g.addEdge("Slawi", "Lebaksiu");
    g.addEdge("Tegal", "Lebaksiu");
    g.addEdge("Tegal", "Brebes");
    g.addEdge("Lebaksiu", "Adiwerna");

    
    g.printGraph();

    return 0;
}
~~~
#### Output:
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/bad580a5-4afb-4819-8d52-ddc5842d3894)

#### Interprestasikan:
Program ini mendefinisikan sebuah kelas Graph untuk merepresentasikan graf tidak berarah menggunakan daftar ketetanggaan (adjacency list) dalam bahasa C++. Graf ini berfungsi untuk menyimpan hubungan antara berbagai kota. Kelas Graph memiliki dua anggota utama: V, yang menyimpan jumlah simpul (vertices), dan adjList, yang merupakan tabel hash (unordered_map) yang memetakan nama kota (string) ke daftar tetangganya (vector<string>).

Konstruktor Graph menginisialisasi jumlah simpul V dan membuat graf kosong. Metode addEdge digunakan untuk menambahkan sebuah edge antara dua kota u dan v, yang menunjukkan bahwa kedua kota ini saling bertetangga, dan hubungan ini disimpan dalam adjList.

Metode printGraph berfungsi untuk mencetak representasi graf dengan menampilkan setiap kota beserta daftar tetangganya. Setiap kota di dalam adjList diakses, dan nama kota serta tetangganya dicetak ke layar dalam format yang mudah dibaca.

Dalam fungsi main, sebuah objek Graph g dibuat dengan 5 simpul. Beberapa edge ditambahkan antara kota-kota seperti "Slawi", "Tegal", "Lebaksiu", "Brebes", dan "Adiwerna", yang menunjukkan bahwa kota-kota ini saling terhubung. Setelah itu, metode printGraph dipanggil untuk mencetak daftar tetangga dari setiap kota.

### 5. Tree
Tree adalah struktur data tidak linear yang menggambarkan hubungan hierarkis (one-to-many) antara elemen-elemen. Elemen khusus yang disebut root adalah simpul utama, sedangkan node lainnya terbagi menjadi subpohon (subtree) yang saling tidak berhubungan.

Istilah Umum dalam Tree:
1. Predecessor: Node di atas node tertentu.
2. Successor: Node di bawah node tertentu.
3. Ancestor: Semua node sebelum node tertentu pada jalur yang sama.
4. Descendant: Semua node setelah node tertentu pada jalur yang sama.
5. Parent: Predecessor satu level di atas suatu node.
6. Child: Successor satu level di bawah suatu node.
7. Sibling: Node yang memiliki parent yang sama.
8. Subtree: Bagian dari tree berupa node beserta descendant-nya.
9. Size: Jumlah node dalam tree.
10. Height: Banyaknya tingkatan dalam tree.
11. Root: Node khusus tanpa predecessor.
12. Leaf: Node tanpa successor.
13. Degree: Banyaknya child yang dimiliki suatu node.

Jenis-Jenis Tree
1. Binary Tree:
Tree dengan syarat tiap node hanya boleh memiliki maksimal dua subtree yang terpisah, dengan paling banyak dua child.

Jenis-Jenis Binary Tree:

Full Binary Tree: Setiap node (kecuali leaf) memiliki dua child dan setiap subtree harus memiliki panjang path yang sama.
Complete Binary Tree: Mirip dengan Full Binary Tree, tetapi subtree boleh memiliki panjang path berbeda dan setiap node kecuali leaf hanya boleh memiliki 2 child.
Skewed Binary Tree: Binary Tree dimana semua node (kecuali leaf) hanya memiliki satu child.[4]

~~~C++
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


class Graph {
    int V; 
    unordered_map<string, vector<string>> adjList; // Adjacency list

public:
    
    Graph(int V) {
        this->V = V;
    }

    
    void addEdge(const string& u, const string& v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); 
    }

    
    void printGraph() {
        for (const auto &pair : adjList) {
            cout << "Kota " << pair.first << ":";
            for (const string &neighbor : pair.second) {
                cout << " -> " << neighbor;
            }
            cout << endl;
        }
    }
};

int main() {
    
    Graph g(5);

    
    g.addEdge("Slawi", "Tegal");
    g.addEdge("Slawi", "Lebaksiu");
    g.addEdge("Tegal", "Lebaksiu");
    g.addEdge("Tegal", "Brebes");
    g.addEdge("Lebaksiu", "Adiwerna");

    
    g.printGraph();

    return 0;
}
~~~
### output :
![image](https://github.com/ersaamelia/Teori-Alpro/assets/157209170/c6a72df8-da74-41dd-8765-6ac1f570009c)

### interprestasikan:
Program ini mendefinisikan struktur data pohon biner dan mengimplementasikan tiga jenis traversal pohon: pre-order, in-order, dan post-order, dalam bahasa C++. Struktur TNode merepresentasikan sebuah simpul pada pohon biner, yang memiliki tiga anggota: data (nilai integer yang disimpan di simpul), left (pointer ke simpul anak kiri), dan right (pointer ke simpul anak kanan). Konstruktor TNode menginisialisasi nilai data dan mengatur kedua pointer anak ke NULL.

Program ini memiliki tiga fungsi traversal rekursif: preOrder, inOrder, dan postOrder, yang masing-masing menerima pointer ke simpul akar pohon (TNode *node) sebagai argumen. Fungsi preOrder mencetak nilai simpul saat ini sebelum melakukan traversal ke anak kiri dan anak kanan. Fungsi inOrder melakukan traversal ke anak kiri terlebih dahulu, mencetak nilai simpul saat ini, kemudian melakukan traversal ke anak kanan. Fungsi postOrder melakukan traversal ke anak kiri dan anak kanan terlebih dahulu sebelum mencetak nilai simpul saat ini.

Dalam fungsi main, beberapa simpul pohon biner dibuat dan dihubungkan untuk membentuk struktur pohon. Simpul akar adalah root dengan nilai 1, yang memiliki dua anak: node2 dengan nilai 2 dan node3 dengan nilai 3. node2 sendiri memiliki dua anak: node4 dengan nilai 4 dan node5 dengan nilai 5.

#### Kesimpulan:

### sumber :
[1] N. Kesavan and T. Sudha, Principles of Data Structures Using C and C++. New Delhi, India: New Age International, 2005.

[2] ALGORITMA PEMROGRAMAN TERSTRUKTUR, Muhammad Bahit., vol. 113. Poliban Press, 2024.

[3] S. Esabella and M. Haq, Dasar-Dasar Pemrograman. Olat Maras Publishing, 2021:78-81. 

[4] R. Muliono, "Modul Praktikum Algoritma & Struktur Data - Merge," Universitas Medan Area, Feb. 2019. 