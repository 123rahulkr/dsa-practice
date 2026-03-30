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
    int n,k; cin>>n>>k;
     int a=0;
    vi nums(k,0);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==k) a++;
        if(x<k){
            nums[x]++;
        }
        
    }
    int b=0;
    for(int i=0;i<k;i++){
        if(!nums[i]){
            b++;
        }
    }
    cout<<max(a,b)<<endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;  // take care of this in test case
    cin >> t;
    while (t--)
        solve();
}