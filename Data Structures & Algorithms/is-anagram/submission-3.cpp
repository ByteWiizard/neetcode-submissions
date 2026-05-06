class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char,int> list1 , list2;

        for(auto c:s){
            list1[c]++;
        }
        for(auto c:t){
            list2[c]++;
        }

        for(auto it:list1){

            // cout<<list2[it.first]<<"->"<<it.second<<endl;
            if(list2[it.first] != it.second) return false;
        }

        for(auto it:list2){

            // cout<<list2[it.first]<<"->"<<it.second<<endl;
            if(list1[it.first] != it.second) return false;
        }

        return true;
    }
};
