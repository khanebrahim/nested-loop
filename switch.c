#include<stdio.h>
int main()
{
    int day_number;
    printf("Inter a day Number:");
    scanf("%d",&day_number);

    switch(day_number){
        case 0:
        case 6:
        printf("off day\n");
        break;
        
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("workd day\n");
        break;
        default:
        printf("Its a wrong number");
      }

      return 0;
}