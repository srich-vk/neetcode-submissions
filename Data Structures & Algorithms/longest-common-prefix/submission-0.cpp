class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string smallest = strs[0];
        for(const string& s: strs) if (s.size() < smallest.size()) smallest = s;
        int k = smallest.size();
        string prefix;
        while(k > 0){
            prefix = smallest.substr(0, k);
            bool is_valid = true;
            for(const string& s: strs) if (s.substr(0, k) != prefix.substr(0, k)){
                is_valid = false;
                break;
            }
            if (is_valid) return prefix;
            k--;
        }
    }
};