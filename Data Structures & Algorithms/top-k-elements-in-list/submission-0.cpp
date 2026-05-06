class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       // store the frequencies of each number then create a array with size (n + 1)
       // now for storing the number in the array we decide the index to be frequency of the number
       // then search for top k elements by traversing from right to left.

        int count = 0;
        int n = nums.size();
        unordered_map<int,int> st;
        vector<vector<int>> bucket(n + 1);
        vector<int> ans;
       

        for(int it:nums){
            st[it]++;
        } 

        for(auto const& [num, freq]: st){
            bucket[freq].push_back(num);
        }

       for(int i = n; i >= 0 && ans.size() < k; --i){
            for(auto it: bucket[i]){
                if(ans.size() == k) break;
                ans.push_back(it);
            }
       }

       return ans;
    }
};
