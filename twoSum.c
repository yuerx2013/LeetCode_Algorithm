#include <stdio.h>
/*将一数组的两个数不断的相互交叉相加等于目标数*/
int* twoSum(int* nums, int numsSize, int target) {
    
    int i,j;
    static int ret[2];
    
    for(i = 0;i < numsSize;i ++)
    {
        for(j = i + 1;j < numsSize;j ++)
        {
            if(nums[j] == (target - nums[i]))/*用目标数减去数组的一个数*/
            {
                  ret[0] = i;
                  ret[1] = j;
            }
             
        }
    }
    
    return ret;
}

int main()
{
  int *ret;
  int nums[4]={3,2,4,6};
 
  ret = twoSum(nums,4,9);
 
  printf("ret:%d %d\n",ret[0],ret[1]);
 
  return 0;
}

