#include<stdio.h>

int main()
{
    int size; ///input size.
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        int val;        ///Input array size.
        scanf("%d",&val);
        int array[val];
        for(int j=0;j<val;j++)
        {
            scanf("%d",&array[j]);  ///Input array value.
        }

            for(int k=0,j=val-1;k<j;j--,k++)
        {
            printf("%d %d ",array[k],array[j]); /// Print array value.
        }
        if(val%2 !=0)
        {
            int m=val/2;
            printf("%d\n",array[m]);  ///print array value.
        }
        else{
        printf("\n");
        }
    }
    return 0;
}
