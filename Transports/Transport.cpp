#include <iostream>
#include <string>

#include "Transport.h"

Transport::Transport::Transport(const std::string& name, double speed)
    : name(name), speed(speed) {}

std::string Transport::Transport::getName() const
{
    return name;
}