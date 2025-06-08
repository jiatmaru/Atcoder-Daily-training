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
string D[10]={"-----",".----","..---","...--" ,"....-" , "....." ,"-....","--..." , "---..","----."};
vector<string>A(N);
rep(i,0,N){cin>>A[i];}
rep(i,0,N){
   rep(j,0,10){
       if (A[i]==D[j]) {cout<<j; 
       break;}
   }
  }
}