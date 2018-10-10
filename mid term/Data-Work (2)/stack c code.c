#include <stdio.h>

int stack[101];
int head = -1;

void push(int data)
{
    head++;
    stack[head] = data;
}

int pop()
{
    int data = stack[head];
    head--;
    return data;

}

void printstack()
{
    for(int i=0; i<=head; i++)
    {
        printf("%d ",stack[i]);
    }

}

int main()
{
    push(5);
    push(7);
    push(10);
    push(15);
    push(20);
    printstack();
    int data=pop();
    data=pop();
    data=pop();
    data=pop();
    printf("\nmy last pop data is %d \n",data);
    printstack();
    return 0;
}
