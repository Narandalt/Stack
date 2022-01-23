//
// Created by Mark on 20.01.2022.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <string.h>

///Int stack
typedef struct INT_Stack
{
    int data[2000];
    size_t size;
} stack_int;

void push_int(stack_int *stack, int value)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = value;
    stack->size++;
}

int pop_int(stack_int *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;

    return stack->data[stack->size];
}

int peek_int(stack_int *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

///Char stack
typedef struct CHAR_Stack
{
    char **data;
    size_t size;
} stack_char;

void push_char(stack_char *stack, char *str)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = (char*)malloc(sizeof(char) * (strlen(str) + 1));
    strncpy(stack->data[stack->size], str, strlen(str));
    stack->data[stack->size][strlen(str) + 1] = '\0';
    stack->size++;
}

char *pop_char(stack_char *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;
    return stack->data[stack->size];
}

char *peek_char(stack_char *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

///Short stack
typedef struct SHORT_Stack
{
    short data[2000];
    size_t size;
} stack_short;

void push_short(stack_short *stack, short value)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = value;
    stack->size++;
}

short pop_short(stack_short *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;
    return stack->data[stack->size];
}

short peek_short(stack_short *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

///Long stack
typedef struct LONG_Stack
{
    long data[2000];
    size_t size;
} stack_long;

void push_long(stack_long *stack, long value)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = value;
    stack->size++;
}

long pop_long(stack_long *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;
    return stack->data[stack->size];
}

long peek_long(stack_long *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

///Unsigned int stack
typedef struct UNSIGNED_INT_Stack
{
    unsigned int data[2000];
    size_t size;
} stack_unsigned_int;

void push_unsigned_int(stack_unsigned_int *stack, unsigned int value)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = value;
    stack->size++;
}

unsigned int pop_unsigned_int(stack_unsigned_int *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;
    return stack->data[stack->size];
}

unsigned int peek_unsigned_int(stack_unsigned_int *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

///Unsigned long stack
typedef struct UNSIGNED_LONG_Stack
{
    unsigned long data[2000];
    size_t size;
} stack_unsigned_long;

void push_unsigned_long(stack_unsigned_long *stack, unsigned long value)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = value;
    stack->size++;
}

unsigned long pop_unsigned_long(stack_unsigned_long *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;
    return stack->data[stack->size];
}

unsigned long peek_unsigned_long(stack_unsigned_long *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

///Float stack
typedef struct FLOAT_Stack
{
    float data[2000];
    size_t size;
} stack_float;

void push_float(stack_float *stack, float value)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = value;
    stack->size++;
}

float pop_float(stack_float *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;
    return stack->data[stack->size];
}

float peek_float(stack_float *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

///Double stack
typedef struct DOUBLE_Stack
{
    double data[2000];
    size_t size;
} stack_double;

void push_double(stack_double *stack, double value)
{
    if(stack->size >= 2000)
    {
        exit(-1);
    }

    stack->data[stack->size] = value;
    stack->size++;
}

double pop_double(stack_double *stack)
{
    if(stack->size == 0)
    {
        exit(-2);
    }

    stack->size--;
    return stack->data[stack->size];
}

double peek_double(stack_double *stack)
{
    if(stack->size <= 0)
    {
        exit(-2);
    }

    return stack->data[stack->size - 1];
}

#endif //STACK_STACK_H