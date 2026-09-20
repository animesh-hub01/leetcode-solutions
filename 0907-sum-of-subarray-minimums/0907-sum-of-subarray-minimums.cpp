class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        
        vector<int> left(n), right(n);
        stack<int> stk;
        
        for (int i = 0; i < n; ++i) {
            while (!stk.empty() && arr[stk.top()] >= arr[i]) {
                stk.pop();
            }
            left[i] = stk.empty() ? (i + 1) : (i - stk.top());
            stk.push(i);
        }
        
        while (!stk.empty()) stk.pop();
        
        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && arr[stk.top()] > arr[i]) {
                stk.pop();
            }
            right[i] = stk.empty() ? (n - i) : (stk.top() - i);
            stk.push(i);
        }
        
        long long total_sum = 0;
        for (int i = 0; i < n; ++i) {
            long long contribution = (long long)arr[i] * left[i] * right[i];
            total_sum = (total_sum + contribution) % MOD;
        }
        
        return total_sum;
    }
};