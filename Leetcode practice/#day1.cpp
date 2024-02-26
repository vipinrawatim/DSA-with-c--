#include<iostream>
#include<vector>
class Solution
{
public:
    vector<int>twoSum(vector<int> &nums, int target)
    {
      
     
           
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {

                if (nums[i] + nums[j + 1] == target)
                {
                    return {i, j+1};
                }
            }
          
        }
        return {};
    }
};

int main () {
    vector <int> arr={2,7,9,6};
    int target =8;
    Solution obj;
   int arr[2]= obj.twoSum(arr,target);
   int i=0;
   while(i<2){
    cout<<arr[i]<<" ";
   }



    return 0;
}


