#include <stdio.h>
/***************************************************************
 * 函数功能：将输入数的二进制进行取反
 *
 * 分析：第一，将输入的数对其计算出掩码例如5的二进制为101，则掩码为111，掩码的计算是将1进行左移；
 * 第二，因为5的二进制是101，则取反是010，； 
 ***************************************************************/
int findComplement(int num) {
    
    long long i=1;
    long temp=0;
    while(i <= num)
    {
        i = i << 1;
		
    }
    printf("i %d\n",i);
    temp = (~num)&(i-1);
    
    return temp;
}


int main()
{
  int num = 5,temp =0;
  
	temp = findComplement(num);
  
	printf("%d\n",temp); 
  
  return 0;
}
