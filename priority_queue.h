#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

class Node {
public:
    int data;
    Node* next;

    
    Node(int data);
};

class PriorityQueue {
private:
    Node* front; 
public:
    
    PriorityQueue();

   
    ~PriorityQueue();

    
    void enqueue(int data);      
    int dequeue();                
    bool isEmpty() const;         
    int peekFront() const;        
    void displayQueue() const;   
};

#endif