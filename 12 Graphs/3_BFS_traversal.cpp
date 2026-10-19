#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> BFS(int v,vector<int>AdjList[]){
    queue<int>q;
    vector<bool>visited(v,0);//of size v(no of vertices) and initialize with 0.
    vector<int>ans;

    //suppose we start traversing from node 0 
    q.push(0);
    visited[0] = 1;

    int node;
    while(!q.empty()){
        node = q.front();
        q.pop();
        ans.push_back(node);

        for(int j=0;j<AdjList[node].size();j++){
            if(!visited[AdjList[node][j]]){
                visited[AdjList[node][j]] = 1;
                q.push(AdjList[node][j]);
            }
        }
    }

    return ans;
    

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

    cout<<"Adjacency list:"<<endl;
    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<AdjList[i].size();j++)
        cout<<AdjList[i][j]<<" ";

        cout<<endl;
    }

    vector<int>ans = BFS(vertex,AdjList);
    cout<<"BFS TRAVERSAL:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}