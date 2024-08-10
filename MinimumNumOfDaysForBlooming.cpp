class Solution {
public:

    int maxEle(vector<int>& bloomDay){

        int maxDay=-1;
        
        for(int i=0; i<bloomDay.size(); i++){

            if(bloomDay[i] > maxDay)
                maxDay = max(bloomDay[i],maxDay);
        }

        return maxDay;
    }

    int minEle(vector<int>& bloomDay){

        int minDay=INT_MAX;
        
        for(int i=0; i<bloomDay.size(); i++){

            if(bloomDay[i] < minDay)
                minDay = min(bloomDay[i],minDay);
        }

        return minDay;
    }

    int NoOfBouquets(vector<int> &bloomDay,int Day,int NoOfPair){

        int pairCount = 0,NoOfFlower=0;

        for(int i=0; i<bloomDay.size(); i++){
            
            if(bloomDay[i] <= Day)
                pairCount++;

            else
                pairCount=0;

            if(pairCount == NoOfPair){
                NoOfFlower++;
                pairCount = 0;
            }
                

           
        }

        return NoOfFlower;
    }


    int minDays(vector<int>& bloomDay, long long  m, long long k) {
        
        if(bloomDay.size() < m*k)
            return -1;

        

        long long low = minEle(bloomDay),high = maxEle(bloomDay);
        
        long long ans;
        while(low <= high){

            long long  mid = (low+high)/2;

            int NumBouquets = NoOfBouquets(bloomDay,mid,k);

            if(NumBouquets >= m){
                    ans = mid;
                    high = mid-1;
            }
            else
                    low = mid+1;

        }

        return ans;
    }
};
