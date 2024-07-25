
#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int k) {
    
    map<int,int> mpp;

    int xr = 0;
    int x;
    int count=0;
    mpp[xr]++;

    for(int i=0; i<a.size(); i++){

        xr ^= a[i];

        x = xr^k;

        count += mpp[x];

        mpp[xr]++;
    }

    return count;
}
