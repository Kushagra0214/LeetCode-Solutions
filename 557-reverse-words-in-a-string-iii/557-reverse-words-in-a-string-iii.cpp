class Solution {
public:
    string reverseWords(string s) {
        string res;
        int ptr1 =  -1;
        int ptr2 = 0;
        while(ptr2<s.size()){
            if(s[ptr2+1]==' ' || ptr2==s.size()-1){
                if(res.size()!=0){
                    res+=' ';
                }
                string r = s.substr(ptr1 + 1, ptr2-ptr1);
                reverse(r.begin(), r.end());
                res+= r;
                ptr2++;
                ptr1 = ptr2;
            } else {
                ptr2++;
            }
        }
        return res;
    }
};