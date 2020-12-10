#include"queue.h"

void initQueue(LinkQueue *q)
{
    q->front = (node*)malloc(sizeof(node));
    q->rear = q->front;
}

int Empty(LinkQueue *q)
{
    return q->front == q->rear;
}

void push(LinkQueue *q, dataType x)
{
    struct node *t = (node*)malloc(sizeof(node));
    t->data = x;
    t->next = NULL;
    q->rear->next = t;
    q->rear = t;
}

void pop(LinkQueue *q)
{
    if (Empty(q))
    return 0;
    
    struct node *p = q->front->next;
    q->front->next = p->next;
    free(p);
}

dataType Front(LinkQueue *q)
{
    q->front->next->data;
}

dataType back(LinkQueue *q)
{
    q->rear->data;
}

int size(LinkQueue* q)
{
    struct node *p = q->front->next;
    int k = 0;
    while (p)
    {
	k++;
	p = p->next;
    }
    return k;
}












































































































