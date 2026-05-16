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
bool comp(ll a, ll b){
    return a < b;
}
void solve(){
    ll n,m;
    cin>>n>>m;
    vll a(m);
    for(ll i=0; i<m; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),comp);
    vll gaps;
    for(ll i=1; i<m; i++){
        gaps.push_back(a[i]-a[i-1]-1);
    }
    gaps.push_back(n - a[m-1] + a[0] - 1); // last house aur first house ke beech...
    sort(gaps.rbegin(),gaps.rend());
    ll days = 0;
    ll saved = 0;
    for(ll i=0; i<gaps.size(); i++){
        ll curr = gaps[i] - 2*days;
        if(curr>0){
            saved++; // left wala save ho gaya...
            curr-=2; // 1-affecct + 1- save
            if(curr>0){
                saved+=(curr);// all saved between extrimities including right..
            }
            days+=2;
        }
    }
    ll ans = n - saved;
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