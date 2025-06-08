#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N; vector<double> X(N),Y(N);
    for (int i=0;i<N;++i) cin>>X[i]>>Y[i];
    auto calc =[&](int i,int j)-> double{
        return sqrt((X[j]-X[i])*(X[j]-X[i])+
        (Y[j]-Y[i])*(Y[j]-Y[i]));};
    double res= 0.0;
    //used[v] 頂点vをすでに訪れたか
    vector<bool> used(N,false); used[0]=true;
    //前回の頂点
    int prev=0;
    //毎回貪欲に頂点を選ぶ
    for(int i=0;i<N-1;i++){
        int nex=-1; double min_dis =1000000;
        for(int j=0;j<N;j++){
            if (used[j])continue; double dis=calc(prev,j);
            if (min_dis>dis){min_dis=dis;nex=j;}
        }
    //新たに頂点nexを訪ねる
    used[nex]=true; res+=min_dis;
    //前回頂点を更新
    prev=nex;
  }
   //最後に頂点0へ戻る
   res+=calc(prev,0);
   cout<<fixed<<setprecision(10)<<res<<endl;
}
