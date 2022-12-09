#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define e = 0.001
#define f(x) x*x*x-2*x*x+1
#define g(x) 3*x*x-4*x
int main()
{
 int i;
 float x0, x1, f0, f1, g0, g1;
 printf("Enter x0,\n");
 scanf("%f", &x0);

for(i = 0; i <3; i++) {
    f0 = f(x0);
    g0 = g(x0);
    x1 = (x0 - (f(x0)/g(x0)));
    printf("Iteration number = %d\n", i);
    printf("root = %f\n", x1);
    x0 = x1;
 }


return 0;
}
