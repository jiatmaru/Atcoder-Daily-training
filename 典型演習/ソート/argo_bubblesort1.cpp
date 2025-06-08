#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;
typedef long long ll;

void output(vector<int>A){
    rep(i,0,A.size()){cout<<A[i];
    if (i!=A.size()-1) cout<<" ";
    else cout<<endl;
   }
}

int main(){
    int N; cin>>N;
    vector<int>A(N);rep(i,0,N){cin>>A[i];}
    rep(i,0,N){
        bool flag=false;
     rep(j,0,N-1){
        int temp=0;
        if (A[j]>A[j+1]){flag=true;
           temp=A[j]; A[j]=A[j+1];A[j+1]=temp;}
     }
    if (flag) output(A);
    else break;
    }
}