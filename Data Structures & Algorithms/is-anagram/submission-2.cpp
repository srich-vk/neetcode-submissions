using uci = unordered_map<char, int>;

class Solution {
public:
    uci create_hashtable(string s){
        uci hashtable;hashtable.reserve(s.size());
        for(const char& c: s) {
            if (hashtable.count(c)) hashtable[c]++;
            else hashtable[c] = 1;
        }
        return hashtable;
    }

    bool isAnagram(string s, string t){
        uci ref_table = create_hashtable(s), tar_table = create_hashtable(t);
        for(auto& [key, _]: ref_table) if (ref_table[key] != tar_table[key]) return false;
        for(auto& [key, _]: tar_table) if (tar_table[key] != ref_table[key]) return false;
        return true;
    }
};