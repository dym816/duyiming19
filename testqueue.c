#include"queue.h"

int main()
{
    LinkQueue queue, *q=&queue;
    initQueue(q);
    push(q, 80);
    push(q, 90);
    pop(q);
    push(q, 70);
    printf("队列的元素个数为: %d\n", size(q));
    printf("队头元素为: %d\n", Front (q));
    printf("队尾元素为: %d\n", back (q));
}


/*
int main()
{
    Deque *dq = createDeque();
    push_back(dq, 80);
    push_front(dq, 90);
    push_back(dq, 70);
    push_front(dq, 60);
    pop_back(dq);
    print(dq);
}
*/











































































































