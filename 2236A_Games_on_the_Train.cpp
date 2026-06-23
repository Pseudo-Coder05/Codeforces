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
#include <unordered_set>
 
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
         vector<int> nums;
         for(int i=0;i<n;i++) {
             int x;
             cin>>x;
             nums.push_back(x);
         }
        sort(nums.begin(),nums.end());
        cout<<nums[n-1]-nums[0]+1<<endl;
 
    }
}