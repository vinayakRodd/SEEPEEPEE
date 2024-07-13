#include <bits/stdc++.h>
string read(int n, vector<int> a, int target){
   
   
   int i=0,j=a.size()-1;

   sort(a.begin(),a.end());

   int sum;

   while(i<=j){

       sum = a[i]+a[j];

       if(sum == target)
            return "YES";

       if(sum > target)
            j--;

        else
        if(sum < target)
            i++;

        

   }
   
   return "NO";
}
