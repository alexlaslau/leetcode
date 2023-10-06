//First solution
//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};

//Cleaner solution
//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};
