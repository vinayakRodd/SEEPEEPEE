class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        
    sort(a.begin(),a.end());
    
    vector<vector<int>> v;

    int k,l;

    for(int i=0; i<a.size(); i++){

        if(i>0 && a[i] == a[i-1])
            continue;

        for(int j=i+1; j<a.size(); j++){

            if(a[j] == a[j-1] && j != i+1)
              continue;

            
            k = j+1;
            l = a.size()-1;

            while(k<l){

                long long sum = a[i];

                sum += a[j];
                sum += a[k];
                sum += a[l];

                if(sum == target){

                  vector<int> temp = {a[i], a[j], a[k], a[l]};
                  v.push_back(temp);
                  
                  
                  k++;
                  l--;

                  while (k < l && a[k] == a[k-1])
                    k++;
                  while (k < l && a[l] == a[l+1] )
                    l--;
                }

                else if (sum > target)
                  l--;

                else if (sum < target)
                  k++;
            }
        }
    }

    return v;
    }
};
