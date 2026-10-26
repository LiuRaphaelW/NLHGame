#include "Player.hpp"

Player::Player(int id) : PID(id) {}

void Player::newHand(const std::pair<Card, Card>& start) {
    hand = start;
    position = static_cast<Position>((static_cast<int>(position) + 1) % 8);
    equity = 0.0;
}
