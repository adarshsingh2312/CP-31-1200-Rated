// Jai shree ram
// Free Palestine from world map...
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>
bool isInc(vi &a){
    for(int i=1; i<a.size(); i++){
        if(a[i]<a[i-1]) return false;
    }
    return true;
}

bool isDec(vi &a){
    for(int i=1; i<a.size(); i++){
        if(a[i]>a[i-1]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        vi ans;
        ans.push_back(a[0]);
        ans.push_back(a[1]);
        for(int i=2; i<n; i++){
            int curr = ans.size();
            int x = ans[curr-2] - ans[curr-1];
            int y = ans[curr-1] - a[i];
            if(x>0){
                if(y>0) ans[curr-1] = a[i];
                else if(y<0) ans.push_back(a[i]);
            }
            else{
                if(y<0) ans[curr-1] = a[i];
                else if(y>0)  ans.push_back(a[i]);
            }
        }
        int score = ans.size();
        if(ans[0]==ans[1]){
            score--;
        }
        cout<<score<<endl;
    }
    return 0; 
}