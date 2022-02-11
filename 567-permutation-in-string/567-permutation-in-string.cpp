class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int lenOfWindow = s1.length();
        map<char,int>s1map,s2map;
        for(int i='a';i<='z';i++){
            s1map[i]=0;
            s2map[i]=0;
        }
        for(int i=0;i<s1.length();i++){
            s1map[s1[i]]++;
        }
        int low=0,high=0;
        while(high<lenOfWindow){
            s2map[s2[high]]++;
            high++;
        }
        high--;
        if(s1map==s2map) return true;
        while(high<s2.length()){
            s2map[s2[low]]--;
            low++;
            high++;
            s2map[s2[high]]++;
            if(s1map==s2map) return true;
            else continue;
        }
        return false;
        
    }
};