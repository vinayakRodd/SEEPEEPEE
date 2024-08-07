int upperBound(vector<int> &arr, int x, int n){
	
	int low = 0,high = n-1;
	int ub = n;
	
	while(low<=high){

		int mid = (low+high)/2;

		if(x < arr[mid]){
			ub = mid;
			high = mid-1;
		}
		else
			low = mid+1;

		
	}

	


	return ub;

	
}
// Upper Bound is the lowest index at which the element is strictly greater than x..
