#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAXSTACKSIZE 100
char stack[MAXSTACKSIZE];
int top = -1;

int isEmpty();
int push(char* stack);
char pop();

bool isValid(char* s) {
    int s_len = strlen(s);
    int result;
    int fail = 0;
    if(s_len % 2 != 0) return false;

    for (int i = 0; i < s_len; i++){
        if(push(s)) fail = 1;
    }

    if(fail)
        return false;
    else
        return true;
}

int push(char* s) {
    if(top == MAXSTACKSIZE - 1){
        printf("stack is full\n");
    }else if(*s == '(' || *s == '{' || *s == '['){
        stack[++top] = *s;
    }else if(*s == ')'){
        if(top == -1 || stack[top] == '(')
            return 0;
        else
           top--;
    }else if(*s == '}'){
        if(top == -1 || stack[top] == '{')
            return 0;
        else
           top--;
    }else if(*s == '}'){
        if(top == -1 || stack[top] == '[')
            return 0;
        else
           top--;
    }
    s++;
    return 1;
}