class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> count;
        int n=nums.size();
        vector<set<int>> freq(n+1);

        //we need to get frequency of each element

        for(auto i:nums){
            count[i]++;
        }

        for(auto [n,c]:count){
            freq[c].insert(n);
        }

        vector<int> res;
        for(int i=n;i>=0;i--){
            for(auto e:freq[i]){
                if(res.size()==k) return res;
                res.push_back(e);
            }
        }

        return res;


    }
};
