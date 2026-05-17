class Solution {
public:
    // problem in this is you are not counting parents for each node correctly what if 4 appears before 3 it will break there.

    // void solve(int start, int end, vector<int>& nums,int &ans, map<int,int>& helper){
    //     if(start == end) return;

    //     int current = nums[start];
    //     int res = 1;

    //     if (helper.find(current-1) != helper.end()){
    //         res += helper.at(current-1);
    //     }
    //     helper[current] = res;
    //     ans = max(ans, res);
    //     solve(start +1, end, nums, ans, helper);
    // }
    // int longestConsecutive(vector<int>& nums) {
    //     map<int,int> helper;
    //     int ans = INT_MIN;
    //     int n = nums.size();
    //     solve(0,n,nums,ans,helper);

    //     return ans;
    // }
    int longestConsecutive(vector<int>& nums) {
        
        if (nums.empty()) return 0;
        unordered_set<int> st(nums.begin(), nums.end());

        int streak = 0;

        for(int num: nums){

            if (st.find(num - 1) == st.end()){

                int longestStreak = 1;
                int nextNum = num + 1;

                while(st.find(nextNum) != st.end()){
                    // cout << nextNum << "->" << longestStreak << endl;
                    longestStreak += 1;
                    nextNum += 1;
                    // cout << nextNum << "->" << longestStreak << endl;
                }
                
                streak = max(streak, longestStreak);

            }
        }

        return streak;
    }
};
