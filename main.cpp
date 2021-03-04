#include <iostream>
#include "CQueue.h"
using namespace std;
int main() {
    CQueue cQueue = CQueue(5);
    QueueElement q{};
    q.element = 7;
    cQueue.enQueue(q);
    cout<<cQueue.deQueue().element;
    cout<<cQueue.Empty();
}