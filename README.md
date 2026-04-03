# Mini Project 2: Queuing System

## Overview
An array-based circular queue implementation in C++ with modular file structure.

## File Structure
MiniProject4_Queue/
├── include/
│   └── Queue.h        — Class declaration and public API
├── src/
│   ├── Queue.cpp      — Method implementations
│   └── main.cpp       — Interactive terminal menu
├── TESTING.md         — Test cases and results
└── README.md          — This file

## How to Build and Run
From the MiniProject4_Queue/ directory:
g++ -o queue src/main.cpp src/Queue.cpp -I include
./queue

## Example Usage
Circular Queue (capacity = 10)

===== Queue Menu =====
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Clear Queue
7. Exit
Choose an option: 1
Enter value to enqueue: 42
42 enqueued successfully.

Choose an option: 1
Enter value to enqueue: 99
99 enqueued successfully.

Choose an option: 5
Front -> 42 | 99 <- Rear

Choose an option: 2
Dequeued: 42

Choose an option: 3
Front element: 99

Choose an option: 7
Exiting. Goodbye!