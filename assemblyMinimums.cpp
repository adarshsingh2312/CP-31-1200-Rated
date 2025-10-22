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
        int sz = n*(n-1)/2;
        vi b(sz);
        for(int i=0; i<sz; i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        int x = n-1;
        int i = 0;
        while(x>0){
            cout<<b[i]<<" ";
            i+=(x);
            x--;
        }
        cout<<1000000000<<endl;
    }
    return 0;
}