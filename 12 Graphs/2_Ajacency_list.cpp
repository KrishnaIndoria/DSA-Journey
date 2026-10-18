// graph representation by Adjacency list
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex,edges;
    cin>>vertex>>edges; //enter no of vertexx and no of edges

    vector<int>AdjList[vertex];

    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<AdjList[i].size();j++)
        cout<<AdjList[i][j]<<" ";

        cout<<endl;
    }
}