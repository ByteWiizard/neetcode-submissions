class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> res;
        for (const string& s : strs) {
            // Equivalent to count = [0] * 26
            vector<int> count(26, 0);
            
            for (char c : s) {
                count[c - 'a']++;
            }

            string key = "";
            for (int i : count) {
                key += "#" + to_string(i);
            }

            res[key].push_back(s);
        }

        // Extract the values from the map into the result vector
        vector<vector<string>> result;
        for (auto const& [key, val] : res) {
            result.push_back(val);
        }

        return result;
    }
};
