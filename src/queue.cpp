#include "../include/queue.hpp"

QueueClass::QueueClass(int slotsNumber,int elementsPerSlot){
    this->slotsNumber = slotsNumber;
    this->elementsPerSlot = elementsPerSlot;
}

void QueueClass::enqueue(std::vector<std::string> slot){
    if(slot.size() > this->elementsPerSlot){
        //Do nothig for the moment, in the future print error
    }
    else if(this->queue.size() >= this->slotsNumber){
        //Do nothing for the momoent, in the future print error
    }
    else{
        this->queue.push_back(slot);
    }
}

void QueueClass::dequeue(){
    if(this->queue.empty()){
        //Do nothing for the moment, in the future print error
    }
    else{
        this->queue.erase(this->queue.begin());
    }
}

std::vector<std::string> QueueClass::getFront(){
    if(this->queue.empty()){
        //Do nothing for the moment, in the future print error
    }
    else{
        return this->queue.front();
    }
}