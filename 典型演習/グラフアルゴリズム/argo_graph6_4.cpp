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
    vector<vector<edge>> G(N);
    rep(i,0,M){
        //始点u,終点v,長さwの辺//
        int u,v,w;cin>>u>>v>>w;
        G[u].push_back({u,v,w});
    }
    rep(v,0,N){
    int dist=INF;
    int ans=-1;
    for (auto e:G[v]){
        if (e.leng<dist) {dist=e.leng; ans=e.to;}
        else if (e.leng==dist) {ans=min(ans,e.to);}
    }
    cout<<ans<<endl;
    }
}