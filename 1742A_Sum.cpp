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
       int a[3];
       for(int i=0;i<3;i++) cin>>a[i];
        sort(a, a+3);
        if (a[0]+a[1]==a[2]) {cout<<"yes"<<endl;}
        else cout<<"no"<<endl;
 
 
 
    }
}