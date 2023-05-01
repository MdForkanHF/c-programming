#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];  // eta must scanf er por nite hobe // ami koto ta n niye kaj korbo sheta bolar por holo etar kaj // vid 7-9(4.30min)
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}