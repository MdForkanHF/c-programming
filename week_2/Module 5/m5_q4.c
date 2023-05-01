/*
Q link:  https://docs.google.com/document/d/18XxMIXAdptjGq5a_OphEXNpmaXnP4F-CX_mYOf-np58/edit

Q:  P. First digit ! 
*/

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int digit=x/1000;

    // printf("%d", digit);
    if(digit%2==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
        
    }
    return 0;
}