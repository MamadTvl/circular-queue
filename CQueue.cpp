
#include "CQueue.h"
#include <iostream>

using namespace std;

CQueue::CQueue(int size) {
    q = new QueueElement[size];
    Size = size;
    Front = Rear = size - 1;
}

int CQueue::Full() {
    if ((Rear + 1) % Size == (Front % Size))
        return 1;
    return 0;
}

int CQueue::Empty() {
    if (Rear == Front)
        return 1;
    return 0;
}

void CQueue::enQueue(QueueElement x) {
    if (Full() == 1)
        cout << "Queue is full";
    else
        q[(++Rear) % Size] = x;
}

QueueElement CQueue::deQueue() {
    if (Empty() == 1)
        cout << "Empty";
    else
        return q[(++Front) % Size];
}
