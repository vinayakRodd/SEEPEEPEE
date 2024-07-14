#include <bits/stdc++.h>

int majorityElement(vector<int> v) {
	
	
	int ele = v[0];
	int count = 0;

	for(int i=0; i<v.size(); i++){


		if(v[i] == ele)
			count++;

		else	
			count--;

		if(count == 0)
			ele = v[i+1];

	}

	return ele;
}
