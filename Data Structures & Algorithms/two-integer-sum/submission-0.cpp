class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        mp[nums[0]]=0;

        int n=nums.size();
        for(int i=1;i<n;i++){
            int compliment=target-nums[i];
            if(mp.find(compliment)!=mp.end()) return {mp[compliment],i};
            mp[nums[i]]=i;
        }

        return {-1,-1};
    }
};
