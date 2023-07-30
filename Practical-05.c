//01).
#include<stdio.h>
int main()
{
   int x=0;
   while(x<=100)
   {
       printf("%d ",x);
       x++;
   }
}

#include<stdio.h>
int main()
{
    int x=0;
    do
    {
        printf("%d ",x);
        x++;
    }while(x<=100);
}

#include<stdio.h>
int main()
{
    int x=0;
    for(x=0;x<=100;x++)
    {
        printf("%d ",x);
    }
}



//02).
#include<stdio.h>
int main()
{
    int marks[10],total,x=1;
    float avarage;

    printf("Enter 10 Marks:\n");

    for(x=1;x<=10;x++)
    {
        printf("subject %d: ",x);
        scanf("%d",&marks[10]);
        total+=marks[10];
    }

    avarage=total/10.0;

    printf("\nTotal Marks: %d\n",total);
    printf("Avarage Marks: %.2f\n",avarage);

    if(avarage<50)
        printf("\nFail!\n");
    else
        printf("\nPass!\n");
}



//03).
#include<stdio.h>
int main()
{
    int num,factorial=1,x;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num<0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        for(x=num;x>=1;x--)
        {
           factorial*=x;
        }
        printf("Factorial of %d is %d\n",num,factorial);
}



//04).
#include<stdio.h>
int main()
{
   int num,sum,x,digit;

   printf("Enter a number: ");
   scanf("%d",&num);

   x=num;
   while(x!=0)
   {
       digit=x%10;
       sum+=digit;
       x/=10;
   }
   printf("Sum of digits of %d is %d\n",num,sum);
}




//05).
#include<stdio.h>
int main()
{
    int num,x,digit,revenum=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    x=num;
    do
    {
        digit=x%10;
        revenum=revenum*10+digit;
        x/=10;
    }while(x!=0);

    printf("Reversed number: %d\n",revenum);
}



//06).
#include<stdio.h>
int main()
{
    int exponent,base,result=1;

    printf("Enter the base number: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);

    while(exponent!=0)
    {
        result*=base;
        --exponent;
    }

    printf("The result is: %2d\n",result);
}



//07).
#include <stdio.h>
int main()
{
    int first=0,second=1,next,x,n=10;

    printf("The Fibonacci Sequence:\n");
    printf("%d\n",first);

    for(x=1;x<n;x++)
    {
        printf("%d:\n",second);

        next=first+second;
        first=second;
        second=next;
    }
}



//08).
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    } else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}



//09).
#include<stdio.h>
int main()
{
       char letter;
    printf("ASCII values for letters A to Z:\n");
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        printf("%c: %d\n", letter, letter);
    }

}



//10).
#include<stdio.h>
int main()
{
    int x,y;

    for(x=1;x<=5;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("*");
        }
        printf("\n");
    }

}




//11).
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf ("Enter a positive integer: ");
    scanf ("%d",&n);


   if (n==0||n==1)
      flag = 1;

  for (i=2;i<=n/2;++i)
  {
    if (n%i==0)
    {
      flag = 1;
      break;
    }
  }
  if (flag==0)
    printf ("%d is a prime number.", n);
  else
    printf ("%d is not a prime number.", n);

}



//12).
#include <stdio.h>
int main()
 {
    int num,x;

    printf("Enter an integer: ");
    scanf("%d",&num);

    printf("Factors of %d are: ", num);
    for (x=1;x<=num;x++)
    {
        if (num%x==0)
        {
            printf("%d ",x);
        }
    }
    printf("\n");

    return 0;
}




//13).
#include <stdio.h>
int main()
{
    int num,sum=0;

    printf("Enter numbers to add (enter -1 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == -1)
        {
            break;
        }

        sum += num;
    }

    printf("Sum of all numbers: %d\n", sum);

    return 0;
}



//14).
#include <stdio.h>

int main() {
    int array[10],x;

    printf("Enter 10 integers:\n");

    for(x=0;x<10;x++)
    {
        printf("Enter element %d: ",x+1);
        scanf("%d", &array[x]);
    }

    printf("\nEntered array elements:\n");

    for(x=0;x<10;x++)
    {
        printf("%d ",array[x]);
    }
    printf("\n");

    return 0;
}



//15).
#include <stdio.h>

int main() {
    int array[10],x;
    int evenCount = 0;

    printf("Enter 10 integers:\n");

    for(x=0;x<10;x++)
    {
        printf("Enter element %d: ",x+1);
        scanf("%d",&array[x]);
    }

    for(x=0;x<10;x++)
    {
        if (array[x]%2==0)
        {
            evenCount++;
        }
    }

    printf("\nEntered array elements:\n");


    for (x=0;x<10;x++)
    {
        printf("%d ",array[x]);
    }
    printf("\n");

    printf("Count of even numbers: %d\n", evenCount);

    return 0;
}











//part B

//01).
#include<stdio.h>
int main()
{
        int num,p=0,n=0,z=0,x;

    printf ("Enter 10 numbers:\n");

    for(x=1;x<=10;x++)
    {
        printf ("Number %d: ", x);
        scanf ("%d", &num);
        if (num > 0)
        {
            p++;
        } else if (num < 0)
        {
            n++;
        } else
        {
            z++;
        }
    }
    printf ("Positive numbers: %d\n", p);

    printf ("Negative numbers: %d\n", n);

    printf ("Zero numbers: %d\n", z);


}


//02).
#include<stdio.h>
int main()
{
    int marks, max,min,total,x;
    float avg;

    for (x= 0;x<10;x++)
        {
        printf (" enter marks: ");
        scanf ("%d",&marks);

        if (marks > max)
        {
            max = marks;
        }

        if (marks < min)
        {
            min = marks;
        }
        total = total + marks;
    }
    avg = total / 10;
    printf (" %.2f is avarage of your marks \n", avg);
    printf ("Maximum mark is %d \n", max);
    printf ("Minimum mark is %d \n", min);
    printf ("total mark is %d \n", total);
}


//03).
#include<stdio.h>
int main()
{
        int value,count=0,avg,total=0,x;

    for (x=0;x<10;x++)
    {
        printf ("enter value: ");
        scanf ("%d",&value);

        total += value;

        if (value>200)
        {
            count++;
        }
    }

    avg=total/10;
    printf ("avarage value of an item: %d \n", avg);
    printf ("Number of an items with greater than 200: %d \n", count);

}



//04).
#include <stdio.h>
int main() {
    int employeeNo, count = 0;
    float basicSalary;

    printf("Enter the Employee no and Basic Salary (or -999 to exit):\n");
    scanf("%d", &employeeNo);

    while (employeeNo != -999) {
        scanf("%f", &basicSalary);

        if (basicSalary >= 5000) {
            count++;
        }

        printf("Enter the Employee no and Basic Salary (or -999 to exit):\n");
        scanf("%d", &employeeNo);
    }

    printf("Number of Employees with Basic Salary >= 5000: %d\n", count);

}



//05).
#include<stdio.h>
int main()
{
    int Enumber,hoursworked,overtimepayment,overtimeexeeding4000count=0,totalemployees=0;

    int normalrate=150,overtimerate=200,maxregularhours=40,overtimethreshold=4000;

    printf("Enter employee number (-999 to the end): ");
    scanf("%d", &Enumber);

    while (Enumber != -999)
        {
        printf("Enter the hours worked by employee: ");
        scanf("%d", &hoursworked);

        if (hoursworked <= maxregularhours)
            {
            overtimepayment = 0;
            }
        else{
            int overtimehours = hoursworked - maxregularhours;
            overtimepayment = (overtimehours * overtimerate) + (maxregularhours * normalrate);
            }

        printf("Employee number : %d\n", Enumber);
        printf("Overtime Payment : Rs. %d\n", overtimepayment);

        if (overtimepayment > overtimethreshold)
            {
            overtimeexeeding4000count++;
            }

            totalemployees++;

        printf("\n Enter employee number (-999 to the end): ");
        scanf("%d", &Enumber);
        }

    if (totalemployees > 0)
        {
        double percentageexceeding4000 = overtimeexeeding4000count / totalemployees * 100;
        printf("\n Percentage of employees whose Overtime Payment exceeds Rs. 4000/-: %f%%\n", percentageexceeding4000);
        }

}




