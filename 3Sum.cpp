class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
    sort(a.begin(),a.end());

    int j,k;
    int n = a.size();
    

    vector<vector<int>> v;

    for(int i=0; i<n; i++){

        

        if(i>0 && a[i] == a[i-1])
          continue;

        j = i+1; 
        k = n-1;

        while(j<k){
            
            long long sum = a[i];

            sum += a[j];
            sum += a[k];

          if(sum == 0){

            vector<int> temp = { a[i], a[j], a[k] };
            v.push_back(temp);
            j++;
            k--;

            while(j<k && a[j-1] == a[j]) j++;
            while(j<k && a[k+1] == a[k]) k--;
          }

          else
          if(sum > 0)
            k--;

          else
          if(sum < 0)
            j++;

        }

    }

      


    return v;
    }
};
