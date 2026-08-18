// Jai shree ram
// Will grind till end...
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pair<int,int>>
class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};
void solve(){
    ll n,q;
    cin>>n>>q;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll s = accumulate(a.begin(),a.end(),0ll);
    int prev = 1;
    ll ele = 0;
    set<ll> st;
    for(ll i=0; i<q; i++){
        ll t, in, x;
        cin>>t;
        if(t==2)    cin>>x;
        else    cin>>in>>x;
        ll sum = 0;
        if(t==1){
            if(ele==0 || (st.find(in-1)!=st.end())){
                sum = s + x - a[in-1];
                a[in-1] = x;
            }
            else{
                sum = s + x - ele;
                a[in-1] = x;
                st.insert(in-1);
            }
        }
        else{
            sum = x*n;
            st.clear();
            ele = x;
        }
        cout<<sum<<endl;
        s = sum;
        prev = t;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}