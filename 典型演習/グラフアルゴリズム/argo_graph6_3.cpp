#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using Graph=vector<vector<int>>;
typedef long long ll;

struct edge{
    int from;
    int leng;
};
const int INF=1e9;

int main(){
    int N,M; cin>>N>>M;
    vector<vector<edge>> G(N);
    rep(i,0,M){
        //始点u,終点v,長さwの辺//
        int u,v,w;cin>>u>>v>>w;
        G[v].push_back({u,w});
    }
vector<int> dist(N,INF);
rep(v,0,N){
    if (v==0){dist[v]=0;}
    for (auto e:G[v]){
        dist[v]=min(dist[v],dist[e.from]+e.leng);}
    }
int ans=dist[N-1];
if (ans ==INF) ans=-1;
cout<<ans<<endl;
}

