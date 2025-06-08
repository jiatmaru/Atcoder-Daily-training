#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;
typedef long long ll;

int main(){
    int N,M;cin>>N>>M;
    vector<int>A(N),B(M);rep(i,0,N){cin>>A[i];} ;rep(i,0,M){cin>>B[i];}
    multiset<int> st;
    rep(i,0,N)st.insert(A[i]);
    ll ans=0;
    rep(i,0,M) { auto v=st.lower_bound(B[i]);
     if (v==st.end()){cout<<-1<<'\n';
     return 0;}
     ans +=*v;st.erase(v);}
     cout<<ans<<'\n';
}
    /*    t+=A[i];}
    int dp[0]=0;
    rep(i,0,M){ if(A[i]<B[i]){cout<<";}
    else {dp[i]=}} */
    