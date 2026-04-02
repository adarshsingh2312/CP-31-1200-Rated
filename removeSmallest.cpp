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
    string s;
    cin>>s;
    ll cost = 0;
    vector<bool>removed(n+1,false);
    for(ll i=1; i<=n; i++){
        for(ll j=i; j<=n; j+=i){ 
            if(s[j-1]=='1') break;
            if(removed[j]){
                continue;
            }
            removed[j] = true;
            cost+=i;
        }
    } // Time complexity-> n+ n/2 + n/3 + n/4...
    // = O(n*ln(n))
    cout<<cost<<endl;
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