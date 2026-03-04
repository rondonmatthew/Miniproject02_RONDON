#include "../include/Queue.h"
#include <iostream>

using namespace std;

void showMenu() {
    cout << "\n===== Queue Menu =====" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Size" << endl;
    cout << "5. Print Queue" << endl;
    cout << "6. Clear Queue" << endl;
    cout << "7. Exit" << endl;
    cout << "Choose an option: ";
}
int main() {
    Queue q;
    int choice, val;
    cout << "Circular Queue (Capacity = " << CAP << ")" << endl;
    
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> val;
                try{
                    q.enqueue(val);
                    cout << val << "Enqueued successfully." << endl; 
                }
                catch (const overflow_error& e) {
                    cout << "Error: " << e.what() << endl; 
                }
                break;
            case 2:
                try {
                    val = q.dequeue();
                    cout << "Dequeued value: " << val << endl;
                } catch (const underflow_error& e) {
                    cout << "Error: " << e.what() << endl;
                }
                break;
            case 3:
                try {
                    cout << "Front Value: " << q.peek() << endl;
                } catch (const underflow_error& e) {
                    cout << "Error: " << e.what() << endl;
                } 
                break;
            case 4:
                cout << "Queue Size: " << q.size() << endl;
                break;
            case 5:
                q.print();
                break;
            case 6:
                q.clear();
                cout << "Queue cleared." << endl;
                break;
            case 7:
                cout << "Exiting Program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. please try again." << endl;
            }
            } while (choice != 7);
        
    
    return 0;
        }


