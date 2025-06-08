#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;
typedef long long ll;

bool onechar_change(const string&T,const string& S){
    int diffcount=0;
    rep(i,0,T.size()){
     if(T[i]!=S[i]) {diffcount++;
       if(diffcount>1)return false;}}
    return diffcount=1;
} 

bool one

int main(){
    int N;string T;cin>>N>>T;
    int count=0;
    rep(i,0,N){string S;cin>>S; bool c=false;
    if (S==T) c=true;
    else if () {
    }
 }