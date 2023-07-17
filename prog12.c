#include<stdio.h>
void main()
{
    int n,rev=0,remainder,orginal;
    orginal=n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
            remainder=n%10;
            rev=rev*10+remainder;
            n=n/10;
    }
    if(rev==orginal)
    printf("It is palindrome",orginal);
    else
    printf("It is not a palindrome");


}
