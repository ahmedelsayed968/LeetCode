class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    map<char,int>mpRan;
    map<char,int>mpMaga;
    for(auto it:ransomNote)
        mpRan[it]++;
    for(auto it:magazine)
        mpMaga[it]++;
    for(auto it:mpRan){
        char key = it.first;
        int val = it.second;
        if(mpMaga.find(key) != mpMaga.end()){
            if(mpMaga[key]< val)
                return 0;
        }
        else
            return 0;
    }
    return 1;

}
};