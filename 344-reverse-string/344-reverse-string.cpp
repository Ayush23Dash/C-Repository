class Solution {
public:
    void recursive(vector<char>&s,int l,int h){
        if(l>=h)return;
        swap(s[l],s[h]);
        recursive(s,l+1,h-1);
    }
    void reverseString(vector<char>& s) {
        int l = 0,h=s.size()-1;
        recursive(s,l,h);
    }
};