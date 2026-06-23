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
        int sum=-1;
        int same =0;
        int even=0;
        cin>>n;
        vector<int> a(n),numba(1001,-1);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            numba[a[i]]=i+1;
        }
        for(int i=1;i<=1000;i++) {
            for(int j=i;j<=1000;j++) {
                if (numba[i]!=-1 && numba[j]!=-1) {
                    if (gcd(i,j)==1) sum = max(sum,numba[i]+numba[j]);
                }
            }
        }
        cout<<sum<<endl;
 
 
 
 
    }
}