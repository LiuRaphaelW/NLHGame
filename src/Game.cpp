#include "Game.hpp"

void Game::deal() {
    for (Player& player : players_) {
        std::pair<Card, Card> hand{deck_.pop(), deck_.pop()};
        player.newHand(hand);
    }
}
