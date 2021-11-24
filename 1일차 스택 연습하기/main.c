#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

typedef int ELEMENT;
typedef struct Stack{
    ELEMENT buf[STACK_SIZE];
    int top;
}STACK;

void createStack(STACK *s);
int isFull(STACK *s);
int isEmpty(STACK *s);
void Push(STACK *s, ELEMENT data);
ELEMENT Pop(STACK *s);

int main()
{
    int menu;
    ELEMENT data;
    STACK stack;

    createStack(&stack);
    do{
        printf("1:push,2:pop,0:exit : ");
        scanf("%d",&menu);
        switch(menu){
        case 1:
            printf("Enter the data : ");
            scanf("%d",&data);
            Push(&stack,data);
            break;
        case 2:
            data = Pop(&stack);
            if(data)
                printf("pop data : %d\n",data);
            break;
        case 0:
            break;
        default:
            printf("Incorrect data");
            break;
        }while(menu);
    }
    void crateStack(STACK *s);{
        s->top = -1;
    }
    int isFull(STACK *s){
        return(s->top+1) == STACK_SIZE;
    }
    int isEmpty(STACK *s){
        return s->top == -1;
    }

    void Push(STACK *s, ELEMENT data){
        if(isFull(s)){
            printf("Stack is full\n");
            return;
        }
        s->buf[++(s->top)] = data;
    }
    ELEMENT Pop(STACK *s){
        if(isEmpty(s)){
            printf("Stack is empty\n");
            return 0;
        }
        return s->buf[(s->top)--];
    }
    return 0;
}
