#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int first = a/10;
    int second = a%10;
    // printf("%d %d\n",first,second);  
    if(first%second==0 || second%first==0){
        printf("YES");
    }  
    else{
        printf("NO");
    }
    return 0;
}