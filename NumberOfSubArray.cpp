class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        

        int count = 0;
        map<int,int> mpp;
        mpp[0]=1;
        int preSum=0;
        for(int i=0; i<a.size(); i++){

            preSum += a[i];
            int remSum = preSum - k;
            count += mpp[remSum];
            mpp[preSum] +=1 ;


        }

        return count;

    }
};
