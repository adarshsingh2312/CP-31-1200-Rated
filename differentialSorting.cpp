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
bool sorted(vll &a){
    for(ll i=0; i<a.size()-1; i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }    
    if(sorted(a)){
        cout<<0<<endl;
        return;
    }
    if(a[n-1]<a[n-2] || (a[n-1]<0 && a[n-2]<0)){
        cout<<-1<<endl;
        return;
    }
    cout<<(n-2)<<endl;
    for(int i=0; i<(n-2); i++){
        cout<<i+1<<" "<<(n-1)<<" "<<n<<endl;
    }
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