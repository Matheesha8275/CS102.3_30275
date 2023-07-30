//01).
#include <stdio.h>
int main()
{
    int age;
    printf("HI,HOW OLD ARE YOU?");
    scanf("%d",&age);
    printf("\nWELCOME %d\n",age);
    printf("LET'S BE FRIENDS!");

    return 0;
}


//02).
#include <stdio.h>
int main()
{
    printf("%5d%5d%5d\n",2, 4, 8);
	printf("%5d%5d%5d\n",3, 9, 27);
	printf("%5d%5d%5d\n",4, 16, 64);
	printf("%5d%5d%5d\n",5, 25, 125);

	return 0;

}


//03).
#include <stdio.h>
int main()
{
    float Distance,Time,Avarage;

    printf("Enter Distance:");
    scanf("%f",&Distance);

    printf("Enter Time:");
    scanf("%f",&Time);

    Avarage=Distance/Time;

    printf("Your Avarage Speed:%.2f",Avarage);

    return 0;
}


//04).
#include <stdio.h>
int main()
{
    float C,F;

    printf("Enter the Fahrenheit value:");
    scanf("%f",&F);
    C=(5.00/9.00)*(F-32.00);
    printf("the Fahreheit %.2f value is equal to celsios %.2f\n",C,F);

    return 0;
}







