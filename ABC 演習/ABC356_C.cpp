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
    int N,M,K;
    cin>>N>>M>>K;
    int P=1; rep(i,0,N){P*=2;}
    rep(i,0,M){
        int c;
        cin>>c; rep(j,0,c){cin>>A[j];}
        int x=0;
        rep(j,0,P){
            string T;
          vector<int>B(N,0);
           rep(k,0,N){B[k]=P%2; P/=2;}
           rep(k,0,c){if (B[A[k]]==1) x+=1;}
           if (x>=k) {T="o";}
           else {T="x";}
           if T
          }
    }
}