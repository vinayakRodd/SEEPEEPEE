class Solution {
public:
    int maximumGap(vector<int>& a) {
        sort(a.begin(),a.end());

        
        if(a.size() < 2)
            return 0;

        int maxDiff = 0;
        int diff = 0;
        for(int i=0; i<a.size()-1; i++){

            if(a[i] <= a[i+1])
                diff = a[i+1] - a[i];
            else
                break;

            if(diff > maxDiff)
                maxDiff = diff;

        }

        return maxDiff;
    }
};
