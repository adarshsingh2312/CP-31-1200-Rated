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
void solve2(){
    int n;
    string s;
    cin>>n>>s;
    int z = count(s.begin(),s.end(),'0');
    if(z==1 || z%2==0){
        cout<<"BOB"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
        solve2();
    }

    return 0;
}