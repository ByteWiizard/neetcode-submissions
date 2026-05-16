class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // pre product = [1, 2, 8, 48]
        // suff product = [48, 48, 24, 6]

        // then res[i] = (pre[i] * suff[i])/ (2*nums[i]);
        int n = nums.size();

        vector<int> pre(n), suff(n), res(n);

        pre[0] = nums[0];
        suff[n-1] = nums[n-1];

        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] * nums[i];
        }

        for(int i=n-2; i>=0; i--){
            suff[i] = suff[i+1] * nums[i];
        }

        for(int i=0;i<n;i++){
            int left = (i == 0) ? 1 : pre[i-1];
            int right = (i == n-1) ? 1 : suff[i+1];
            res[i] = left * right;
        }

        return res;
    }
};
