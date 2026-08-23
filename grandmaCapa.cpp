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

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mini = INT_MAX;
    for(char ch ='a'; ch<='z'; ch++){
        bool poss = true;
        int erased = 0;
        int l = 0;
        int r = n-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[l]==ch){
                erased++;
                l++;
            }
            else if(s[r]==ch){
                r--;
                erased++;
            }
            else{
                poss = false;
                break;
            }
        }
        if(poss){
            mini = min(mini,erased);
        }
    }
    cout<<(mini==INT_MAX ? -1 : mini)<<endl;
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