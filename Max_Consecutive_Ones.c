#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    
    int i,flag=0,temp=0;

    for(i = 0;i < numsSize;i++)
    {
        if(nums[i] == 1)
        {
            flag++;
        }
        else
        {
            flag = 0;
        }
        
        if(temp <= flag)
        {
            temp = flag;
        }
    }
    return temp;
}

int main()
{
  int nums[1]={1};
  findMaxConsecutiveOnes(nums,1);
  return 0;
}
