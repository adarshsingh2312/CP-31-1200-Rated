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

void solve(){
    ll n,x;
    cin>>n>>x;
    vll a(n+1);
    for(ll i=1; i<=n; i++)   cin>>a[i];
    sort(a.begin(),a.end());
    vll pf(n+1);
    pf[1] = a[1];
    for(ll i=2; i<=n; i++)   pf[i] = pf[i-1] + a[i];
    ll idx = upper_bound(pf.begin(),pf.end(),x) - pf.begin();
    idx--;
    if(idx==0){
        cout<<0<<endl;
        return;
    }
    ll days = 0;
    ll prev = 0;
    ll ans = 0;
    for(ll i=idx; i>=1; i--){
        days = (x-pf[i])/i + 1;
        ans += (days-prev)*i;
        prev = days;
    }
    cout<<ans<<endl;
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