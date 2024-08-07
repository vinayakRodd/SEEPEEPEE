
	int floor=-1,ceil=-1;

	pair<int,int> Wall;
	int high = n-1,low = 0;
	
	int count = 0;
	while(low <= high){

		int mid = (low+high)/2;

                if (a[mid] == x) {
                  Wall.first = a[mid];
                  Wall.second = a[mid];
                  return Wall;

                } else if (a[mid] >= x) {

                  if (count == 0) {
                    ceil = a[mid];
					count++;

                  } else {

                        ceil = min(a[mid], ceil);
                        high = mid - 1;
                  }
                } else if (a[mid] <= x) {

                  floor = a[mid];
                  low = mid + 1;
                }
    }

		Wall.first = floor;
		Wall.second = ceil;


        return Wall;
