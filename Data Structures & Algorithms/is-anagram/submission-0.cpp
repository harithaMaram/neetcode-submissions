class Solution {
public:
    bool isAnagram(string s, string t) {
        // map<char,int> mp;

        // for(auto a:s){
        //     mp[a]++;
        // }

        // for(auto b:t){
        //     if(mp.find(b)==mp.end()) return false;
        //     mp[b]--;

        // }

        // for(auto m:mp){
        //     if(m.second!=0) return false;
        // }

        // return true;


        //but we can use alphet frequencu counter----sc-o(1)

        if(s.size()!=t.size()) return false;

        int freq[26]={0};
        int n=s.size();

        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(auto i:freq){
            if(i!=0) return false;
        }

        return true;


    }
};
