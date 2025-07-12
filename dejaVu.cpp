#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>
vll po(32);

int main(){
    po[0] = 1;
    for(int i=1; i<32; i++){
        po[i] = 2*po[i-1];// pre computed power of 2
    }
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vll a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        vll x(q);
        for(ll i=0; i<q; i++){
            cin>>x[i];
        }
        ll prev = po[31];
        for(ll j=0; j<q; j++){
            if(po[x[j]]>=prev)  continue;
            for(ll i=0; i<n; i++){
                if(a[i]%po[x[j]]==0){
                    a[i] += po[x[j]-1];
                }
            }
            prev = po[x[j]];
        }
        for(ll i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}