//Jai shree ram
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>
ll gcd(ll x, ll y){
    if(y == 0) return x;
    return gcd(y, x%y);
}
ll LCM(ll x, ll y){
    return (x*y)/gcd(x,y);
}
ll sum(ll n2, ll n1){
    ll s1 = n2*(n2+1)/2;
    ll s2 = n1*(n1+1)/2;
    return s1-s2;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        if(x==y){
            cout<<0<<endl;
            continue;
        }
        ll xEle = n/x;
        ll yEle = n/y;
        ll lcm = LCM(x,y);
        ll common = n/lcm;
        ll ans = 0;
        xEle-=common;
        yEle-=common;
        ans-=sum(yEle,0);
        ans+=sum(n,n-xEle);
        cout<<ans<<endl;
    }
    return 0;
}