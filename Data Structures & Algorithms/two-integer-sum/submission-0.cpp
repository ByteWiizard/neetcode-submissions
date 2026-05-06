class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> st;

        for(int i=0; i < nums.size(); i++){

            int rem = target - nums[i];

            if (st.find(rem) != st.end()){
                return {st[rem], i};
            }

            st[nums[i]] = i;
        }

        return {-1, -1};
    }
};
