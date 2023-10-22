class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string common = "";
        for (int letter = 0; letter < strs[0].length(); letter++)
        {
            char currentChar = strs[0][letter];
            for (int word = 1; word < strs.size(); word++)
            {
                if (strs[word][letter] != currentChar)
                {
                    return common;
                }
            }
            common += currentChar;
        }
        return common;
    }
};