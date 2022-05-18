class Solution {
public:
    int hammingWeight(uint32_t n) {
        // cin>>n;
        int count=0;
        while(n>0)
        {
            // uint32_t f=1;
            if((n&1)>0) count++;
            n=n>>1;
        }
        return count;
    }
};