//Jai shree ram
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pair<int,int>>


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        map<int,int> m;
        int ans = 0;
        for(int i=0; i<n; i++){
            m[a[i]]++;
        }   
        for(auto &pr : m){
            ans+=max(pr.second - m[pr.first-1],0);
        }
        cout<<ans<<endl;
    }
    return 0;
}