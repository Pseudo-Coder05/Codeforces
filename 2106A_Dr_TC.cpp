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
        int n;
        cin>>n>>s;
 
        int count0 =0, count1=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='0') count0++;
            else if(s[i]=='1') count1++;
        }
        cout<<count0+(s.length()-1)*count1<<endl;
 
 
    }
}