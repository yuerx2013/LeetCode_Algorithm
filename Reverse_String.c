#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/***************************************************************
 * 函数功能：将输入的字符串反过来输出 
 *
 * 分析：第一，计算字符串长度，并且malloc,因为未知其存储多大的数据的时候，采用malloc,否则，一般采用数组；
 * 第二，指针地址的字符获取；
 * 第三，加入‘\0’；
 * 第四，将指针移动到最初的位置。
 ***************************************************************/
char* reverseString(char* s) {
  char *buf;
  int len,i;
	
  len = strlen(s)-1;
  if(len <= 0)
    return s;
  buf = (char*)malloc(strlen(s)+1);
  for(i = 0;i <= len;i++)
  {
      *(buf++) = *(s+(len-i)); 
  }
  *buf = '\0';/*字符串结束需要加‘\0’*/
   buf = buf-strlen(s);/*经过++后，指针已经到最后的‘\0’,因此需要回归到最初的位置，减去其长度*/
   return buf;
}

int main()
{
  char *buf="hello";
  char *ret;
  ret = reverseString(buf);
  printf("ret:%s\n",ret);
  return 0;
}
