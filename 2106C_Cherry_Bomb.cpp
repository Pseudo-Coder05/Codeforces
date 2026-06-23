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
       int n,k;
        cin>>n>>k;
        int count=0;
        int counter=-1;
        int flag=0;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n;i++) {
            cin>>b[i];
            if (b[i]==-1) {
                count++;
            }
            else if (counter==-1) {
               counter= a[i]+b[i];
               continue;
            }
            else if (a[i]+b[i]!=counter) {
                flag=1;
 
            }
 
 
 
 
        }
        if(count==n) {
            sort(a.begin(),a.end());
            cout<<k+a[0]-a[n-1]+1<<endl;
        }
        else if (flag==1) {
            cout<<0<<endl;
        }
        else {
            for (int i=0;i<n;i++) {
                if ((b[i]==-1) ) {
                    if (counter-a[i]>k || counter-a[i]<0){flag=1;break;}
 
                }
            }
            if (flag==0) {cout<<1<<endl;}
            else {cout<<0<<endl;}
        }
 
    }
}