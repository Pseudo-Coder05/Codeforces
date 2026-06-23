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
       string s1,s2;
        cin>>n>>s1>>s2;
        for (int i=0;i<n;i++) {
            if (s1[i]=='G') {
                s1[i]='B';
 
            }
            if (s2[i]=='G') {
                s2[i]='B';
            }
        }
        if(s1==s2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 
 
 
    }
}