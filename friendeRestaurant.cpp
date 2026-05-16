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
    ll n;
    cin>>n;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vll b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    vll def(n);
    for(ll i=0; i<n; i++){
        def[i] = b[i]-a[i];
    }
    sort(def.begin(),def.end());
    ll i = 0;
    ll j = n-1;
    ll cnt = 0;
    while(i<j){
        if(def[i]+def[j] >= 0)  {
            i++;
            j--;
            cnt++;
        }
        else{
            i++;
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