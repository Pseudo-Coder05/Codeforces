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
       string arr[8];
        int k;
        int count=0;
        int flag=0;
        for(int i=0;i<8;i++) {
            cin>>arr[i];
        }
        for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) {
                if (arr[i][j]=='R') count++;
            }
            if (count==8) flag=1;
            count=0;
 
 
        }
        if(flag==1) {
            cout<<'R'<<endl;
        }
        else {
            cout<<'B'<<endl;
        }
 
 
    }
}