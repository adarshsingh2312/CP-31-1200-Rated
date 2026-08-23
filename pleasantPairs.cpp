//Jai shree ram
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
    ll n;
    cin>>n;
    vll a(n+1);
    for(ll i=1; i<=n; i++)  cin>>a[i];
    ll cnt = 0;
    for(ll i=1; i<=n; i++){
        ll x = a[i];
        for(ll s=x; s<=(2*n); s+=x){
            ll j = s-i;
            if(j > i && j <= n && a[i]*a[j]==s){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
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