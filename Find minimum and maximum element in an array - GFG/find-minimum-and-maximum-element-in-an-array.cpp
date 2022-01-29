// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long>ans;
    long long mn=LLONG_MAX, mx = LLONG_MIN;
    for(int i=0;i<n;i++){
        long long num = a[i];
        mn = min(mn,num);
        mx = max(mx,num);
    }
    ans.first=mn;
    ans.second=mx;
    return ans;
}