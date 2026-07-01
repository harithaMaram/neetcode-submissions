class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.empty()) return {{}};
        
        map<string,vector<string>> group;
        vector<vector<string>> result;

        for(auto s:strs){
            vector<int> freq(26,0);

            for(char c:s){
                freq[c-'a']++;
            }

            string key="";
            for(int i:freq){
                key+='#'+i;
            }

            group[key].push_back(s);
        }

        for(auto& [k,li]:group){
            result.push_back(li);
        }

        return result;

    }
};
