using vi = vector<int>;

class Solution {
public:
    bool hasDuplicate(vi& nums){
        unordered_map<int, bool> present;
        for (const int& i: nums) {
            if (present.count(i) && present[i] == true) return true;
            else present[i] = true;
        }
        return false;
    }
};