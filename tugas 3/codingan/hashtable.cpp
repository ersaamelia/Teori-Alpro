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