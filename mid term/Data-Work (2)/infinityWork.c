#include<stdio.h>
int arr[50],head=0,i;
int insert(int data)
{
    arr[head]=data;
    head++;
}

int printAll()
{
    for(i=0; i<head; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main ()
{
start :
    printf("Please, Enter any Code What do you Want?\n\n");
    printf("If you want to Insert, Press to 1\n");
    printf("If you want to Print All, Press to 2\n");
    printf("If you want to Exit Program, Press to 3\n");
    printf("\n");
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
    {
        printf("How Many value you Given that : ");
        int j,k,ar[20];
        scanf("%d",&k);
        printf("\n");
        for(j=0; j<k; j++)
        {
            scanf("%d",&ar[j]);
            insert(ar[j]);
        }
        printf("\n");
        goto start;
    }
    case 2 :
    {
        printf("\n");
        printAll();
        printf("\n");
        goto start;
    }
    case 3 :
        printf("\n");
        printf("The Program is END Now.");
        printf("\n");
        break;
    }
    return 0;
}
