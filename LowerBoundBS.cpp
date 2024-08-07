int lowerBound(vector<int> arr, int n, int x) {
	
	int low = 0,high = n-1;
	int lb = n;                        
	while(low<=high){

		int mid = (low+high)/2;

		if(x <= arr[mid]){
			lb = mid;
			high = mid-1;
		}
		else
			low = mid+1;

		
	}

  // Do not worry abou the if the element is 0 and does not exist as this algo will find the element greater than that.. and also if the element does not exist and it is the largest element then will ust return the 
  // size of the array as the index.. hypothetically //
	return lb;



}

// Lower Bound is the lowest index at which the element is  greater than equal to x..
