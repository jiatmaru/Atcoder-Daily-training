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
    vector<vector<string>> Name(N,vector<string>(2));
    rep(i,0,N){cin>>Name.at(i).at(0)>>Name.at(i).at(1);}
    int count=0;
    rep(i,0,N-1){
        rep(j,i+1,N){
         if (Name.at(i).at(0)==Name.at(j).at(0)&&
         Name.at(i).at(1)==Name.at(j).at(1))
         count+=1;
        }
    }
    //cout<<count<<endl;
    if (count>0){cout<<"Yes"<<endl;}
    else {cout<<"No"<<endl;}
}