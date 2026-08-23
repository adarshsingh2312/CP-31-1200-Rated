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
    vi hsh(26);
    for(int i=0; i<n; i++){
        hsh[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(hsh[i]==0){
            char ch = i+'a';
            cout<<ch<<endl;
            return;
        }
    }
    string mex = "";
    for(char ch1='a'; ch1<='z'; ch1++){
        string temp = "";
        temp.push_back(ch1);
        for(char ch2='a'; ch2<='z'; ch2++){
            temp.push_back(ch2);
            if(s.find(temp) == string::npos){
                mex = temp;
                cout<<mex<<endl;
                return;
            }
            temp.pop_back();
        }
        temp.pop_back();
    }
    for(char ch1='a'; ch1<='z'; ch1++){
        string temp = "";
        temp.push_back(ch1);
        for(char ch2='a'; ch2<='z'; ch2++){
            temp.push_back(ch2);
            for(char ch3='a'; ch3<='z'; ch3++){
                temp.push_back(ch3);
                if(s.find(temp) == string::npos){
                    mex = temp;
                    cout<<mex<<endl;
                    return;
                }
                temp.pop_back();
            }
            temp.pop_back();
        }
        temp.pop_back();
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