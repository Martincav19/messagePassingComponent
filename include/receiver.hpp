#ifndef RECEIVER_CLASS
#define RECEIVER_CLASS

#include <iostream>
#include <string>
#include <vector>
#include "./sharedChannels.hpp"

class ReceiverClass {
public:
    // Constructors
    ReceiverClass(int);

    // Destructor
    ~ReceiverClass();

    // Member functions
    void joinToChannel(int);
    std::vector<std::string> read();

private:
    // Member variables
    int receiverID;
    Channel* receiverChannel;

};

#endif // RECEIVER_CLASS