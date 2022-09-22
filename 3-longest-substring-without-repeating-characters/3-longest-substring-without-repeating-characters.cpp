class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        for(int i=0; i<s.size(); i++){
            int curr = 0;
            unordered_map<char, int> u;
            while(i<s.size()){
                if(u[s[i]]==0){
                    u[s[i]] = i+1;
                    curr++;
                    i++;
                } else {
                    res = max(curr, res);
                    i = u[s[i]]-1;
                    break;
                }
            }
            if(curr!=0){
                res = max(curr, res);
            }
        }
        return res;
    }
};