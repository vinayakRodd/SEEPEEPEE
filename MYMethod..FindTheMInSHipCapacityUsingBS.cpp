
int maxEle(vector<int> &weights){

    int maxEle = INT_MIN;

    for(int i=0; i<weights.size(); i++)
        if(weights[i] > maxEle)
            maxEle = weights[i];

    return maxEle;
}

int Sum(vector<int> weights){

    int sum=0;

    for(int i=0; i<weights.size(); i++)
        sum += weights[i];

    return sum;
}


int NoOfDays(vector<int> weights,int NoOfDays,int Capacity){

    int load = 0;

    int countDays=0;

    for(int i=0; i<weights.size(); i++){

        load += weights[i];

        if(load > Capacity){

            load = weights[i];
            countDays++;
        }


    }

    return countDays+1;
}



int leastWeightCapacity(vector<int> &weights, int d)
{
    int low = maxEle(weights),high = Sum(weights);
    int ans;
    while(low <= high){


        int mid = (low+high)/2;

        if (NoOfDays(weights, d, mid) <= d) {
            ans = mid;
            high = mid - 1;
        }

        else
            low = mid + 1;

    }

    return low;
}
