#include "priority_queue2.h"
#include <iostream>

Node2::Node2(int dataVal, int priorityVal) : data(dataVal), priority(priorityVal), next(nullptr) {}

PriorityQueue2::PriorityQueue2() : front(nullptr) {}

PriorityQueue2::~PriorityQueue2() {
    while (front != nullptr) {
        Node2* temp = front;
        front = front->next;
        delete temp;
    }
}

void PriorityQueue2::enqueue(int data, int priority) {
    Node2* newNode = new Node2(data, priority);

   
    if (front == nullptr || newNode->priority < front->priority) {
        newNode->next = front;
        front = newNode;
    } else {
        
        Node2* temp = front;
        while (temp->next != nullptr && temp->next->priority <= newNode->priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void PriorityQueue2::displayQueue() const {
    if (front == nullptr) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }

    Node2* temp = front;
    std::cout << "Queue elements (data, priority): ";
    while (temp != nullptr) {
        std::cout << "(" << temp->data << ", " << temp->priority << ") ";
        temp = temp->next;
    }
    std::cout << std::endl;
}