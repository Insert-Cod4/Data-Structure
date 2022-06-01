class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0; 
        string s = bitset<32>(n).to_string();        
        sort(s.begin() , s.end());
             
        for(int i = s.size() -1 ; i>= 0;i-- )
        {
            if(s[i] == '0')
                break;           
            count++;
        }
        
        return count;
        
    }
};
