using vi = vector<int>;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums){
        vi nums_copy = nums;
        nums_copy.insert(nums_copy.end(), nums.begin(), nums.end());
        return nums_copy;
    }

};