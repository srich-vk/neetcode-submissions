using vi = vector<int>;

class Solution {
public:
    bool hasDuplicate(vi& nums){
        unordered_set<int> present;
        present.reserve(nums.size());
        for (const int& i: nums) if (!present.insert(i).second) return true;
        return false;
    }
};