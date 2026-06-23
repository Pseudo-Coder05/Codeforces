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
      int n,a;
        int sum=0,ans=0;
        cin>>n>>a;
        string s;
        cin>>s;
        for(int i=0;i<n;i++) {
            if(s[i]=='0' && sum==0) {ans++;}
            else if(s[i]=='0') {sum--;}
            else if(s[i]=='1') sum=a;
        }
        cout<<ans<<endl;
 
 
 
 
 
    }
}