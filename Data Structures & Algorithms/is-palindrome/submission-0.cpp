class Solution {
public:
    bool isPalindrome(string s) {
        
        // problem: You didn't read and analyse the problem properly, this will miss out cases of non alphanumeric, and small case and upper case scenarios.
        // string str = "";
        // string str_copy = "";
        // stringstream ss(s);
        // string word;

        // while(ss >> word){
        //     str += word;
        // }
        // str_copy += str;

        // reverse(str.begin(), str.end());

        // cout<<str<<" "<<str_copy<<endl;

        // if(str == str_copy) return true;
        // return false;

        int left = 0, right = s.length() - 1;

        while(left < right){

            while(left < right and !isalnum(s[left])){
                left++;
            }

            while(right > left and !isalnum(s[right])){
                right--;
            }

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
