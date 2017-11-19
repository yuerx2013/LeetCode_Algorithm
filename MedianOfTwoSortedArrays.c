#include <stdio.h>
#include <stdlib.h>
/*两个数组连接成一个数组，然后排序，数组长度为偶数，取中间两个数除以2，为奇数，则取中间的数*/
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    int *temp;
    double ret;
    int i,j,numcount,median;
    
    numcount = nums1Size + nums2Size;
    
    temp = (int *)malloc( numcount*sizeof(int));/*在未知数组大小的情况下，用malloc*/
    
    if((nums1Size > 0)||(nums2Size > 0))/*保证不为空的数组，然后将两数组合并*/
    {
    
        for(i = 0;i < nums1Size;i++)
        {
            temp[i]=nums1[i];
        }
    
        for(j = 0;j < nums2Size;j++)
        {
            temp[i+j] = nums2[j];
        }
    }
     
  for(i = 0;i < numcount;i++)/*排序*/
	{
		for(j = i;j < numcount;j++)
		{
			if(temp[i] > temp[j])
			{
				median = temp[i];
				temp[i] = temp[j];
				temp[j] = median;
			}
		}
	}  
    if( (numcount%2) == 0)
    {
        ret = (temp[numcount/2]+temp[(numcount/2)-1])/2.0;
    }
    else
    {
        ret = temp[numcount/2];
    }
    return ret;
}
int main()
{
  int nums1[1]={100000};
  int nums2[1]={100001};
  double ret;
  ret = findMedianSortedArrays(nums1,1,nums2,1);
  printf("ret:%f\n",ret);
  
  return 0;
}
