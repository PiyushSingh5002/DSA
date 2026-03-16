class Solution {
public:
    void backtrack(int n, string &curr, vector<string> &res) {
        if (curr.size() == n) {
            res.push_back(curr);
            return;
        }

        for (char c : {'a', 'b', 'c'}) {
            if (!curr.empty() && curr.back() == c) continue;
            curr.push_back(c);
            backtrack(n, curr, res);
            curr.pop_back();
        }
    }

    string getHappyString(int n, int k) {
        vector<string> res;
        string curr = "";
        
        backtrack(n, curr, res);

        if (k > res.size()) return "";
        return res[k - 1];
    }
};