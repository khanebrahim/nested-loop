#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age =19;
    bool has_nid =false;
    bool has_passport =true;
    if (age>=18)
    {
        if(has_nid || has_passport){
            printf("you are eligible");
            }
        else{
        printf("he is not eligible \n");
    }
    }
    else{
        printf("he is not allowed\n");
    }
    

    return 0;

}