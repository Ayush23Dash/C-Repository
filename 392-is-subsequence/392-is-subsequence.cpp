class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0) return true;
        int lowPtr=0,highPtr=0;
        while(highPtr<t.length()){
           
            if(t[highPtr]==s[lowPtr]) {
                lowPtr++;
                if(lowPtr==s.length()) return true;
            }
            highPtr++;
             // cout<<lowPtr<<" ";
        }
        return false;
    }
};