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
    int n,s;
    cin>>n>>s;
    vi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int cnt = count(a.begin(),a.end(),1);
    if(cnt<s){
        cout<<-1<<endl;
        return;
    }
    if(s==cnt){
        cout<<0<<endl;
        return;
    }
    vi pf(n+1);
    vi sf(n+1);
    pf[0] = (a[0]==0 ? 0 : 1);
    for(int i=1; i<n; i++){
        pf[i] = pf[i-1] + (a[i]==1 ? 1 : 0);
    }
    sf[n-1] = (a[n-1]==1 ? 1 : 0);
    for(int i=n-2; i>=0; i--){
        sf[i] = sf[i+1] + a[i];
    }
    int r = n;
    int l = lower_bound(pf.begin(),pf.end(),cnt-s)-pf.begin();
    int ans = INT_MAX;
    int rem = cnt-s;
    int lst = 0;
    if(pf[l] == rem) ans = l+1;
    for(int i=l; i>=0; i--){
        while(i<r && pf[i]+sf[r]!=rem){
            r--;
        }
        if(i<r && pf[i]+sf[r]==rem) {
            ans = min(ans,i+1+(n-r));
            if(ans==i+1+(n-r)){
                lst = i;
            }
        }
    }
    if(pf[lst]==0)  ans--;
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