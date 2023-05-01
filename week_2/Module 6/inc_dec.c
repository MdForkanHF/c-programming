#include<stdio.h>
int main()
{
    int i=10;
    int x=i++; // post increment
    // i nije barar age x er man assign kore felse
    printf("x-%d i-%d \n", x, i); 

    int j=10;
    int y=++j; // pre increment
    // j age nije barbe tarpor man ta y te assign korbe 
    printf("y-%d j-%d \n", y, j);


    return 0;
}