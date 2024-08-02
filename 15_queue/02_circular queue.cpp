class MyCircularQueue {
public:
    vector<int> cq;
    int size;
    int rear;
    int front;

    MyCircularQueue(int k) {
        cq.resize(k);

        size = k;
        rear = -1;
        front = -1;
    }

    bool enQueue(int value) {

        if ((rear + 1) % size == front) {
            return false;
        } else {
            if (rear == -1 && front == -1) {
                rear = 0;
                front = 0;
            } else {
                rear = (rear + 1) % size;
            }
            cq[rear] = value;
            return true;
        }
    }

    bool deQueue() {
        if (rear == -1 && front == -1)
            return false;
        else {
            int n;
            n = cq[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % size;
            }
            return true;
        }
    }

    int Front() {
        if (front == -1) {
            return -1;
        }

        return cq[front];
    }

    int Rear() {
        if (rear == -1) {
            return -1;
        }
        return cq[rear];
    }

    

    bool isEmpty() { return (rear == -1 && front == -1); }

    bool isFull() { return ((rear + 1) % size == front); }
};

/*
TC : O(1)
SC : O(k)
 */


 using namespace std;
#include <bits/stdc++.h>

class MyCircularQueue {
public:
    vector<int> cq;
    int size;
    int rear;
    int front;

    MyCircularQueue(int k) {
        cq.resize(k);
        size = k;
        rear = -1;
        front = -1;
    }

    bool enQueue(int value) {
        if ((rear + 1) % size == front) {
            return false;
        } else {
            if (rear == -1 && front == -1) {
                rear = 0;
                front = 0;
            } else {
                rear = (rear + 1) % size;
            }
            cq[rear] = value;
            return true;
        }
    }

    bool deQueue() {
        if (rear == -1 && front == -1)
            return false;
        else {
            int n;
            n = cq[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % size;
            }
            return true;
        }
    }

    int Front() {
        if (front == -1) {
            return -1;
        }
        return cq[front];
    }

    int Rear() {
        if (rear == -1) {
            return -1;
        }
        return cq[rear];
    }

    vector<int> display() {
        if (rear == -1 && front == -1) {
            return {};
        } else {
            vector<int> result;
            int i = front;
            for (; i != rear; i = (i + 1) % size) {
                result.push_back(cq[i]);
            }
            result.push_back(cq[rear]);
            return result;
        }
    }

    bool isEmpty() {
        return (rear == -1 && front == -1);
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }
};

int main() {
    MyCircularQueue q(5);

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    cout << "Is queue full? " << (q.isFull() ? "Yes" : "No") << endl;

    vector<int> elements = q.display();
    cout << "Elements in queue: ";
    for (int elem : elements) {
        cout << elem << " ";
    }
    cout << endl;

    q.deQueue();
    elements = q.display();
    cout << "Elements in queue after dequeue: ";
    for (int elem : elements) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Front element: " << q.Front() << endl;
    cout << "Rear element: " << q.Rear() << endl;

    return 0;
}

Here is the output of the program:


Is queue empty? Yes
Is queue full? Yes
Elements in queue: 1 2 3 4 5 
Elements in queue after dequeue: 2 3 4 5 
Front element: 2
Rear element: 5
