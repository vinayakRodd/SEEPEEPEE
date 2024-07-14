class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int mini = arr[0],profit = 0;
        int cost;
        for(int i=1; i<arr.size(); i++){

            cost = arr[i] - mini;
            profit = max(cost,profit);
            mini = min(arr[i],mini);
        }

        return profit;
    }
};
