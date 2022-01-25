class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int sz = arr.size();
        if(sz<3) return false;
        int id;
        for(int i=1;i<sz;i++)
        {
            if(arr[i]>arr[i-1]) continue;
            else {
                id=i-1;
                break;
            }
        }
        
        if(id==sz-1 || id==0) return false;
        cout<<id;
        for(int i=id;i<sz-1;i++){
            if(arr[i]>arr[i+1]) continue;
            else return false;
        }
        return true;
    }
};