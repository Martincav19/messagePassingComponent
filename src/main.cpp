#include "../include/sender.hpp"
#include "../include/receiver.hpp"
#include "../include/sharedChannels.hpp"
#include <iostream>
#include <chrono>
#include <vector>

//INITIALIZATION
//sender initialization
SenderClass* sender1 = new SenderClass(1);
SenderClass* sender2 = new SenderClass(2); //potential to use fabric method

//receiver initialization
ReceiverClass* receiver1 = new ReceiverClass(1);
ReceiverClass* receiver2 = new ReceiverClass(2);

int main() {

    //channel initialization
    SharedChannels* sc = SharedChannels::getSharedChannels();
    sc->addChannel(1);
    sc->addChannel(2);

    //LINKING
    //linking senders
    sender1->joinToChannel(1);
    sender2->joinToChannel(2);

    //linking receivers
    receiver1->joinToChannel(1);
    receiver2->joinToChannel(2);

    return 0;
}

