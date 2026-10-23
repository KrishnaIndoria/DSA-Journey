// topologocal sort using dfs
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void topo_dfs(int node,vector<int>AdjList[],vector<bool>&visited,stack<int>&s){
    visited[node] = 1;
    for(int j=0;j<AdjList[node].size();j++){
        if(!visited[AdjList[node][j]]){
            topo_dfs(AdjList[node][j],AdjList,visited,s);
        }
    }
    s.push(node);
}

int main(){
    int vertex,edges;
    cin>>vertex>>edges; //enter no of vertex and no of edges

    vector<int>AdjList[vertex];

    //Directed acyclic graph
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
    }

    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<AdjList[i].size();j++)
        cout<<AdjList[i][j]<<" ";

        cout<<endl;
    }

    vector<bool>visited(vertex,0);
    stack<int>s;
    

    topo_dfs(0,AdjList,visited,s);

    for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
            topo_dfs(i,AdjList,visited,s);
        }
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}