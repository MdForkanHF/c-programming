#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];  // eta must scanf er por nite hobe // ami koto ta n niye kaj korbo sheta bolar por holo etar kaj
    for(int i=0; i<5; i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    printf("%d",sum);
    
    
    return 0;
}