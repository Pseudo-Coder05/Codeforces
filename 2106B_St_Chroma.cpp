#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
int32_t main() {
    faster();
    int t;
    cin>>t;
    while(t--) {
       int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int p=0;
        for(int i=0;i<n;i++) {
            a[i]=i;
        }
        if (x<=n-1) {
            a.erase(a.begin()+x);
            a.push_back(x);
        }
        for (auto i:a) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}