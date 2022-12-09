#include <stdio.h>

#include<math.h>
#define e.001
#definef(x) x*x*x-4*x+1
viod main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    int i=0;
    printf("enter the values of left and right boundaries");
    scanf("%f %f,&x0,&x1");
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x0=x1)/2;
        f2=f(x2);
        if(fo*f2<0)
        {
            x=x2;
        }
    }
    else if (f0*f2=0)
        printf("root is %f,"&x2);
    else
    {
        x0=x2;
    }
    float y2=x2;
    i++
    printf("iteration number %d",i);
    printf("root is %f,"x2);
    e=abs(y2-x2);
    while(e>0.01);
    return 0;
}

