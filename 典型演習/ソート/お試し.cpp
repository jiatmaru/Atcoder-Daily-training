#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;
typedef long long ll;

void output(vector<int> A){
    rep(i,0,A.size()){
        cout<<A[i];
        if (i!=A.size()-1) cout<<" ";
        else cout<<endl;
    }
}

int main(){
    int N; 
    cin>>N;
    vector<int> A(N);
    rep(i,0,N){
        cin>>A[i];
    }

    rep(i,0,N-1){
        int m = A[i];
        int a = i;
        rep(j,i+1,N){
            if (m > A[j]) {
                m = A[j];
                a = j;
            }
        }
        swap(A[i], A[a]);
         output(A);  // ソートの途中経過を表示する場合
    }

   // output(A);  // 最終的なソート結果を出力

    return 0;
}
