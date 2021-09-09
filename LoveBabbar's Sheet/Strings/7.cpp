//Leetcode solution for "https://leetcode.com/problems/count-and-say/"

class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string y = countAndSay(n-1);
        char currentChar;
        int count =0;
        string temp;
        for(int i=0;i<y.length();i++)
        {
            if(count ==0)
            {
                currentChar = y[i];
                count++;
            }
            else if(y[i]!=currentChar){
                string t = to_string(count);
                temp+=t;
                temp+=currentChar;
                currentChar = y[i];
                count=1;
            }
            else if(y[i]==currentChar)
            {
                count++;
            }
        }
        
        temp+=to_string(count);
        temp+=currentChar;
        return temp;
        
    }
};