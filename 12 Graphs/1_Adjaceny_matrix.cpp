// graph representation by Adjacency matrix
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int vertices,edges;
    cin>>vertices>>edges; //enter no of vertices(nodes) and no of edges

    vector<vector<int>> adjmat(vertices, vector<int>(vertices, 0)); //2d matrix using vector

    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }

    cout<<"Adjacency matrix:"<<endl;
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
} 

// if weighted edges
// int u,v,weight;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v>>weight;
//         adjmat[u][v] = weight;
//         adjmat[v][u] = weight;
//     }


// if directed
// int u,v;
//     for(int i=0;i<edges;i++){
//         cin>>u>>v;
//         adjmat[u][v] = 1;
//     }