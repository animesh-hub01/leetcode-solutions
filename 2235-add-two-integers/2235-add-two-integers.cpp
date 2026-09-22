class Solution {
public:
    int sum(int num1, int num2) {
        if (num2>=0)
            for(int i=0; i<num2; i++){
                num1+=1;
            }
        else
            for(int i=0; i<abs(num2); i++){
                num1-=1;
            }
        
        return num1;
    }
};