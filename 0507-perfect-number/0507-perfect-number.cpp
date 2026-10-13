class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1; i<num; i++){
            int rem = num % i;
            if(rem==0){
                sum+=i;
            }
        }
        return sum==num;
    }
};