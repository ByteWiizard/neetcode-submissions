class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for (string str: strs){
            ans += (to_string(str.length()) + "#" + str);
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while(i < s.size()){
            int found = s.find('#', i);
            int len = stoi(s.substr(i, found - i));
            string str = s.substr(found + 1, len);
            ans.push_back(str);

            i = found + 1 + len;
        }
        return ans;
    }
};