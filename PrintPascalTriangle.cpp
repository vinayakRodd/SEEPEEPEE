class Solution {
public:
    vector<vector<int>> generate(int N) {
        

    int p,q;
    vector<vector<int>> a(N);
    
    
    for(int i=0; i<N; i++){

      if (i > 1) {
        p = 0, q = 1;
      }
        for(int k=0; k<=i; k++){
            
            if(i <= 1 || k==0 || k==i)
                a[i].push_back(1);
                
            else{
                
                a[i].push_back(a[i-1][p]+a[i-1][q]);
                p++;
                q++;
                
            }
        
            
        }            
      
    }
    
    
    

    return a;
    }

};
