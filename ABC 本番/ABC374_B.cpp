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
    string S,T;cin>>S>>T;
    int m=0;
    rep(i,0,S.size()){
     if (S[i]!=T[i]) {m=i+1;break;}}
    if (S.size()!=T.size() && m==0){cout<<min(S.size()+1,T.size()+1);}
    else {cout<<m;}}