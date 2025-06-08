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
    int N,M; cin>>N>>M;
    vector<int>A(N);
    rep(i,0,N) {cin>>A[i];}
    int count=0;
    rep(i,0,N){
        set<int>P; for (int x:A) {P.insert(x);}
        bool flag= false;
        rep(k,1,M+1) {
            if (P.count(k) == 0) {
                flag=true;
                break;}}
        if (flag) {break;}
        A.pop_back();
        count+=1;
        }
    cout<<count<<endl;
    }