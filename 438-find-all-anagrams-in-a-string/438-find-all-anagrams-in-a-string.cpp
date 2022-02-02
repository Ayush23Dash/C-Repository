class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.length()>s.length()) return ans;
        map<char,int>pmap,smap;
        for(char i ='a';i<='z';i++){
            pmap[i]=0;
            smap[i]=0;
        }
        for(int i=0;i<p.length();i++) pmap[p[i]]++;
       
        int windowSize = p.length();
        int low=0,high=0;
        
        //For first window
        while(high<windowSize){
            smap[s[high]]++;
            high++;
        }
        if(smap==pmap) ans.push_back(low);
        
        //For rest windows
        while(high<=s.length()-1){
            smap[s[low]]--;
            low++;
            
            smap[s[high]]++;
            high++;
            if(smap==pmap) ans.push_back(low);
        }
        
        
        return ans;
        }
    };
