// topological sort using kahn's algorithm(BFS method)

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void topo_kahn(vector<int>AdjList[],queue<int>&q,vector<int>&InDeg,vector<int>&ans){

    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(int i=0;i<AdjList[node].size();i++){
            InDeg[AdjList[node][i]]--;
            if(InDeg[AdjList[node][i]]==0)
            q.push(AdjList[node][i]);
        }
    
    }
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

    vector<int>InDeg(vertex);
    queue<int>q;

    for(int i=0;i<vertex;i++){
        for(int j=0;j<AdjList[i].size();j++){
            InDeg[AdjList[i][j]]++;
        }
    }

    for(int i=0;i<InDeg.size();i++){
        if(!InDeg[i])
        q.push(i);
    }

    vector<int>ans;
    topo_kahn(AdjList,q,InDeg,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
