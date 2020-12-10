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





#endif
