#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using Graph=vector<vector<int>>;
typedef long long ll;

int main(){
    int N; cin>>N;
    vector<int>A(N);
    rep(i,0,N){cin>>A[i];}
    int count=0;
    sort(A.rbegin(),A.rend());
    while (A[0]>0 && A[1]>0){
    A[0]-=1; A[1]-=1;
    sort(A.rbegin(),A.rend());
    count+=1;}
    
    cout<<count<<endl;
}