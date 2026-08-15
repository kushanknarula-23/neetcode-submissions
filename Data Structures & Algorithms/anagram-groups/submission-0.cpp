class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string c:strs){
            // make a copy of the string 
            string key = c;
            // then sort it as we have take it as the key 
            sort(key.begin(),key.end());
            // then use as the key and iterate through the each subarray to find how many subrarray contain this key 
            mp[key].push_back(c);
        }

        // we have to return the sublist so we will create one

        vector<vector<string>> ans;
        for(auto &it:mp){
            // it.second will return the subarray of the str with the same key 
            ans.push_back(it.second);
        }

        return ans;
    }
};
