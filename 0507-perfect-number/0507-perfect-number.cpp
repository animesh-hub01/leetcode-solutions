class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1) return false;
        int sum=1;
        for(int i=2; i<=sqrt(num); i++){
            int rem = num % i;
            if(rem==0){
                sum+=i;
                sum+=num/i;
            }
        }
        return sum==num;
    }
};