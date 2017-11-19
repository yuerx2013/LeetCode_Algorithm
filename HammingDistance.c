#include <stdio.h>
/*汉明距离，条件很重要*/

int hammingDistance(int x, int y) {
    int i=0,ret=0;
  
    for(i=0;i<32;i++)
    {
        if((x%2) != (y%2))
        {
            ret++;  
        }
        x=x/2;
        y=y/2;
    } 
    return ret;
}

int main()
{
  hammingDistance(1,4);
  return 0;
}
