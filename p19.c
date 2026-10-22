#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n,i;
    int sum;
    int largest,sumallest;
    float average;

    printf("enter number of elements:");
    scanf("%d",&n);

    p=(int *)malloc(n*sizeof(int));

    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    largest=*p;
    smallest=*p;

    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);

        if(*(p+i)>largest)
            largest=*(p+i);

        if(*(p+i)<smallest)
            smallest=*(p+i);
    }
    average=(float)sum/n;

      printf("sum=%d\n",sim);
      printf("average=%.2f\n",average);
      printf("largest=%d\n",largest);
      printf("smallest=%d\n",smallest);
      free(p);

    return 0;
}
