class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<t.length()-1;i++){
        //     if(t[i]==s[i]) continue;
        //     else return t[i];
        // }
        // return t[t.length()-1];
        
        //Using ASCII Values
        int sSum=0,tSum=0;
        for(int i=0;i<t.length();i++) tSum+=t[i];
        for(int i=0;i<s.length();i++) sSum+=s[i];
        int ans = tSum - sSum;
        return ans;
    }
};