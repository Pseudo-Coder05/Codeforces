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
      int n;
      cin>>n;
      vector<int> a(n);
        set<int> b;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            b.insert(a[i]);
        }
 
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++) {
            if (b.size()<=a[i]) {
                cout<<a[i]<<endl;
                break;
            }
        }
 
    }
}