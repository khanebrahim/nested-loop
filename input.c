#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a value A-");
    scanf("%d" ,& a);
    printf("Enter a value B-");
    scanf("%d" ,& b);
    printf("Enter a value C-");
    scanf("%d" ,& c);

    if (a>b){
        printf("a is greater than b\n");
    }
     else if(b>a){
        
        printf("b is greaterthan a\n ");
        
    }
    else if (c>a){
        printf("c is  greater than a\n");
    }
    
    
    return 0;
}