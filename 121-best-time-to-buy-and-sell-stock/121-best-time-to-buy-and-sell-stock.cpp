class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> res;
        int n = prices.size(),minimum=INT_MAX,counter=0;
        if(n==1)
        {
            return 0;
        }
        else
    {
        for(int i=0;i<n;i++)
        {
            minimum=min(minimum,prices.at(i));
            if(prices.at(i)>minimum)
            {
                res.push_back(prices.at(i)-minimum);
            }else{
                counter++;
            }
        }
            sort(res.begin(),res.end());
            int a = res.size();
            if(counter==prices.size()) return 0;
            else
            return res.at(a-1);
    }
    }
};