class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> Union;
        int i =0;
        int j =0;
        int n = nums1.size();
        int m = nums2.size();
        while(i <n && j <m){
            if(nums1[i] < nums2[j]){
                if(Union.empty() || Union.back() != nums1[i]) Union.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                if(Union.empty() || Union.back() != nums2[j]) Union.push_back(nums2[j]);
                j++;
            }
            else{
                if(Union.empty() || Union.back() != nums1[i]) Union.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        while(i <n){
            if(Union.empty() || Union.back() != nums1[i]) Union.push_back(nums1[i]);
            i++;
        }
        while(j <m){
            if(Union.empty() || Union.back() != nums2[j]) Union.push_back(nums2[j]);
            j++;
        }
        return Union;
    }
};
