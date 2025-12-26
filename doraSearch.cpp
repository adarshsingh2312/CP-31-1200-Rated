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
        vi a(n+1);
        for(int i=1; i<=n; i++) cin>>a[i];
        if(n<4){
            cout<<-1<<endl;
            continue;
        }
        int l = 1,r=n;
        set<int>s;
        for(int i=1; i<=n; i++){
            s.insert(i);
        }
        while(l<r){
            auto it1 = *--s.end();
            auto it2 = *s.begin();
            if(a[l]==it1 || a[r]==it1){
                if(a[l]==it1)   l++;
                else    r--;
                s.erase(it1);
            }
            else if(a[l]==it2 || a[r]==it2){
                if(a[l]==it2)   l++;
                else    r--;
                s.erase(it2);
            }
            else{
                break;
            }
        }
        if(r-l<3){
            cout<<-1<<endl;
            continue;
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}