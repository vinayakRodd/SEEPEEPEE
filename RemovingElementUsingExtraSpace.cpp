class Solution {
public:
    int removeElement(vector<int>& a, int val) {
      
      vector<int>v;

      for(int i=0; i<a.size(); i++){

            if(a[i] != val)
                v.push_back(a[i]);
      }

      for(int i=0; i<v.size(); i++)
            a[i] = v[i];


       return v.size();
    }
};
