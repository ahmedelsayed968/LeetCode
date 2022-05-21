class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool > ret;
        int max = -1;
        for(auto it:candies){
            if(it > max){
                max = it;
            }
        }
        int size = candies.size();
        for(int i = 0 ; i < size ; i++){
            if(candies[i]+extraCandies >= max)
                ret.push_back(true);
            else
                ret.push_back(false);

        }
        return ret;
        
    }
};