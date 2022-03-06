class Solution {
public:
    vector<string> cellsInRange(string s) {
        char startChar = s[0], endChar = s[3];
        char startRow = (s[1]), endRow = (s[4]);
        vector<string>ans;
        string temp;
        for(char i=startChar;i<=endChar;i++){
             temp += (i);
            for(char j=startRow;j<=endRow;j++){
                
                temp+=(j);
                ans.push_back(temp);
                temp=i;
            }
            temp="";
        }
        return ans;
    }
};