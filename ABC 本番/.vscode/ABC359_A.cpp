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
    int N; 
    cin>>N;
    vector<string> S(N);
    rep(i,0,N){cin>>S[i];}
    int count=0;
    rep(i,0,N){
        if (S[i]=="Takahashi"){
            count+=1;
        }
    }
    cout<<count<<endl;
}