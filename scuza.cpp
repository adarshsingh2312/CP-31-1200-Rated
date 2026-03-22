//Jai shree ram
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
    vll pf(n);
    vll mx(n);
    pf[0] = a[0];
    for(ll o=1; o<n; o++){
        pf[o] = pf[o-1]+a[o];
    }
    mx[0] = a[0];
    for(ll i=1; i<n; i++){
        mx[i] = max(a[i],mx[i-1]);
    }
    while(q--){
        ll k;
        cin>>k;
        ll lo = 0;
        ll hi = n-1;
        while(hi-lo>1){
            ll mid = lo+(hi-lo)/2;
            if(mx[mid]>k){
                hi = mid-1;
            }
            else{
                lo = mid;
            }
        }
        if(mx[hi]<=k){
            cout<<pf[hi]<<" ";
        }
        else if(mx[lo]<=k){
            cout<<pf[lo]<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<endl;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}