#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using Graph=vector<vector<int>>;
typedef long long ll;

struct edge{
    int from; int to; int leng;
};
const int INF=1e9;

int main(){
    int N,M; cin>>N>>M;
    vector<edge> G(M);
    rep(i,0,M){
        //始点u,終点v,長さwの辺//
        int u,v,w;cin>>u>>v>>w;
        G[i]={u,v,w};
    }
    vector<int> dist(N,INF);
    dist[0]=0;
    rep(i,0,M){
        auto [u,v,w]=G[i];
        dist[v]=min(dist[v],dist[u]+w);
     }
     rep(i,0,N){cout<<dist[i]<<endl;}
}