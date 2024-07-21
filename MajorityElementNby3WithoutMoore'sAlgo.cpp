class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
    int ele = v[0];
	int count = 0;
	int prevNum;
	vector <int> a;

	sort(v.begin(),v.end());

	for(int i=0; i<v.size(); i++){

		if(ele == v[i])
			count++;

		else{
			ele = v[i];
			count = 1;
		}


		if(count > v.size()/3){
			
			if(a.size() == 0){
				a.push_back(ele);
				prevNum = ele;
			}

			else
			if(prevNum != ele){
				a.push_back(ele);
				prevNum = ele;
			}

		}
	}

	

	return a;
    }
};
