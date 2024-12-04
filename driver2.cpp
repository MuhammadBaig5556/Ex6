#include <iostream>
#include "priority_queue2.h"
using namespace std;

int main() {
    PriorityQueue2 pq;
    pq.enqueue(30,1);
    pq.enqueue(10,2);
    pq.enqueue(20,3);
    pq.enqueue(5,4);
    pq.enqueue(30,5);
    pq.enqueue(-100,6);
    pq.enqueue(1,7);
    pq.enqueue(0,8);

    pq.displayQueue();

    return 0;
}