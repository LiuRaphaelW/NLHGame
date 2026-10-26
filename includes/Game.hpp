#pragma once

#include "Deck.hpp"
#include "Player.hpp"

#include <vector>

constexpr int BIG_BLIND = 2;
constexpr int SML_BLIND = 1;

enum Action {
    FOLD,
    CALL,
    RAISE
};

struct Turn {
    Action action;
    int amount;
};


class Game {
public:
    std::vector<Card> board;
    void deal();
    void preFlopBet(int);
    void otherRound(int);
    int showDown();
private:
    Deck deck_;
    std::vector<Player> players_;
    int pot = 0;
    std::vector<Player> stillPlaying_;
    int SB;
};
