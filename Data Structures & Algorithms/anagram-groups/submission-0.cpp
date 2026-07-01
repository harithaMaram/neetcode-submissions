class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.empty()) return {{}};
        
        map<string,vector<string>> group;
        vector<vector<string>> result;

        for(auto s:strs){
            string sorted_str=s;
            sort(sorted_str.begin(),sorted_str.end());
            group[sorted_str].push_back(s);
        }

        for(auto ele:group){
            result.push_back(ele.second);
        }

        return result;

    }
};
