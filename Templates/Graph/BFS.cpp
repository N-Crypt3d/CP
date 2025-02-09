const int N = 3e5 + 5;

vector<int> edge[N];   // change to long long if needed
const int inf =1e9;

void BFS(int source, int dest){
    vector<int> dist(N, inf);

    queue<int> q;   

    q.push(source);
    dist[source]=0;

    while(!q.empty()){
        int u =q.front();
        q.pop();
        
        for(int i=0; i<(int)edge[u].size(); i++){
            int v=edge[u][i];
            
            if(dist[u] + 1 < dist[v]){
                dist[v]=dist[u] + 1;
                q.push(v);
            }
        }
    }
    cout << dist[dest] << "\n" ;
}