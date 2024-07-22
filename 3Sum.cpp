class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
    sort(a.begin(),a.end());

    int j,k;
    int n = a.size();
    

    vector<vector<int>> v;

    for(int i=0; i<n; i++){

        

        if(i>0 && a[i] == a[i-1])              // In this step comparing with the  prev element, if they are same then then skip the next steps //
          continue;

        j = i+1; 
        k = n-1;

        while(j<k){
            
            long long sum = a[i];                    // here consider the sum to be long long inorder to clear the testcase consisting of long long int values//

            sum += a[j];
            sum += a[k];

          if(sum == 0){

            vector<int> temp = { a[i], a[j], a[k] };            // store the elements in the vector //
            v.push_back(temp);                                       // Add them to to the set of vector //
            j++;
            k--;

            while(j<k && a[j-1] == a[j]) j++;                    // this is to avoid adding of duplicates in to the array both the loops , move the pointers to a new element //
            while(j<k && a[k+1] == a[k]) k--;
          }

          else
          if(sum > 0)                                            // If the sum is greater , as the array is sorted , inorder to get the sum == 0 move the k pointer //
            k--;

          else
          if(sum < 0)                                                // If the sum is lesser , as the array is sorted , inorder to get the sum == 0 move the k pointer to the left //
            j++;

        }

    }

      


    return v;
    }
};
