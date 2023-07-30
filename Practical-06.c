//01).
#include <stdio.h>
int main()
{
    int arr[10],i,sum=0,temp,min,max=0;
    float avg;

    for(i=0;i<10;i++)
    {
        printf("Enter value to the element %d: ",i+1);
        scanf("%d",&arr[i]);

        sum+=arr[i];

        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];

        avg=sum/10.0;
    }

    printf("\nThe Minimum value is %d\n",min);
    printf("The Maximum value is %d\n",max);
    printf("The Average is %.2f\n",avg);

    for (i=0;i<5;i++)
    {
        temp=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
    }

    printf("\nValues in reverse order:\n");

    for (i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}




//02).
#include<stdio.h>
int main()
{
   int size,arr1[size],arr2[size],scalarSum=0,vectorSum[size],x;

   printf("Enter the size of the arrays: ");
   scanf("%d",&size);

   for(x=0;x<size;x++)
   {
        printf("Enter values for Array 1: ");
        scanf("%d",&arr1[x]);
   }

   for(x=0;x<size;x++)
   {
        printf("Enter values for Array 2: ");
        scanf("%d",&arr2[x]);
   }

   for(x=0;x<size;x++)
   {
       scalarSum+=arr1[x];
   }

   for(x=0;x<size;x++)
   {
       vectorSum[x]=arr1[x]+arr2[x];
   }

   printf("Scalar Sum: %d\n", scalarSum);

   for(x=0;x<size;x++)
   {
       printf("Vector sum: ");
       printf("%d ",vectorSum[x]);
   }
   printf("\n");

}


