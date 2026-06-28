class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // map<int,int> mp;
        // int n=nums.size();

        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }

        // for(auto it:mp){
        //     if(it.second>=2) return true;
        // }

        // return false;


        //using Hashset it feel more promising

        unordered_set<int> seen;

        for(auto it: nums){
            if(seen.find(it)!=seen.end()) return true;
            seen.insert(it);
        }

        return false;
    }
};