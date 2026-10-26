#pragma once

#include "Card.hpp"

#include <utility>

enum Position {
    BTN,
    SB,
    BB,
    UTG,
    MP,
    LJ,
    HJ,
    CO
};

enum PlayStyle {
    TAG,
    LAG,
    LAP,
    TAP
};

struct basicStats {
    int openingRange = 25;
    int aggression = 0;
};

class Player {
public:
    explicit Player(int id);
    void newHand(const std::pair<Card, Card>& start);

private:
    PlayStyle playStyle = TAG;
    int PID;
    int stack = 0;
    std::pair<Card, Card> hand{};
    Position position = BTN;
    double equity = 0.0;
};
