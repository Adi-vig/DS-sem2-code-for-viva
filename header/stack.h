#include<stdlib.h>
#include<stdbool.h>


typedef struct s
{
    int tos;
    int size;
    char arr[200];       //doesnt matter if change it to char arr[int]
}stack;


stack* newStack(int siz);
void push( stack* s1,char a);
char pop( stack* s1);
void printStack( stack* s);
bool isEmpty( stack* s);
bool isFull( stack* s);
char top(stack* s);





void push( stack* s1,char a){
    if(isFull(s1)==false){
        // s1->tos++;
    s1->arr[++s1->tos]=a;
    // printf("\npushed: %d",a); 
    }
    else{
        // printf("/nStack is full. Cannot push %d",a);
    }

}

void printStack( stack* s){
    int temp=0;
    printf("\n\nPrint stack:");
    printf("\n\tbottom --> top\n");
    printf("\t[ ");
    while(temp<=s->tos){
        if(s->arr[temp]==(char) 13)printf("\n\t");
        else printf("%c ", s->arr[temp]);
        temp++;
    }
    // printf("]");

    printf("\n\n");
}


char pop( stack* s1){
    if(isEmpty(s1)==false){
    // s1->tos--;
    return s1->arr[s1->tos--];
    }

    else{

        return 0;
    }
}



stack* newStack(int siz){
    stack* ptr= ( stack*)malloc(sizeof( stack));
    ptr->tos=-1;
    ptr->size= siz;
    return ptr;
}


bool isEmpty( stack* s){
    if(s->tos==-1)return true;
    else return false;
}


bool isFull( stack* s){
    if(s->tos==s->size-1)return true;
    else {return false;}
}


char top(stack* s){
    return s->arr[s->tos];
}