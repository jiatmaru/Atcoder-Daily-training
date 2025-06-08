#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
using Graph=vector<vector<int>>;
typedef long long ll;

int main(){
    ll Sx,Sy,Tx,Ty;
    cin>>Sx>>Sy;
    cin>>Tx>>Ty;
    ll count=0;
    if (abs(Ty-Sy)>=abs(Tx-Sx)){count=abs(Ty-Sy);}
    else {count=abs(Tx+Ty)/2 - (Sx+Sy)/2 +abs(Ty-Sy);}
    cout<<count<<endl;
}