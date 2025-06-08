#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q; string S; cin>>N>>Q>>S;
    vector<int> cs(N+1,0);
    for (int i=1;i<N;i++){cs[i+1]=cs[i]+(S.substr(i-1,2)=="AC");}
    for(int q=0;q<Q;q++){int l,r; cin>>l>>r; --l; cout<<cs[r]-cs[l+1]<<endl;}
}