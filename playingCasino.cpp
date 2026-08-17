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
    ll n,m;
    cin>>n>>m;
    vector<vll> a(n,vll(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    ll ans = 0;
    for(ll i=0; i<m; i++){
        vll col(n);
        for(ll j=0; j<n; j++){
            col[j] = a[j][i];
        }
        sort(col.begin(), col.end());
        vll pf(n);
        pf[0] = col[0];
        for(ll k=1; k<n; k++){
            pf[k] = pf[k-1] + col[k];
        }
        for(ll k=0; k<n; k++){
            ans += abs(col[k]*(n-k-1) - (pf[n-1]-pf[k]));
        }
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
