#pragma once

#include "Card.hpp"

#include <cstddef>
#include <vector>
#include <random>
#include <algorithm>

constexpr std::size_t DECK_SIZE = 52;

class Deck {
public:
    static constexpr std::size_t DECK_SIZE =
        (CLUBS - SPADES + 1) * (ACE - TWO + 1);

    Deck();

    void shuffleDeck();
    std::size_t size() const { return cards_.size(); }
    Card pop();

    const std::vector<Card>& cards() const { return cards_; }

private:
    std::vector<Card> cards_;
    std::mt19937 randomEngine_;
    int remaining_ = DECK_SIZE;
};
