#include "../include/sender.hpp"
#include "../include/sharedMutex.hpp"

SenderClass::SenderClass(int senderID){
    this->senderID = senderID;
}

void SenderClass::joinToChannel(int channelID){
    SharedChannels* sc = SharedChannels::getSharedChannels();
    this->senderChannel = sc->getChannel(channelID);
}

void SenderClass::write(std::vector<std::string> message){
    this->senderChannel->channelQueue->enqueue(message);
}
