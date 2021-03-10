#include <stdio.h>
#include <stdlib.h>

int main()
{
    int head,leg,chick,rabit;
    printf("Hello world! Please input the number of heads and legs\nAnd I'll tell you the number of chicks and rabits.\n");
    scanf("%d %d",&head,&leg);
    chick=(head*4-leg)/2;
    rabit=head-chick;
    printf("There are %d chicks and %d rabits.\n",chick,rabit);
    return 0;
}
