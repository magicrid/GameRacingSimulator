#include <iostream>

#include "Race.h"

Race::Race::Race(double distance) : distance(distance) {}

void Race::Race::registerTransport(Transport::Transport* t) {
    participants.push_back(t);
}

std::vector<std::pair<std::string, double>> Race::Race::startRace() {

    std::vector<std::pair<std::string, double>> results;

    for (auto t : participants)
        results.push_back({ t->getName(), t->calculateTime(distance) });

    std::sort(results.begin(), results.end(),
        [](auto& a, auto& b) { return a.second < b.second; });

    return results;
}