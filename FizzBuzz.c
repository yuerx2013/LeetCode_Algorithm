/***************************************************************
 * 函数功能：3的倍数用Fizz;5的倍数用Buzz;3的倍数和5的倍数用FizzBuzz
 *
 * 分析：第一，二级指针的用法；
 ***************************************************************/
 #include <stdio.h>
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char buf[10];
    char **ret = (char **)malloc(n*sizeof(char *));
    int i = 0,j = 0;
    
    for(i = 1; i <= n;i++)
    {
        if(i%3 == 0)
        {
            if(i%5 == 0)
            {
                sprintf(buf,"%s","FizzBuzz");
            }
            else
            {
                sprintf(buf,"%s","Fizz");
            }
        }
        else if(i%5 == 0)
        {
           sprintf(buf,"%s","Buzz");
        }
        else
        {
            sprintf(buf,"%d",i);
        }
        ret[j] = malloc(sizeof(buf));
        memcpy(ret[j],buf,strlen(buf)+1);
        memset(buf,0,11);
        j++; 
    }
    return ret;   
}



int main()
{
  int n=15;
  int* returnSize;
  
  fizzBuzz(n,returnSize);
  
  return 0;
}
