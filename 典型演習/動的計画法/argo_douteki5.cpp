#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using Graph=vector<vector<int>>;
typedef long long ll;

const int INF=100000;
int main(){
    int N,M;cin>>N>>M;
    vector<int> A(N); rep(i,0,N){cin>>A[i];}
    vector<int> T(N,INF);
    T[0]=0;
    rep(i,1,N){
        rep(j,1,M+1){
        if ((i-j)>=0) {T[i]=min(T[i-j]+j*A[i],T[i]);};
        }
    }
    cout<<T[N-1]<<endl;
}