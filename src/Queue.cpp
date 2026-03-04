#include "../include/Queue.h"
#include <iostream>

using namespace std;

Queue:: Queue() : frontIdx(0), rearIdx(0), count(0) {}

bool Queue::isEmpty() const {
    return count == 0;
}

bool Queue::isFull() const {
    return count == CAP;
}

int Queue::size() const {
    return count;
}

void Queue::clear() {
    frontIdx = 0;
    rearIdx = 0;
    count = 0;
}

int Queue::peek() const {
    if (isEmpty()){
        throw underflow_error("Queue is Empty - cannot peek");
    }
    return data[frontIdx];
}
void Queue::enqueue(int item) {
    if (isFull()) {
        throw overflow_error("Queue is Full - cannot enqueue");  
    }
    data[rearIdx] = item;
    rearIdx = (rearIdx + 1) % CAP;
    count++;
}
int Queue::dequeue() {
    if(isEmpty()) {
        throw underflow_error("Queue is Empty - Cannot dequeue");
    }
    int val = data[frontIdx];
    frontIdx = (frontIdx + 1) % CAP;
    count--;
    return val;
}
void Queue::print() const {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Front -> ";
    for (int i = 0; i < count; i++) {
        int idx = (frontIdx + i) % CAP;
        cout << data[idx];
        if (i < count - 1) cout << " | ";
    }
    cout << " <- Rear" << endl;
}
