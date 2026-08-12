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
    int n;
    cin>>n;
    vector<string> mat(n);
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        mat[i] = s;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int c0 = 0;
            int c1 = 0;
            if(mat[i][j]=='0')  c0++;
            else    c1++;
            if(mat[j][n-1-i]=='0')  c0++;
            else    c1++;
            if(mat[n-1-i][n-1-j]=='0')  c0++;
            else    c1++;
            if(mat[n-1-j][i]=='0')  c0++;
            else    c1++;
            if(c0==0 || c1==0)  continue;
            else{
                if(c1<c0){
                    ans+=c1;
                    mat[i][j] = '0';
                    mat[j][n-i-1] = '0';
                    mat[n-1-i][n-1-j] = '0';
                    mat[n-1-j][i] = '0';
                }
                else{
                    ans+=c0;
                    mat[i][j] = '1';
                    mat[j][n-i-1] = '1';
                    mat[n-1-i][n-1-j] = '1';
                    mat[n-1-j][i] = '1';
                }
            }
        }
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