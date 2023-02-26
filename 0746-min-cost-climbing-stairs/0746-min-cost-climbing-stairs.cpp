class Solution {
private:
    vector<int> memoization;
public:
    // Solution():memoization(1001,-1){}
    int minCostClimbingStairs(vector<int>& cost) {
        // initialize the table with the cost.lenght
        memoization.resize(cost.size(),-1);
        // define the D&C method + memoization
        int n = cost.size();
        return min(getCost(cost,0),getCost(cost,1));
    }
    int getCost(vector<int>&cost,int current_stair){
        
        if(current_stair >= cost.size())
            return 0;
        if (current_stair == cost.size()-1){
            // memoization[current_stair] = memoization[current_stair]==-1 ? cost[current_stair]:memoization[current_stair];
            return cost[current_stair];
        }
        if(memoization[current_stair] != -1){
            return memoization[current_stair];
        }

        int choice_cost = min(getCost(cost,current_stair+1),getCost(cost,current_stair+2))+cost[current_stair];
        memoization[current_stair] = choice_cost;
        return memoization[current_stair];

        
        
    }
};