class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        stack.reserve(s.length()); 
        
        for (const char c : s) {
            // Push expected closing brackets directly for O(1) matching checks
            if (c == '(') stack.push_back(')');
            else if (c == '{') stack.push_back('}');
            else if (c == '[') stack.push_back(']');
            else {
                if (stack.empty() || stack.back() != c) return false;
                stack.pop_back();
            }
        }
        return stack.empty();
    }
};