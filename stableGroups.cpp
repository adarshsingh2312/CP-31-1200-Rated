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
    ll n,k,x;
    cin>>n>>k>>x;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(n==1){
        cout<<1<<endl;
        return;
    }
    vll diff(n-1);
    for(ll i=1; i<n; i++){
        if(a[i]==a[i-1])    diff[i-1] = 0;
        else diff[i-1] = (a[i]-a[i-1]-1)/x;
    }
    sort(diff.begin(),diff.end());
    vll pfd(n-1);
    pfd[0] = diff[0];
    for(ll i=1; i<n-1; i++){
        pfd[i] = pfd[i-1]+diff[i];
    }
    ll idx = upper_bound(pfd.begin(),pfd.end(),k)-pfd.begin();
    idx--;
    ll ans = n-1-idx;
    cout<<ans<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}