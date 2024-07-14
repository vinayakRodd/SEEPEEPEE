long long  maxSubarraySum(vector<int> a, int n)
{
    long long sum=0;
    long long MaxSum=0;

    for(int i=0; i<n; i++){


        sum += a[i];

        if(sum < 0)
            sum = 0;

        if(sum > MaxSum)
            MaxSum = sum;

        
    }

    return MaxSum;
}

