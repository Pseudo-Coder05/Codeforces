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
      vector<int> a(n),b(n);
      for(int i=0;i<n;i++) {cin>>a[i]; b[i]=a[i];}
      sort(a.begin(),a.end());
        int max=a[n-1];
        int max2=a[n-2];
        for (int i=0;i<n;i++) {
            if (b[i]==max) {
                cout<<b[i]-max2<<" ";
            }
            else cout<<b[i]-max<<" ";
        }
        cout<<endl;
 
 
 
 
    }
}