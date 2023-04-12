#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    // printf("%d\n",ch);
    if(ch==122){
        char CH= ch-25;
        printf("%c\n",CH);
    }
    else{
        char CH= ch+1;
        printf("%c\n",CH);
    }
    // printf("%d\n",CH);
    return 0;
}