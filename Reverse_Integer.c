#include <stdio.h>
/***************************************************************
 * 函数功能：将输入的整数倒转过来输出
 *
 * 分析：第一，区分正负数；
 * 第二，对得到的数值进行int范围考虑，一般用变量来替代数值大的数进行比较； 
 ***************************************************************/
int reverse(int x) {
  int flag = x;
  int negative = 0;
  long long ret = 0;
  /*输入的数为负数，则设置一个变量为标志位*/ 
  if(flag < 0)
  {
      flag = -flag;
      negative = 1;
  }
  while(flag)
  {
      ret = ret*10 + flag % 10;
      flag = flag / 10;
      /*针对int的范围进行考虑*/
      if((ret <-2147483647 )|| (ret >2147483647))
           return 0;
  } 
  if(negative == 1)
  {
      ret = -ret;
  }
  return (int)ret;
}

int main()
{
  int ret;
  ret = reverse(2147483647);
  printf("ret:%d\n",ret);
  return 0;
}
