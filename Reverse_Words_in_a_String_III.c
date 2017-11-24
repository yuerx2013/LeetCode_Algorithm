#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/***************************************************************
 * 函数功能：将单词进行反转
 *
 * 分析：第一，以空格作为判断条件，将数据反转；
 * 第二，边界考虑问题，1.sizeof(char*),要写char*,否则通不过最大的数；2.要在最后的字符串加‘\0’,否则在小的数据会出错；
 * 第三，通过16进制进行分析，得出问题的原因。 
 ***************************************************************/

char* reverseWords(char* s) {
  int num = strlen(s);
  char *str = (char*)malloc(num*sizeof(char*)+1);
  int j =0, k =0, n=0, i=0, m=0;

	printf("s:%s\n",s);
    
	if(num <= 0)
    {
        return "";
    }
	
    for(i = 0;i < num;i++)
    {
        j++;
        if(*(s+i) == ' ')
        {
		    m = m + j;
			//printf("m:%d\n",m);
			n = n + j;
            for(k = 0;k < j;k++)
            {
				*(str++) = s[--n];				
            }
			n = n + j;
			j = 0;
        }
		 
    }
	*str++ = ' ';
	j = num - m;
	m +=j;
	for(k = 0;k < j;k++)
    {
	    *str++ = s[--m];
    }
	*str++ = '\0';

	str=str - num -1;

	for(i = 0; i<num;i++)
	{
		printf("0x%x ",str[i]);
	}
	printf("\n");
	
    return str;
}

int main()
{
	char *s="God Ding";
	char *str;
	
	str = reverseWords(s);
	
	printf("str:%s\n",str);
	
	return 0;
}
