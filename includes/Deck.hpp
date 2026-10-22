#pragma once
#include "Card.hpp"
#include <vector>
#include <random>
#include <ctime>
#include <cstdlib>

constexpr DECK_SIZE = 52;



class Deck {
public:
    Deck();
    void shuffleDeck();
private:
    vector<Card> cards;
}