#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N, M;
    cin>>N>>M;
    vector<string> S(N);
    for(int i=0;i<N;++i) {cin>>S[i];}
    int F=(1<<M)-1;
    vector<int> dp(1<<M,INT_MAX);
    dp[0]=0;
    for(int i=0;i<N;++i){
        int m=0;
        for (int j= 0;j< M;++j) {
            if (S[i][j]=='o'){
                m|=(1<<j);}
        }
        for (int p=F;p>=0;--p) {
            if (dp[p]!=INT_MAX) {
                dp[p|m]=min(dp[p|m],dp[p]+1);}
        }
    }
    cout<<dp[F]<<endl;
}
