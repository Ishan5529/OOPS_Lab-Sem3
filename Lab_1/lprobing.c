//Wap on linear probing; key = 24, 36, 42, 68, 75, 53
#include <stdio.h>
void main()
{
    int keys[6];
    //{24, 36, 42, 68, 75, 53}
    int htable[10] = {0};
    //taking mod 10 as hashing function
    int i;
    for (i=0; i<6; i++)
        scanf("%d",&keys[i]);
    for (i=0; i < 6; i++)
    {
        int h = keys[i] % 10;
        htable[h] = keys[i];
    }
    for (i=0; i<10; i++)
    {
        if (htable[i])
            printf("%d : %d\n", i, htable[i]);
        else
            printf("%d : N/A\n", i);
    }
}
