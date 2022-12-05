class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int> answer;
        for(int i = 0; i < m; i++){
            answer.insert(nums1[i]);
        }
        for(int i = 0; i < n; i++){
            answer.insert(nums2[i]);
        }
        multiset<int, greater<int> >::iterator itr;
        int k = 0;
        for (itr = answer.begin(); itr != answer.end(); ++itr) {
            nums1[k] = *itr;
            k++;
        }
    }
};