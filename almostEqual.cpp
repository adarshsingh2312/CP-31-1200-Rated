//Jai shree ram
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans = 2;
        for(int i=1; i<=60; i++){
            set<ll> s;
            ll k = 1ll<<i;
            for(int j=0; j<n; j++){
                s.insert(a[j]%k);
            }
            if(s.size()==2){
                ans = k;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}