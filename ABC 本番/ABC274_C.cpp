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
 int N;cin>>N;vector<int>e(N);rep(i,0,N){cin>>e[i];}
 set<int>sums;
 rep(i,0,(1 << N)){
    int sum_A=0; int sum_B=0;
    rep(j,0,N){
        if (i & (1<<j)){sum_A+=e[j];}
        else{sum_B+=e[j];}}
    sums.insert(max(sum_A,sum_B));}
    cout<<*sums.begin();
}