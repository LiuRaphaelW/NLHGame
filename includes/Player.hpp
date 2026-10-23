#include "Card.hpp"
#include "Game.hpp"
#include <pair>

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
class Player {
    Player(int);
    int PID;
    pair<Card, Card> hand;
    Position position;
    PlayStyle playStyle;
    int stack;
}
