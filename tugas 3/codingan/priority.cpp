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
