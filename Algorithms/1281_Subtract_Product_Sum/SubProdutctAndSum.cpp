class Solution {
public:
    int subtractProductAndSum(int n) {
        
        string s = to_string(n);
        int sun = 0; ord = 1;
        for(auto x : s)
        {
            prd *= x - '0';
            sun += x - '0';
        }
        return prd - sun;
        
    }
};
