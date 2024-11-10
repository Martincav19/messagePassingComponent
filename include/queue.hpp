#ifndef QUEUE_CLASS
#define QUEUE_CLASS

#include <iostream>
#include <vector>
#include <string>

class QueueClass {
public:

    QueueClass(int,int);
    ~QueueClass();

    void enqueue(std::vector<std::string>);
    void dequeue(void);
    std::vector<std::string> getFront();

private:
    // Member variables
    int receiverID;
    std::vector<std::vector<std::string>> queue;
    int slotsNumber;
    int elementsPerSlot;
};

#endif // QUEUE_CLASS