class Solution {
public:
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int size1 = nums1.size(),size2 = nums2.size();
    vector<int> ret;
    map<int,int> mpn1;
    map<int,int> mpn2;
    for(auto it:nums1)
        mpn1[it]++;
    for(auto it:nums2)
        mpn2[it]++;

    ///vector<int> back;
    if(size1 >= size2){
        // search on nums1;
        for(auto it:mpn2)
        {
            int val = it.first;
            int freq = it.second;
            if(mpn1.find(val) != mpn1.end())
            {
                int min_ = min(freq,mpn1[val]);
                for(int i = 0; i < min_ ; i++)
                    ret.push_back(val);
            }
        }
        return ret;
    }
    else{
        for(auto it:mpn1)
        {
            int val = it.first;
            int freq = it.second;
            if(mpn2.find(val) != mpn2.end())
            {
                int min_ = min(freq,mpn2[val]);
                for(int i = 0; i < min_ ; i++)
                    ret.push_back(val);
            }
        }
        return ret;
    }


}


};