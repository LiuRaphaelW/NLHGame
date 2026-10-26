#include "Deck.hpp"

#include <cstdlib>
#include <stdexcept>
#include <ctime>

Deck::Deck() {
    cards_.reserve(DECK_SIZE);

    for (int suit = SPADES; suit <= CLUBS; ++suit) {
        for (int value = TWO; value <= ACE; ++value) {
            cards_.push_back({
                static_cast<Suit>(suit),
                static_cast<Value>(value)
            });
        }
    }

    std::srand(std::time(nullptr));
}

void Deck::shuffleDeck() {
    remaining_ = DECK_SIZE;
    for (std::size_t i = 0; i < DECK_SIZE; ++i) {
        const std::size_t swapIndex = std::rand() % DECK_SIZE;
        const Card temp = cards_[i];
        cards_[i] = cards_[swapIndex];
        cards_[swapIndex] = temp;
    }
}

Card Deck::pop() {
    if (remaining_ <= 0) {
        throw std::out_of_range("cannot pop from an empty deck");
    }

    return cards_[--remaining_];
}
