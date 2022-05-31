class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        //int low = salary[0],high =salary[salary.size()-1];
        int size = salary.size();
        long double  sum = 0;
        for(int i = 1 ; i <size-1;i++)
            sum += salary[i];
        return (sum/(size-2));
        
    }
};