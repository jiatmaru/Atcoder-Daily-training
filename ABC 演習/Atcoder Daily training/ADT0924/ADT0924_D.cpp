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
   int N,W;cin>>N>>W;
   vector<int> A(N);
   rep(i,0,N){cin>>A[i];}
   set<int> G;
   rep(i,0,N){if (A[i]<=W) G.insert(A[i]);}
   rep(i,0,N-1){
    rep(j,i+1,N){if((A[i]+A[j])<= W) G.insert(A[i]+A[j]);}}
   rep(i,0,N-2){
    rep(j,i+1,N-1){
        rep(k,j+1,N){ if(A[i]+A[j]+A[k]<=W) G.insert(A[i]+A[j]+A[k]);}}}
   cout<<G.size()<<endl;
}