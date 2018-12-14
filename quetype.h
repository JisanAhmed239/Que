#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include<string>
const int DEFAULT_MAX_SIZE = 501;
class FullQueue {
public:
 std::string Error() { return "The Queue is full."; }
};
class EmptyQueue {
public:
 std::string Error() { return "The Queue is empty."; }
};
template<class ItemType>
class QueType{
public:
 QueType();
 QueType(int size);
 ~QueType();
void MakeEmpty();
bool IsEmpty();
bool IsFull();
int CurrentSize();
void Enqueue(ItemType newItem);
void Dequeue(ItemType& Item);
void Front(ItemType& Item);
void print();
private:
int front = -1;
int rear = -1;
int* items = NULL;
int capacity = DEFAULT_MAX_SIZE;
int currentSize = 0;
};


#endif // QUETYPE_H_INCLUDED
