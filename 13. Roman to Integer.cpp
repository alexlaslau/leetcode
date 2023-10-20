class Solution
{
public:
    int romanToInt(string s)
    {
        int number = 0;

        std::unordered_map<char, int> romanNumerals = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        if (s.length() == 1) return romanNumerals[s[0]];

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (i == s.length() - 1)
            {
                number += romanNumerals[s[i]];
                continue;
            }

            if (romanNumerals[s[i + 1]] > romanNumerals[s[i]])
            {
                number -= romanNumerals[s[i]];
            }

            else
            {
                number += romanNumerals[s[i]];
            }
        }

        return number;
    }
};