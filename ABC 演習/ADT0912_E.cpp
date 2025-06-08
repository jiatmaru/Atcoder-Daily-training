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
int N,Q; cin>>N>>Q;
vector<int>S(N);rep(i,0,N){S[i]=i;};
vector<int>A(Q);rep(i,0,Q){cin>>A[i];};
rep(i,0,Q){binary_search(0,Q,A[i]);}
}