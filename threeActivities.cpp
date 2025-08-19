#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pair<int,int>>
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        vi c(n);
        vii ans_a;
        vii ans_b;
        vii ans_c;
        for(int i=0; i<n; i++){
            cin>>a[i];
            ans_a.push_back({a[i],i});
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            ans_b.push_back({b[i],i});

        }
        for(int i=0; i<n; i++){
            cin>>c[i];
            ans_c.push_back({c[i],i});
        }

        sort(ans_a.rbegin(),ans_a.rend());
        sort(ans_b.rbegin(),ans_b.rend());
        sort(ans_c.rbegin(),ans_c.rend());
    
        ll maxi = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    if(ans_a[i].second!=ans_b[j].second && ans_a[i].second!=ans_c[k].second && ans_b[j].second!=ans_c[k].second){
                        ll sum = ans_a[i].first+ans_b[j].first+ans_c[k].first;
                        maxi = max(maxi,sum);
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}