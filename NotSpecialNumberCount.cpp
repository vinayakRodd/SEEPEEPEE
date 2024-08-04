class Solution {
public:

    bool isPrime(int num){

        if(num == 1)    return false;
        else
        {
            for(int i=2; i<=sqrt(num); i++){

                if(num % i == 0)
                    return false;
            }
            return true;
        }
    }
    int nonSpecialCount(int l, int r) {
        int l1 = sqrt(l),r1 = sqrt(r);
        int NotSpecialNum=0;
        int SpecialNum=0;
        for(int num = l1; num<=r1; num++){

            if(isPrime(num) && num*num>=l && num*num<=r)
                SpecialNum++;
        }

        
        NotSpecialNum = (r-l+1)-SpecialNum;

        return NotSpecialNum;
    }
    
};
