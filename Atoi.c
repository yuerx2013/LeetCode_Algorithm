#include <stdio.h>
/*将输入的数字字符串转化为整数*/
int myAtoi(char* str) {
    
  long s = 0;/*需要long*/
	int flag = 1;
  
  /*判断有没有空格*/
	while(*str == ' ')
	{
		str++;
	}
  
  /*判断该字符串是否带有正号或者负号*/
	if((*str == '-') || (*str == '+'))
	{
		flag = (*str == '-')?-1:1;
		str++;
	}
	
	while((*str >= '0')&&(*str <= '9'))
	{
		s = s*10+*str-'0';
		str++;
    /*比较大的范围，最好用赋值变量代替*/
	  if(s*flag <= -2147483648)
		{
			return -2147483648;
		}
		if(s*flag >= 2147483647)
		{
			return 2147483647;
		}
	}
	return s*flag;   
}

int main()
{
  char *s="2147483648";
  
  printf("s:%d\n",myAtoi(s));
  return 0;
}
