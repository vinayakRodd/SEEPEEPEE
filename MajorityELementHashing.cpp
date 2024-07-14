#include <bits/stdc++.h>

int majorityElement(vector<int> v) {
	
	
	map<int,int> mpp;


	for(int num: v)
		mpp[num]++;

	for(auto ele: mpp){

		if(ele.second > v.size()/2)
			return ele.first;

	}

	return -1;
}
