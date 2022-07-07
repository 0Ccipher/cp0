class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int w = p.length();
        vector<int> hash(26,0);
        for(auto c:p){
           hash[c -'a'] += 1;
        }
        vector<int> th(26,0);
        vector<int> ans;
        if(s.length() < p.length()) return ans;
        int i=0;
        for(i=0 ; i < w-1 ; i++){
            th[s[i] - 'a'] += 1;
        }
        int l=0;
        for( ; i < s.length() ; i++){
            th[s[i] -'a'] +=1;
            if(th == hash) ans.push_back(l);
            th[s[l] - 'a'] -= 1;
            l++;
        }
        return ans;
    }
};
