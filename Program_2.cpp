// Graph Traversal

#include<bits/stdc++.h>
using namespace std;
#define minHeap(a)   priority_queue<a,vector<a>,greater<a>>
#define maxHeap(a)   priority_queue<a>
#define all(a)       (a).begin(), (a).end()
#define rall(a)      (a).rbegin(), (a).rend()
const int MOD = 1e9 + 7;

// Just written the function for running dfs
// dfs for nodes marked with numbers
void dfs_num(int node, vector<vector<int>>& graph, int n, vector<int>& vis){
    for(int parent = 0; parent<n; parent++){
        vis[parent] = 1;
        cout<<parent<<"->";
        for(int child = 0; child<graph[parent].size(); child++){
            if(!vis[child]){
                vis[child]= 1;
                dfs_num(child, graph, n, vis);
            }
        }
    }
}





// void dfs(vector<pair<char,vector<char>>>& graph, int n, vector<int>& vis){
    
//     for(int i =0; i<n; i++){
//         vis[graph[i].first-'a'];
//         for(int j = 0; j<graph[i].second.size(); j++){

//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     // Input taking
//     vector<vector<char>> edges;
//     /*
//         example
//         [[A,C],
//          [A,D],
//          [B,D]
//          .....]
//     */
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         char e1, e2;
//         cin>>e1>>e1;
//         edges.push_back({e1,e2});
//     }

//     // dfs traversal
//     vector<int> visited(26);
//     vector<pair<char,vector<char>>> graph(n);
//     for(int i=0; i<n; i++){
        
//     }
//     dfs(graph, n, visited);

//     return 0;
// }