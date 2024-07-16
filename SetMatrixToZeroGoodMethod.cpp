class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        
	int x,y;
	for(int i=0; i<a.size(); i++){

		for(int j=0; j<a[i].size(); j++){

			if(a[i][j] == 0)
				a[i][j] = -1205;
		}
	}



	for(int i=0; i<a.size(); i++){

		for(int j=0; j<a[i].size(); j++){

			
			if(a[i][j] == -1205){

				x = i; 
				y = j;
				j=0;
				i=x;
				while(j < a[i].size()){

					if(a[i][j] != -1205){
						a[i][j] = 0;
						
					}
					j++;
				}

				j=y;
				i=0;
				while(i<a.size()){

					if(a[i][j] != -1205){
						a[i][j] = 0;
					

					}
					i++;

				}

				
				i = x;
				j = y;
				
			}

			
		}
	}
 
		for(int i=0; i<a.size(); i++){

		for(int j=0; j<a[i].size(); j++){

			if(a[i][j] == -1205)
				a[i][j] = 0;
		}
	}
	
	
	
	

    }
};
