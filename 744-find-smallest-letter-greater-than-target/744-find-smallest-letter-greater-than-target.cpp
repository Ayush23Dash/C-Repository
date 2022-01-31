class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0,high=letters.size()-1;
        int index=0;
        while(low<high){
            int mid = (low+high)/2;
            if(letters[mid]==target) {
                index=mid;
                // cout<<"1"<<endl;
                break;
            }
            else if(target>letters[mid]){
                low=mid+1;
                index=low;
                // cout<<"2"<<endl;
            }
            else{
                high=mid-1;
                index=high;
                // cout<<"3"<<endl;
            }
        }
        cout<<"Index="<<index<<endl;
        if(index<0) return letters[0];
         else if(target<letters[index]) return letters[index];
        else if(index==letters.size()-1) return letters[0];
        else if(letters[index]==letters[index+1]){
            while(letters[index]==letters[index+1]) index++;
            if(index==letters.size()-1) return letters[0];
        }
        return letters[index+1];
            
    }
};