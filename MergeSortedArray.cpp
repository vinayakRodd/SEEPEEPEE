#include <bits/stdc++.h>

class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
    
    int temp;

    
	int i=0,j=0;
    // a.erase(remove_if(a.begin(), a.end(), [](int value) { return value == 0; }), a.end());
    // b.erase(remove_if(b.begin(), b.end(), [](int value) { return value == 0; }), b.end());
    // remove_trailing_zeros(a);
    // remove_trailing_zeros(b);

    a.erase(a.begin()+m,a.end());

    b.erase(b.begin()+n,b.end());
    

	    while(i<m && m>0 && n>0){

		    if(a[i] > b[j]){
			    temp = a[i];
			    a[i] = b[j];
			    b[j] = temp;

		    }
    
		    for(int k=1; k<n; k++){

			    if(b[j] > b[k]){
				    temp = b[k];
				    b[k] = b[j];
				    b[j] = temp;

				    j++;
			    }
			    else	
				    break;
		    }

		    i++;
		    j=0;
    	}
    
    

    for(int i=0; i<b.size(); i++)
        a.push_back(b[i]);

    }

//     void remove_trailing_zeros(vector<int>& vec) {
//     // Find the last non-zero element
//     auto it = find_if(vec.rbegin(), vec.rend(), [](int value) { return value != 0; });

//     // Erase elements from the end to the last non-zero element
//     vec.erase(it.base(), vec.end());
// }

};
