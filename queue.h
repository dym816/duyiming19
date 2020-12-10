#ifndef QUEUE_H_
#define QUEUE_H_

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int dataType;
typedef struct node
{
    dataType data;
    struct node *next;
}node;

typedef struct queue
{
     node *front;
     node *rear;
     int size;
}LinkQueue;

void initQueue(LinkQueue *q);
int Empty(LinkQueue *q);
void push(LinkQueue *q, dataType x);
void pop(LinkQueue *q);
dataType Front(LinkQueue *q);
dataType back(LinkQueue *q);
int size(LinkQueue* q);



typedef struct Dnode 
{
    dataType data;
    struct Dnode *left;
    struct Dnode *right;
}dq;

typedef struct dequeue
{
    Dnode *front;
    Dnode *rear;
    int size;
}Deque;




Deque* createDeque();
int size(Deque *dq);
int empty(Deque *dq);
dataType front(Deque *dq);
void push_front(Deque *dq, dataType x);
void push_back(Deque *dq, dataType x);
void pop_front(Deque *dq);
void pop_back(Deque *dq);
void clear(Deque *dq);
void print(Deque *dq)




#endif
