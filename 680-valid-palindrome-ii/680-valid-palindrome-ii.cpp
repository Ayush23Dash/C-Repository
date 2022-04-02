class Solution {
public:
    bool isPalindrome(string s,int l,int h){
        while(l<=h)
        {
            if(s[l]==s[h]) {
                l++;
                h--;
            }
            else return false;
            
        }
        return true;
    }
    bool validPalindrome(string s) {
         int low=0,high=s.length()-1;
        int mid = (low+high)/2;
        while(low<=high){

            if(s[low]==s[high])
            {
                low++;
                high--;
            }
            else{
                return (isPalindrome(s,low+1,high) || isPalindrome(s,low,high-1));
            }
        }
        return true;
    }
};