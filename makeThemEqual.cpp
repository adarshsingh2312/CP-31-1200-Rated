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
bool alreadyEqual(string a, char ch){
    for(int i=0; i<a.size(); i++){
        if(a[i]!=ch)    return false;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    if(alreadyEqual(s,ch)){
        cout<<0<<endl;
        return;
    }
    map<char,int>lst;
    for(int i=0; i<n; i++){
        lst[s[i]] = i+1; // last idx stored
    }
    if(lst.find(ch)==lst.end() || (n>=(2*lst[ch]))){
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
        return;
    }
    else{
        cout<<1<<endl;
        cout<<lst[ch]<<endl;
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