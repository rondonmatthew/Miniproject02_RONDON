# Testing Notes — Circular Queue

## Test 1: Enqueue Until Full
Steps: Enqueued values 1 through 10, then tried to enqueue 11.
Expected: First 10 succeed, 11th gives an error.
Result: PASS — "Queue is full" error on 11th enqueue.

## Test 2: Dequeue Until Empty
Steps: From a full queue, dequeued 10 times, then tried one more.
Expected: First 10 return values in order, 11th gives an error.
Result: PASS — "Queue is empty" error on 11th dequeue.

## Test 3: Wrap-Around (Circular Indexing)
Steps:
1. Enqueued 1, 2, 3, 4, 5
2. Dequeued 3 times (removed 1, 2, 3)
3. Enqueued 6, 7, 8, 9, 10, 11, 12, 13
4. Printed queue
Expected: Queue shows 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 in order.
Result: PASS — Print shows Front -> 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 <- Rear

## Test 4: Mixed Operations
Steps:
1. Enqueue 10, 20, 30
2. Dequeue — got 10
3. Peek — got 20
4. Size — got 2
5. Enqueue 40, 50
6. Size — got 4
7. Clear
8. Size — got 0
9. Dequeue — got error
10. Enqueue 100, Peek — got 100
Result: PASS — All values and errors matched expected behavior.