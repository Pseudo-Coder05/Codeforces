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
       string s;
        cin>>s;
        int flag=0;
        int ans =0;
        // while (n!=0) {
        //     if (n%10==0) ans++;
        //     else {
        //         n/=10;break;
        //     }
        //     n/=10;
        //
        // }
        // while (n!=0) {
        //
        //     if (n%10!=0) {
        //
        //         ans++;
        //         n/=10;
        //     }
        //     else {
        //         n/=10;
        //     }
        //
        // }
        int n=s.length();
        int i =n-1;
        while (i>=0 && s[i]=='0') {
            ans++;i--;
        }
        for (int j=0;j<i;j++) {
            if (s[j]!='0') {
                ans++;
            }
        }
 
        cout<<ans<<endl;
 
 
 
 
    }
}