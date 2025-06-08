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
    int n,m;
    cin>>n>>m;
    vector<string>s(n); rep(i,0,n){cin>>s[i];}
    int ans=n;
    rep(bit,0,1<<n){
        vector<bool>exist(m);int cnt=0;
        rep(i,0,n){
            if(bit>>i&1){++cnt;
            rep(j,0,m){if (s[i][j]=='o') exist[j]=true;}
         }
      }
        bool all_exist=true;
        rep(j,0,m){if(!exist[j])all_exist=false;}
        if (all_exist){ans=min(ans,cnt);}
    }
    cout<<ans<<endl;
}