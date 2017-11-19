#include <stdio.h>
#include <string.h>
/*计算标志位计算是否回到原点*/
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
