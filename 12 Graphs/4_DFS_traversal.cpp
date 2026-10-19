// dfs using recursion method
#include<iostream>
#include<vector>
using namespace std;

void DFS(int node,vector<int>&ans,vector<bool>&visited,vector<int>AdjList[]){
    visited[node] = 1;
    ans.push_back(node);

    for(int i=0;i<AdjList[node].size();i++){
        if(!visited[AdjList[node][i]]){
            DFS(AdjList[node][i],ans,visited,AdjList);
        }
    }
}

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

    vector<int>ans;
    vector<bool>visited(vertex,0);
    int node = 0; //we start traversing from node 0
    DFS(node,ans,visited,AdjList);

    cout<<"DFS TRAVERSAL:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}