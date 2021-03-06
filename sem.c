#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

struct stack {
  float elem[MAX];
  int top;
};

int stack[MAX];
int top = -1;


void push(int n){
    if (top + 1 < MAX) {
        stack[++top] = n;
    } else {
        printf("full\n");
    }
}

int pop(void){
    if (top != -1) {
        return stack[top--];
    } else {
        printf("vacant\n");
        return 0;
    }
}

void print(void){
    for(int i=top; i>=0; i--){
        printf("N%d - %d\n", top-i+1, stack[i]);
    }
}

int main(void){
    while(1){
        int N=0;
        printf("Denis Khodzhich IU4-32B\n");
        printf("0 push\n");
        printf("1 pop\n");
        printf("2 print\n");
        scanf("%d", &N);
        if(N==0){
            scanf("%d", &N);
            push(N);
        } else if(N==1){
            printf("pop return %d\n", pop());
        } else if(N==2){
            print();
        }
    }
    return 0;
}
