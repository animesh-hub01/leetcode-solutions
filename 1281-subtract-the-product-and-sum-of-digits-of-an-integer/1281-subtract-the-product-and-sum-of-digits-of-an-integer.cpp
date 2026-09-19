class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> v;
        int sum=0;
        int product=1;
        while(n>0){
            v.push_back(n%10);
            n=n/10;
        }
        for(int i=0; i<v.size(); i++){
            product*=v[i];
        }
        for(int i=0; i<v.size(); i++){
            sum+=v[i];
        }
        return product-sum;
    }
};