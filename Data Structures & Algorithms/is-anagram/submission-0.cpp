class Solution {
public:
    bool isAnagram(string s, string t) {
        // first of all check if the lenght of both the string is equal or not 
        // to check if its anagram or not check first of all if both the string length is 
        // equal or not 

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> mp;
        // iterate the string s and add the value in the hashmap
        for(char c:s){
            mp[c]++;
        }

        // iterate the second string t 
        for(char c:t){
            mp[c]--;
        }

        // no iterate through the key of the map we have created 

        for(auto x:mp){
            if(x.second != 0){
                return false;
            }
        }

        return true;

    }
};
