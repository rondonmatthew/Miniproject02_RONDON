#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept> 

const int CAP = 10;

class Queue {
private:
    int data[CAP];
    int frontIdx;
    int rearIdx;
    int count;

public:
    Queue();

    void enqueue(int item);
    int dequeue();
    int peek() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
    void clear();
    void print() const;

};


#endif // QUEUE_H
