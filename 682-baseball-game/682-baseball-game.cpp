class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>record;
        int pointer=-1,sum=0;
        for(int i=0;i<ops.size();i++)
        {
             if(ops[i]=="+")
            {   
            record.push_back(record[pointer] + record[pointer-1]);
            pointer++;   
            }
             else if(ops[i]=="C")
            {
                record.erase(record.begin() + pointer);
                 pointer--;
            }
            else if(ops[i]=="D")
            {
                record.push_back(record[pointer]*2);
                pointer++;
            }
            else
            {
                record.push_back(stoi(ops[i]));
                pointer++;
            }
        }
        
        for(int i=0;i<record.size();i++)  sum+=record[i];
        return sum;
    }
};