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
int Q;cin>>Q;
vector<int>v;
vector<int>A(Q),B(Q);
rep(i,0,Q){ cin>>A[i]>>B[i];}
rep(i,0,Q){
    if (A[i]==1){v.push_back(B[i]);}
    else if(A[i]==2) {cout<<v[v.size()-B[i]]<<endl;}
  }
  return 0;
}