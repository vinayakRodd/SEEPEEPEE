int longestSubarrayWithSumK(vector<int> a, long long k) {

    int n = a.size();
    int i=0,j=0;
    long long sum=0;
    int max = 0;

    while(j<n){

        sum+=a[j];

        while(i<=j && sum > k){

            sum -= a[i];
            i++;
        }
        
    
        if(sum == k && j-i+1 > max)
            max = j-i+1;

        
         
        
        j++;
          
            

    }

    return max;

}
