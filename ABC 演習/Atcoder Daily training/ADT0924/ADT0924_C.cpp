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
  int N;cin>>N;
  set<vector<int>> unique_seq;
  rep(i,0,N){
    int L;cin>>L;
    vector<int> s(L);
    rep(j,0,L){cin>>s[j];}
    unique_seq.insert(s);
  }
   cout<<unique_seq.size()<<endl;
   return 0;
}