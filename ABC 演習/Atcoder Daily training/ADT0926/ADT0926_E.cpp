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
    int N,M;cin>>N>>M;
    vector<int>A(N);
    rep(i,0,N){cin>>A[i];} sort(A.begin(),A.end());
    int left=0; int max_gif=0;
    rep(right,0,N){
      while(A[right]-A[left]>=M){left++;}
     max_gif=max(max_gif,right-left+1);}
    cout<<max_gif<<endl;
}