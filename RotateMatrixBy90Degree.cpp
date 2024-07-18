#include<vector>

void rotateMatrix(vector<vector<int>> &a){
	
	int n = a.size();
	int temp;

	for(int i=0; i<n; i++){

		for(int j=i+1; j<n; j++){

			
			
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
				
			}
		}

		for(int i=0; i<n; i++){

		for(int j=0; j<n/2; j++){

		
			
				temp = a[i][j];
				a[i][j] = a[i][n-1-j];
				a[i][n-1-j] = temp;
			
				
			}
		}
}


