// //Three cycle
// Given a graph with N vertices (numbered from 0 to N-1) and M undirected edges, then count the distinct 3-cycles in the graph. A 3-cycle PQR is a cycle in which (P,Q), (Q,R) and (R,P) are connected by an edge.

#include <bits/stdc++.h>
using namespace std;
int numOf3Cycles(vector<vector<int> > &edges, int n){
    int count =0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if(edges[i][j] && edges[j][k]==1 && edges[k][i]==1){
                        count++;
                    }
                }
            
        }
    }
    return count;
}

int main() {
    int n, m; // m is edges
    cin >> n >> m;
    vector<vector<int> > edges(n, vector<int>(n, 0));
    for(int i=0; i<m;i++){
        int sv,lv;
        cin >> sv >> lv;
        edges[sv][lv] = edges[lv][sv] = 1;
    }
    cout << numOf3Cycles(edges, n) << endl;

    return 0;
}