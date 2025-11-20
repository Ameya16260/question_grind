#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> in(n+1);
    for(int i = 1; i <= n; i++){
        cin >> in[i];
    }

    vector<vector<int>> adj(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> dist(n+1, -1);
    vector<int> ans(k+1, 0);

    queue<int> q;
    q.push(1);
    dist[1] = 0;
    ans[in[1]] = max(ans[in[1]], 0);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : adj[u]){
            if(dist[v] == -1){
                dist[v] = dist[u] + 1;
                ans[in[v]] = max(ans[in[v]], dist[v]);
                q.push(v);
            }
        }
    }

    for(int i = 1; i <= k; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
