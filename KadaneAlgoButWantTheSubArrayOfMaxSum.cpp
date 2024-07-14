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

    int j,start=0;
    sum=0;
    for( j=0;j<n; j++){

        sum += a[j];
        if(sum > 0){

            if(sum == MaxSum)
                break;

        }

        else{

            sum = 0;
            start = j+1;
        }

        
    
    }

    vector<int> v;
    for(int i=start; i<=j; i++)
        v.push_back(a[i]);

    for(int i=0; i<=j; i++)
        cout<<v[i]<<" ";
    cout<<"\n";

    return MaxSum;
}

