class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.size()) return 0;
        auto it = haystack.find(needle);
        if(it != -1)
            return it;
            
        return -1;
    }
};