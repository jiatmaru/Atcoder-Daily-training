#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;
typedef long long ll;

void rec(int N,vector<string>& G,int x,int y,int s){
   if (N==1){
    rep(i,0,3){
        rep(j,0,3){
            if (i==1 && j==1){G[x+i][y+j] = '.';}
            else {G[x+i][x+j] = '#';}
        }
     }
   
   return;
  }
    int ns=s/3; 
    rep(i,0,3){
        rep(j,0,3){
            if (i==1 && j==1){continue;}
            else{ rec(N-1,G,x+i*ns,y+j*ns,ns);}
        }
    }
}

int main(){
 int N=3;
 int s=pow(3,N); 
 vector<string> G(s, string(s, '.'));
 rec(N,G,0,0,s);
 for (auto &i :G){
    cout<<i<<endl;
    }
 return 0;
 
}