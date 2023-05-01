
// mod 5, vid 5-3
// ascii code table image link:  https://fastbitlab.com/ascii-code/
/*
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
inputCopy
a
outputCopy
A

inputCopy
A
outputCopy
a

*/

#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    // if (a>=97 && a<=122) // 97 eta ascii chart teke paisi
    if (a>='a' && a<='z')
    {
        // choto hater
        int ans=a-32;  
        printf("%c",ans);
        // printf("%d",ans); // capital letter ascii number dekabe
    }
    else
    {
        int ans=a+32;  
        printf("%c",ans);
    }
    return 0;
}