#include<stdio.h>
int main()
{
    int day_number;
    printf("Inter a day Number:");
    scanf("%d",&day_number);

    switch(day_number){
        case 0:
        printf("Saturday\n");
        break;

        case 1:
        printf("Sunday\n");
        break;
        case 2:
        printf("Monday\n");
        break;
        
        case 3:
        printf("Tuesday\n");
        break;

        case 4:
        printf("Wednesday\n");
        break;

        case 5:
        printf("Thursady\n");
        break;

        case 6:
        printf("Friday\n");
        break;

        default:
        printf("Its a wrong number");
      }

      return 0;
}