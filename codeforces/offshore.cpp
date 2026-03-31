#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sp ' '
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>


const ll MOD = 1e9 + 7;

void solve() {
     ll n,x,y; cin>>n>>x>>y;
     vi nums; vi nums1; ll sum=0;
     for(int i=0;i<n;i++){
        int a; cin>>a;
        nums.push_back(a);
        int  k=a/x;
        sum+=k;
        nums1.push_back(k);
     }
     ll ans=0;
     for(int i=0;i<n;i++){
         ans=max(ans,nums[i]+y*(sum-nums1[i]));
     }
     cout<<ans<<endl;
     
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;  // take care of this in test case
    cin >> t;
    while (t--)
        solve();
}