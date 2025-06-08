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
    vector<int>A(N),B(N);
    rep(i,0,N){cin>>A[i];}
    rep(i,0,N){cin>>B[i];}
    int same=0;
    rep(i,0,N){ if(A[i]==B[i]) same+=1;
    }
    int diff=0;
    set<int> A_set(A.begin(),A.end());
    rep(i,0,N){if (A_set.count(B[i]) && A[i]!=B[i]) diff+=1;}
    cout<<same<<endl;
    cout<<diff<<endl;
    return 0;
}