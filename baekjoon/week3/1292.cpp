#include <stdio.h>

int main ()
{

    int f,l,x,y,total,i;
    int arr[1000000];
    scanf("%d %d",&f,&l);
    i=0;
    for(x=1;x<=1000;x++)
    {
        for(y=1;y<=x;y++)
        {
            arr[i]=x;
            i++;
        }
    }
    
    for(x=f-1;x<l;x++)
    {
        total+=arr[x];
    }
    
    printf("%d \n",total);
    return 0;
}
