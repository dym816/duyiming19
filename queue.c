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




Deque* createDeque()
{
    Deque *head;
    head = (Deque*)malloc(sizeof(Deque));
    head->left = head->right = head;
    return head;
}

int size(Deque *dq)
{
    node *p = dq->right;
    int k= 0;
    while (p != dq)
    {
	k++;
	p = p->right;
    }
    return k;
}

int empty(Deque *dq)
{
    return dq->right == dq;
}

dataType front(Deque *dq)
{
    if (empty(dq)) exit(1);
    return dq->left->data;
}

void push_front(Deque *dq, dataType x)
{
    node *s = (node*)malloc(sizeof(node));
    s->data = x;
    s->left = dq;
    s->right = dq->right;
    dq->right->left = s;
    dq->right = s;
}

void push_back(Deque *dq, dataType x)
{
    node *s = (node*)malloc(sizeof(node));
    s->data = x;
    s->left = dq->left;
    s->right = dq;
    dq->left->right = s;
    dq->left = s;
}

void pop_front(Deque *dq)
{
   // if (empty(dq)) exit(1);
    node *p = dq->right;
    p->right->left = dq;
    dq->right = p->right;
    free(p);
}

void pop_back(Deque *dq)
{
    //if (empty(dq)) exit(1);
    node *p = dq->left;
    p->left->right = dq;
    dq->left = p->left;
    free(p);
}

void clear(Deque *dq)
{
    node *p;
    node *q;
    p = dq->right;
    while (p !=dq)
    {
	q = p;
	p = p->right;
	free(p);
    }
    dq->left = dq->right = dq;
}

void print(Deque *dq)
{
    node *p = dq->right;
    while (p != dq)
    {
	printf("%d ", p->data);
	p = p->right;
    }
    printf("\n");
}














































































































