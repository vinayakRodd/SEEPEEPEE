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

	int count1 = 0;

        for (int i = 0; i < v.size(); i++) {
                if (v[i] == ele)
                        count1++;
						
				if(count1 > v.size()/2)
					return ele;
        }
}

// I have returned the element itself but still if the problem statement states to return the count then that can also be done in this solution..//
