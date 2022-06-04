class Solution {
public:
   vector<int> twoSum(vector<int>& numbers, int target) {
        // x+y = N --> let's search for x = N-y i the array
        int sz = numbers.size();
        for(int it= 0 ; it < sz ; it++){
            int y = target -numbers[it];
            int indx = bs(numbers,y,it);
            if(indx != -1 && indx != it){
                return {it+1,indx+1};
            }
            
            
        }
        return {};
        
    }
    int bs(vector<int> &v,int target,int indx){
        int low = 0 , high = v.size()-1;
        while(low <high){
            int mid = (low+high)/2;
            if(v[mid]==target){
                 if(mid != indx) return mid;
                 else
                     low = mid+1;
            }
            else if(v[mid] > target) high = mid-1;
            else
                low = mid+1;
        }
        return (v[low]==target)?low:-1;
    }
};