//01).
#include <stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
    max=n1;
    else
    max=n2;

    printf("The highest is %d\n",max);

    return 0;
}



//02).
#include <stdio.h>
int main()
{
    int no1,no2,no3,max,min;

    printf("Enter three numbers:");
    scanf("%d %d %d",&no1,&no2,&no3);

    max = no1;
    if(no2>max)
    max=no2;

    if(no3>max)
    max=no3;

    min = no1;
    if(no2<min)
    min=no2;

    if(no3<min)
    min=no3;

    printf("The largest value is %d\n",max);
    printf("The smallest value is %d\n",min);

    return 0;
}



//03).
#include<stdio.h>
int main()
{
    float bs,inc,ns;
    char empname[50];

    printf("Enter employee name:");
    scanf("%s",&empname);
    printf("Enter basic salary:");
    scanf("%f",&bs);

    if(bs<5000)
    inc = 0.05*bs;
    else if(bs<10000)
    inc = 0.10*bs;
    else
    inc = 0.15*bs;

    ns = bs + inc;

    printf("Employee name: %s\n", empname);
    printf("New Salary: %.2f\n", ns);

    return 0;
}



//04).
#include <stdio.h>
int main()
{
    float diameter,circumference,area,radius,PI;

    printf("Enter the radius:");
    scanf("%f",&radius);

    PI=3.14159;
    diameter=2*radius;
    circumference=2*PI*radius;
    area=PI*(radius*radius);

    printf("Diameter %f\n",diameter);
    printf("Circumference %f\n",circumference);
    printf("Area %f\n",area);

    return 0;
}



//05).
#include <stdio.h>
int main()
{
    int num1,num2;

    printf("Enter the first integer:");
    scanf("%d",&num1);
    printf("Enter the second integer:");
    scanf("%d",&num2);

    if(num1!=0&&num1%num2==0)
    printf("\n%d is a multiple of %d",num1,num2);
    else
    printf("\n%d is not a multiple of %d",num1,num2);

    return 0;
}



//06).
#include <stdio.h>
int main()
{
    printf("Integer equivalent of 'A': %d\n", 'A');
    printf("Integer equivalent of 'B': %d\n", 'B');
    printf("Integer equivalent of 'C': %d\n", 'C');

    printf("Integer equivalent of 'a': %d\n", 'a');
    printf("Integer equivalent of 'b': %d\n", 'b');
    printf("Integer equivalent of 'c': %d\n", 'c');

    printf("Integer equivalent of '0': %d\n", '0');
    printf("Integer equivalent of '1': %d\n", '1');
    printf("Integer equivalent of '2': %d\n", '2');

    printf("Integer equivalent of '$': %d\n", '$');
    printf("Integer equivalent of '*': %d\n", '*');
    printf("Integer equivalent of '+': %d\n", '+');
    printf("Integer equivalent of '/': %d\n", '/');

    printf("Integer equivalent of ' ': %d\n", ' ');

    return 0;
}




//07).
#include<stdio.h>
int main()
{
  char City;
  float bs,bns,ms,grorem,addiallow=0;
  int we;

  printf("Enter basic salary: Rs.");
  scanf("%f",&bs);
  printf("Enter monthly sales: Rs.");
  scanf("%f",&ms);
  printf("Enter work experiance: ");
  scanf("%d",&we);
  printf("Enter City first letter: ");
  scanf("%s",&City);

  if(we>=5)
    bs=bs+(bs*0.1);

  if(City=='C')
    addiallow+=2500;
  else
    addiallow+=0;

  if(ms<25000)
    bns=ms*0.1;
  else if(ms>25000&&ms<50000)
    bns=ms*0.12;
  else if(ms>=50000)
    bns=ms*0.15;

  grorem=bs+addiallow+bns;

  printf("\nThe gross remuneration of a company salesmen: %.2f",grorem);

   return 0;
}

















