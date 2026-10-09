/*Base 10 representation:
    eg. 34 (in base 10) = 34 = 3x10^(1) + 4x10^(0) {represented as 34}
similarly base 6 representation:
    eg. 34 (in base 6) = Ax6^(1) + Bx6^(0) = A(6) + B = 5(6) + 4 {represented as 54}
        .^. (34)`10 = (54)`6
*/
class Solution {
public:
    int sumBase(int n, int k) {
        int sum =0;
        while(n>0){
            int digit = n % k;
            sum = sum + digit;
            n = n / k;
        }
        return sum;
    }
};