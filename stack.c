 #include<stdio.h>
#include<stdlib.h>
#define size 5
int top = -1,i;


































void push(int s[])
{
    if(top == size-1)
    {
        printf("Stack Overflow");
    }
else{
    int x;
    printf("Enter Element to be Inserted : ");
    scanf("%d", &x);
    top = top + 1;
    s[top] = x ;
    }
}
void pop(int s[])
{
    if(top == -1)
    {
        printf("Stack Is Empty.Popping Not Possible");
    }   
else{
printf("Popped Element : %d ", s[top]);
top = top - 1;
}
}
void peek(int s[])
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    printf("The top element of the stack is %d",s[top]);
}
void display(int s[]){
if(top == -1){
printf("Stack is Empty.\n");
}
else{
printf("Current Stack : \n");
for(i = 0;i<=top;i++){
printf("%d\t", s[i]);
}
}
}
int main(){
int choice;
int stack[size];
printf("\nOperations Available \n");
printf("1.Push \n2. Pop \n3.Peek\n4.Display\n 5.Exit\n");
while(1){
printf("\nEnter Choice : ");
scanf("%d", &choice);
switch(choice){
case 1:
push(stack);
break;
case 2:
pop(stack);
case 3:
peek(stack);
break;
case 4:
display(stack);
break;
case 5:
exit(0);
break;
default:
printf("Invalid Choice. \n");
}
}
}

