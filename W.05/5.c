#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=0 , y=10 , z=17;
    int *px=&x , *py=&y , *pz=&z;
    printf("%d %d %d %x %x %X %d %d %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("Swapping pointers\n");
    pz=px;
    px=py;
    py=pz;
    printf("%d %d %d %x %x %X %d %d %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    return 0;
}
