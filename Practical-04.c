//01).
#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d/n",&num);

    {
        if(num%2==0)
        printf("%d is even number\n",num);
        else
        printf("%d is odd number\n",num);
    }
}


#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0:printf("%d is even.\n",num);break;
        case 1:printf("%d is odd.\n",num);break;
    }
}




//02).
#include<stdio.h>
int main()
{
    int choice;
    float num1, num2, result;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    printf("\nEnter two numbers: ");
    scanf("%f %f",&num1,&num2);

    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("\nResult: %.2f\n", result);break;
        case 2:
            result = num1 - num2;
            printf("\nResult: %.2f\n", result);break;
        case 3:
            result = num1 * num2;
            printf("\nResult: %.2f\n", result);break;
        case 4:
            result= num1 / num2;
            printf("\nResult: %2f\n", result);break;
        default:printf("\nInvalid your choice.\n");
    }

}





//03).
#include<stdio.h>
int main()
{
   int choice;
   float result,r,pi=3.14;

   printf("1.Calculate the circumference of a circle\n");
   printf("2.Calculate the area of a circle\n");
   printf("3.Calculate the volume of a spare\n");
   printf("\nEnter your choice: ");
   scanf("%d",&choice);

   switch(choice)
   {
       case 1:
           printf("\nEnter the value of radius: ");
           scanf("%f",&r);
           result=2*pi*r;
           printf("\nThe circumference of a circle is %.2f\n",result);break;
       case 2:
           printf("\n�nter the value of radius: ");
           scanf("%f",&r);
           result=pi*(r*r);
           printf("\nThe area of a circle is %.2f\n",result);break;
       case 3:
           printf("\nEnter the value of radius: ");
           scanf("%f",&r);
           result=(4*pi*(r*r*r))/3;
           printf("\nThe volume of a spare is %.2f\n",result);break;
       default:printf("\nInvalid choice!\n");
   }
}



//04).
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':printf("\na is vowel");break;
        case 'e':printf("\ne is vowel");break;
        case 'i':printf("\ni is vowel");break;
        case 'o':printf("\no is vowel");break;
        case 'u':printf("\nu is vowel");break;
        case 'A':printf("\nA is vowel");break;
        case 'E':printf("\nE is vowel");break;
        case 'I':printf("\nI is vowel");break;
        case 'O':printf("\nO is vowel");break;
        case 'U':printf("\nU is vowel");break;

        default:printf("\n%c is not a vowel\n",ch);
    }
}





//05).
#include<stdio.h>
int main()
{
   int m;

   printf("Enter month number: ");
   scanf("%d",&m);

   switch(m)
   {
       case 1:printf("\n31 Days");break;
       case 2:printf("\n28 Days");break;
       case 3:printf("\n31 Days");break;
       case 4:printf("\n30 Days");break;
       case 5:printf("\n31 Days");break;
       case 6:printf("\n30 Days");break;
       case 7:printf("\n31 Days");break;
       case 8:printf("\n31 Days");break;
       case 9:printf("\n30 Days");break;
       case 10:printf("\n31 Days");break;
       case 11:printf("\n30 Days");break;
       case 12:printf("\n31 Days");break;

       default:printf("\nInvalid month number!");
   }

}









