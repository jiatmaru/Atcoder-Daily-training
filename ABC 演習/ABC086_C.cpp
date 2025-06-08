#include <iostream>
using namespace std;
bool solve(){
    int N;cin>>N;
    int pt=0,px=0,py=0;
    for (int i=0;i<N;++i){
        int t,x,y;
        cin>>t>>x>>y;
        int T=t-pt,X=abs(x-px),Y=abs(y-py);
        if(T<X+Y){return false;}
        if(T%2!=(X+Y)%2){return false;}
        pt =t,px=x,py=y;
      }
        return true;
}

int main(){
    if (solve()){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}