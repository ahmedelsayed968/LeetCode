class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        margeSort(nums,0,nums.size()-1);
        return nums;
    }
    void margeSort(vector<int>&v,int start,int end){
    // base case
    if(start >= end)
        return;
    // divide
    int mid = (end+start)/2;
    margeSort(v,start,mid);//left part
    margeSort(v,mid+1,end);//right part
    // combine
    combine(v,start,mid,end);


}
void combine(vector<int> &v,int start,int mid,int end){
    int size1 = mid-start+1,size2 = end-mid;
    //vector<int> ret;
    vector<int> left(size1),right(size2);

    int i ,j;
    for(i = 0;i < mid-start+1;i++)
        left[i] = v[start+i];

    for(i = 0;i < end-mid;i++)
        right[i] = v[mid+1+i];
    int k = start;
    i = 0,j =0;
    while (i<size1 && j < size2){
        if(left[i] > right[j])
            v[k] = right[j++];
        else if(left[i] < right[j])
            v[k] = left[i++];
        else{
            v[k++] = left[i++];
            v[k] = right[j++];

        }
        k++;
    }

    while(i < size1){
        v[k++] = left[i++];
    }
    while(j < size2){
        v[k++] = right[j++];
    }

}
};