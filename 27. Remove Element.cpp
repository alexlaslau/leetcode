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
            //We check if item at [i] is not equal to val.
            //If it is, we move it closer to the end of the array with the j++ index.
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
        //This makes it cleaner. The Remove function actually just sends all the
        //"val" items from the array at the end of the array and returns the index of the
        //first "val" item in that array. So, we use then the erase function to
        //delete all the "val" items. And we return k (which is the size of nums after
        //the deletion).
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};
