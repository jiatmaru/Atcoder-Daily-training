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
    vector<int>A(7);
    multiset<int> st;
    rep(i,0,7) {cin>>A[i];}
    rep(i,0,7) {st.insert(A[i]);}
    bool bool1=false;
    bool bool2=false;
    for (auto itr =st.begin(); itr!=st.end();++itr){
    if (st.count(*itr)==3) bool1=true;
    if (st.count(*itr)==2) bool2=true;
    }

    if (bool1 && bool2 ) cout<<"Yes";
    else    cout<<"No";
}