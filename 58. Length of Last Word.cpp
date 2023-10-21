class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int lengthOfWord = 0;
        bool foundLetter = false;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                if (foundLetter)
                    break;

                else
                    continue;
            }

            lengthOfWord++;
            foundLetter = true;
        }
        return lengthOfWord;
    }
};