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
