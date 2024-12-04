
#include "priority_queue.h"
#include <iostream>

Node::Node(int dataVal) : data(dataVal), next(nullptr) {}

PriorityQueue::PriorityQueue() : front(nullptr) {}

PriorityQueue::~PriorityQueue() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

void PriorityQueue::enqueue(int data) {
    Node* newNode = new Node(data);
    if (front == nullptr || newNode->data < front->data) {
        newNode->next = front;
        front = newNode;
    } else {
        Node* temp = front;
        while (temp->next != nullptr && temp->next->data <= newNode->data) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int PriorityQueue::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return -1;
    }
    Node* temp = front;
    int data = front->data;
    front = front->next;
    delete temp;
    return data;
}
