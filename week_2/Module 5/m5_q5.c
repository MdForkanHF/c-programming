/*
https://docs.google.com/document/d/18XxMIXAdptjGq5a_OphEXNpmaXnP4F-CX_mYOf-np58/edit

M. Capital or Small or Digit 
*/

#include<stdio.h>
int main()
{
    
    char x;
    scanf("%c",&x);

    if(x>='0' && x<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(x>='a' && x<='z')
        {
            printf("IS SMALL\n");

        }
        else
        {
            printf("IS CAPITAL");
        }
    }

    return 0;
}