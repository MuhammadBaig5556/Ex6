#ifndef PRIORITYQUEUE2_H
#define PRIORITYQUEUE2_H

class Node2 {
public:
    int data;         
    int priority;     
    Node2* next;      

    Node2(int data, int priority); 
};

class PriorityQueue2 {
private:
    Node2* front;     

public:
    PriorityQueue2(); 
    ~PriorityQueue2();

    void enqueue(int data, int priority);  
    int dequeue();                         
    void displayQueue() const;            
    bool isEmpty() const;                 
};

#endif 