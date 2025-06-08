#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
//const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;
typedef long long ll;

int I=1000000;
int main(){
    int N; cin>>N;
    vector<int>A(N);
    rep(i,0,N){cin>>A[i];}
    vector<int>S(N,I);
    rep(i,0,N-1){S[i]=A[i+1]-A[i];}
    int count=0;
    rep(i,0,N-1){
        rep(j,i,N){
            if (S[j]==S[i]){   
            
            }
            else { count+=(j-i+2)*(j-i+1)/2 ;
            cout<<j<<i<<endl;
                i=j;
            break;}
        }

    }
   cout<<count<<endl;
    
}