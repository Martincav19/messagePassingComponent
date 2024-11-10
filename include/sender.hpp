#ifndef SENDER_CLASS
#define SENDER_CLASS

#include <iostream>
#include <string>
#include <vector>
#include "./sharedChannels.hpp"

class SenderClass {
public:
    // Constructors
    SenderClass(int);

    // Destructor
    ~SenderClass();

    // Member functions
    void joinToChannel(int);
    void write(std::vector<std::string>);

private:
    // Member variables
    int senderID;
    Channel* senderChannel;
};

#endif // SENDER_CLASS