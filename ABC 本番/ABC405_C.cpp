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
    int N; cin>>N;
    vector<ll> A(N); rep(i,0,N){cin>>A[i];}
    vector<ll> B(N); rep(i,0,N){B[i]=A[i]*A[i];}
    ll s=0;
    ll t=0;
    rep(i,0,N){s+=A[i];}
    rep(i,0,N){t+=B[i];}
    ll S=s*s;
    cout<<(S-t)/2<<endl;
}