#include <stdio.h>
#include <string.h>
/**/
/***************************************************************
 * 函数功能：移动的方向是否回到原点 
 *
 * 分析：第一，根据指针的地址移位来获取字符；
 * 第二，若获取的字符是等于初始字符，则某变量加一，用来判断是否回到原地； 
 ***************************************************************/
int judgeCircle(char* moves) {
    
    int len = strlen(moves);
    int i=0,u_d=0,l_r=0;
    
    for(i = 0;i < len;i++)
    {
        if(*(moves+i) == 'D')
        {
            u_d++;
        }
        if(*(moves+i) == 'U')
        {
            u_d--;
        }
        if(*(moves+i) == 'L')
        {
            l_r++;
        }
        if(*(moves+i) == 'R')
        {
            l_r--;
        }
    }
    
    if((u_d == 0)&&(l_r == 0))
        return 1;
    else
        return 0;
    
}
int main()
{
	int ret;
	
	ret = judgeCircle("LL");
	printf("ret:%d\n",ret);
	return 0;
}
