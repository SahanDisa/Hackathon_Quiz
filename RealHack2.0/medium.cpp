// C++ program to represent undirected and weighted graph 
// using STL. The program basically prints adjacency list 
// representation of graph 
#include <bits/stdc++.h> 
using namespace std; 
  
// To add an edge 
void addEdge(vector <pair<int, int> > adj[], int u, 
                                     int v, int wt) 
{ 
    adj[u].push_back(make_pair(v, wt)); 
    adj[v].push_back(make_pair(u, wt)); 
} 
  
// Print adjacency list representaion ot graph 
void printGraph(vector<pair<int,int> > adj[], int V) 
{ 
    int v, w;
	 
    for (int u = 0; u < V; u++) 
    { 
        cout << "Node " << u << " makes an edge with \n";
		adj[u][0]; 
        for ( it = adj[u].begin(); it!=adj[u].end(); it++) 
        { 
            v = it->first; 
            w = it->second; 
            cout << "\tNode " << v << " with edge weight ="
                 << w << "\n"; 
        } 
        cout << "\n"; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int V,n,i;
    int a,b,val;
    
    cin>>V;
    cin>>n;
    vector<pair<int, int> > adj[V]; 
    for(i=0;i<n;i++){
    	cin>>a;
    	cin>>b;
    	cin>>val;
    	addEdge(adj, a, b, val); 
    }
    
    return 0; 
} 
