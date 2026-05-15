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
// >>-----0-0------>      
void solve(){
    int n,k;
    cin>>n>>k;
    vi a(n+1);
    vector<vi> colors(k+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        colors[a[i]].push_back(i);
    }
    int ans = INT_MAX;
    for(int i=1; i<=k; i++){
        if(colors[i].empty()){continue;}
        int maxi = INT_MIN;
        int maxi2 = INT_MIN;
        int prev = 0;
        for(int j=0; j<colors[i].size(); j++){
            int diff = colors[i][j] - prev -1 ;
            if(diff>maxi){
                maxi2 = maxi;
                maxi = diff;
            }
            else if(diff>maxi2){
                maxi2 = diff;
            }
            prev = colors[i][j];
        }
        int diff = n-prev;
        if(diff>maxi){
            maxi2 = maxi;
            maxi = diff;
        }
        else if(diff>maxi2){
            maxi2 = diff;
        }
        int repaint = maxi/2;
        ans = min(max(repaint,maxi2),ans);
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