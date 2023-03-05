class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mp1,mp2;
        for(auto str:words1){
            mp1[str]++;
        }
        for(auto str:words2){
            mp2[str]++;
        }
        int count = 0;
        for(auto pair:mp1){
            if(pair.second==1 && mp2.find(pair.first) != mp2.end() && mp2[pair.first]==1)
                count++;
        }
        return count;
        
    }
};