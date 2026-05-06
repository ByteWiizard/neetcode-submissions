class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int> list;
        int left = 0, right = 0;
        int ans = 0;

        while(right < s.length()){

            list[s[right]]++;

            while(list[s[right]] > 1){
                list[s[left]]--;
                left++;
            }

            ans = max(ans, (right - left + 1));

            right++;
        }
        return ans;
    }
};
