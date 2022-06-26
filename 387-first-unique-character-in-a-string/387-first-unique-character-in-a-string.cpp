class Solution {
public:
int firstUniqChar(string s) {
    map<char,pair<int,int>> mp;
    int size = s.size();
    for(int i = 0; i <size ;i++){
        mp[s[i]].first++;
        mp[s[i]].second = i;
    }
    set<char> v;
    for(auto it:mp){
        if(it.second.first ==1)
            v.insert(it.first);
    }
    for(int it = 0; it < size ;it++){
        if(v.find(s[it]) != v.end())
            return it;
    }
    return -1;
}
};