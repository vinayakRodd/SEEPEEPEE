class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int i=0;
        int j=i+1;
        int MaxSum=0;
        int flag;
        while(j<arr.size()){

            flag = 0;

            if(arr[j] - arr[i] > 0){

                if(arr[j] - arr[i] > MaxSum)
                    MaxSum = arr[j] - arr[i];

            }

            else{

                i++;
                j = i+1;
                flag = 1;

            }

            if(flag == 0)
                j++;
        }

        return MaxSum;
    }
};
