//
//  Leetcode3_LongestSubstringWithoutRepeatingCharacters.cpp
//  Leetcode3_LongestSubstringWithoutRepeatingCharacters
//
//  Created by Rui on 12/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#include "Leetcode3_LongestSubstringWithoutRepeatingCharacters.hpp"

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int m[256] = {0};
        int res = 0;
        int left = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(m[s[i]] == 0 || m[s[i]] < left)
            {
                res = max(res, i - left + 1);
            }else
            {
                left = m[s[i]];
            }
            m[s[i]] = i + 1;
            
        }
        return res;
    }
};
