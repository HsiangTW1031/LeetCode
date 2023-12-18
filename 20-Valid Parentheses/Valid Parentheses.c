#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAXSTACKSIZE 10000
char stack[MAXSTACKSIZE];

bool isValid(char* s) {
    int s_len = strlen(s);
    char stack[MAXSTACKSIZE];
    int top=-1;

    if(s_len % 2 != 0){
        return false;
    }else{
        for (int i = 0; i < s_len; ++i){
            if(*s == '(' || *s == '[' || *s == '{'){
            stack[++top] = *s;
            }else if((*s == ')' || *s == ']' || *s == '}') && top==-1){
                return false;
            }else if(*s == ')'){
                if(stack[top]!= '('){
                    top=-1;
                    return false;
                }
                else top--;
            }else if(*s == ']'){
                if(stack[top]!= '['){
                    top=-1;
                    return false;
                }
                else top--;
            }else if(*s == '}'){
                if(stack[top]!= '{'){
                    top=-1;
                    return false;
                }
                else top--;
            }
            s++;
        }
    }

    if(top != -1)
        return false;
    else
        return true;
}