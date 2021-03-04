
#ifndef CIRCULAR_QUEUE_CQUEUE_H
#define CIRCULAR_QUEUE_CQUEUE_H

class QueueElement{
public:
    int element;
};
class CQueue {
    int Front, Rear, Size;
    QueueElement *q;
public:
    explicit CQueue(int size);
    int Full();
    int Empty();
    void enQueue(QueueElement x);
    QueueElement deQueue();
};


#endif //CIRCULAR_QUEUE_CQUEUE_H
