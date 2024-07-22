class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
         sort(a.begin(),a.end());

    int j,k;
    int n = a.size();
    int num1 = INT_MIN;
    int num2 = INT_MIN;
    int num3 = INT_MIN;

    vector<vector<int>> v;

    for(int i=0; i<n; i++){

        j = i+1; 
        k = n-1;

        if(a[i] == num1)
          continue;

        while(j<k){

          if(a[i]+a[j]+a[k] == 0){

            num1 = a[i];
            num2 = a[j];
            num3 = a[k];

            vector<int> temp = { a[i], a[j], a[k] };
            v.push_back(temp);
            j++;
            k--;

            while(j<k && num2 == a[j]) j++;
            while(j<k && num3 == a[k]) k--;
          }

          else
          if(a[i]+a[j]+a[k] > 0)
            k--;

          else
          if(a[i]+a[j]+a[k] < 0)
            j++;


          
          

        }

    }

      


    return v;
    }
};
