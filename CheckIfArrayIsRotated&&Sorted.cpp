class Solution {
public:
    bool check(vector<int>& a) {
        
        int flag = 0;
        int j;
        
        
        for(int i=1; i<a.size(); i++){

            if(a[i-1] > a[i]){
                

                j = i+1;
                
                if(i == a.size()-1 && a[0] < a[i])
                    flag = 1;

                else{

                    while(j != a.size()){
                        

                            if(a[i] > a[j] || a[0] < a[j] ){
                                flag = 1;
                                break;
                            }

                            i++;
                            j++;
                        
                    }
                }
                
                break;
            }

            
        }

        if(flag == 0)
            return true;
        
        return false;
    }
};
