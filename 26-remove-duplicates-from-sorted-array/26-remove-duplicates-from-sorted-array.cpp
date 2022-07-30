class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniq_elem;
        for(int num:nums) uniq_elem.insert(num);
        vector<int> res(uniq_elem.begin(),uniq_elem.end());
            nums=res;
        return uniq_elem.size();
    }
};