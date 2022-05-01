class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st,st1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#' && !st.empty())
                st.pop();
            else if(s[i]!='#')
            st.push(s[i]); 
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#' && !st1.empty())
                st1.pop();
            else if(t[i]!='#')
            st1.push(t[i]); 
        }
        string temp,temp1;
        while(!st.empty())
        {
            temp+=st.top();
            st.pop();
        }
        while(!st1.empty())
        {
            temp1+=st1.top();
            st1.pop();
        }
        if(temp==temp1) return true;
        return false;
    }
};