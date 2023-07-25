#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

class Graph {
public:
  unordered_map<int, list<int>> adj;

  void addEdge(int u, int v, int direction) {
    // direction = 0 --> undirected graph
    // direction = 1 --> directed graph

    adj[u].push_back(v);
    if(direction == 0)
      adj[v].push_back(u);
    
  }

  void printAdjList(){

    for(auto i: adj){
      cout << i.first << " --> ";
      for(auto j: i.second){
        cout << j << ", ";
      }
      cout << endl;
    }
    
  }

};

int main() {

  int n;
  cout << "Number of nodes in the graph :";
  cin >> n;

  int m;
  cout << "Number of edges in the graph : ";
  cin >> m;
  
  Graph g;

  for(int i=0; i<m; i++){
    int u, v;
    cin >> u >> v;

    g.addEdge(u, v, 0);
  }
  
  g.printAdjList();
  
}
