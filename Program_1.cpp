// Graph Traversal

#include<bits/stdc++.h>
using namespace std;
#define minHeap(a)   priority_queue<a,vector<a>,greater<a>>
#define maxHeap(a)   priority_queue<a>
#define all(a)       (a).begin(), (a).end()
#define rall(a)      (a).rbegin(), (a).rend()
const int MOD = 1e9 + 7;

// Just written the logic for dfs
// prims algorithm for nodes named with numbers

// Logic
/*
    Logic is simple
    
    use of minHeap
    traverse the graph 
    create variables currentDist and netDistance
    at each visited node calculate the net distance travelled and push it to the minHeap 
    at last return the top of the minHeap that will be the output
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}