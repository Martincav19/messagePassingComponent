#include "../include/receiver.hpp"
#include "../include/sharedChannels.hpp"
#include "../include/sharedMutex.hpp"

ReceiverClass::ReceiverClass(int receiverID){
    this->receiverID = receiverID;
}

void ReceiverClass::joinToChannel(int channelID){
    SharedChannels* sc = SharedChannels::getSharedChannels();
    this->receiverChannel = sc->getChannel(channelID);
}

std::vector<std::string> ReceiverClass::read(){
    std::vector<std::string> message;
    message = this->receiverChannel->channelQueue->getFront();
    this->receiverChannel->channelQueue->dequeue();
    return message;
}
