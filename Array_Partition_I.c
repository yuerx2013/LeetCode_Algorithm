#include <stdio.h>

/***************************************************************
 * 函数功能：将输入的数组，按照最小的数组成两数的数组，寻找出最小的数，然后进行相加，得出最大的数 
 *
 * 分析：第一，利用快速排序算法将数组从小到大排序好（此时采用冒泡排序时间复杂度高）；
 * 第二，取其两两组成的数的最小值，然后进行相加； 
 ***************************************************************/
 
void swap(int *a, int *b)    
{  
    int temp;  
  
    temp = *a;  
    *a = *b;  
    *b = temp;  
  
    return ;  
}

void quicksort(int array[], int maxlen, int begin, int end)  
{  
    int i, j;  
  
    if(begin < end)  
    {  
        i = begin + 1;  
        j = end;        
            
        while(i < j)  
        {  
            if(array[i] > array[begin])    
            {  
                swap(&array[i], &array[j]);  
                j--;  
            }  
            else  
            {  
                i++;    
            }  
        }  
  
        if(array[i] >= array[begin])  
        {  
            i--;  
        }  
  
        swap(&array[begin], &array[i]);  
          
        quicksort(array, maxlen, begin, i);  
        quicksort(array, maxlen, j, end);  
    }  
} 

int arrayPairSum(int* nums, int numsSize) {
    
    int i,n,count=0;
    
    if(numsSize <= 0)
    {
        return 0;
    }

    quicksort(nums, numsSize, 0, numsSize-1);
    
    for(i = 0;i < numsSize/2;i++)
    {
        count = count+nums[n];
        n = n + 2;
    }
    return count;
}

int main()
{
  int *arr={1,4,3,2};
  int ret;
  
  ret = arrayPairSum(arr,4);
  printf("ret:%d\n",ret);
  
  return 0;
}
