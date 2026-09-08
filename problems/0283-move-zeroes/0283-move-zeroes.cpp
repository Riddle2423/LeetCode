class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
int j = 0;

while (i < nums.size() && j < nums.size())
{
    
    while (i < nums.size() && nums[i] == 0)
        i++;

   
    while (j < nums.size() && nums[j] != 0)
        j++;

    if (i > j && i < nums.size() && j < nums.size())
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;

        i++;
        j++;
    }
}
    }
};