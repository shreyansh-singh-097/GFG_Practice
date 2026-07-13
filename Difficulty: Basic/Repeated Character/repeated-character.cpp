class Solution {
public:
    char firstRep(string S) {
        int freq[26] = {0};
        // Count frequency
        for (char ch : S) {
            freq[ch - 'a']++;
        }
        // Find first repeating character
        for (char ch : S) {
            if (freq[ch - 'a'] > 1)
                return ch;
        }
        return '#';
    }
};