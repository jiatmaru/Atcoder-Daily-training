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
    int n,m;cin>>n>>m;int a= n*m;
    vector<int> S(a);
    rep(i,0,a){cin>>S[i];}
    bool t=true;
    int first=S[0];
    rep(i,0,m){
        if (S[i]!=i+first) {t=false;break;}
    if (t) {rep(i,0,n){
              rep(j,0,m){
                if (S[m*i+j]!=first+7*i+j) {t=false;break;}}
      if (!t) break;}}}
    if (t){cout<<"Yes";}
    else {cout<<"No";}
}