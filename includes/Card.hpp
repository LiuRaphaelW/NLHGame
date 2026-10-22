#pragma once

enum Suit {
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS
};
enum Value {
    TWO
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
    ACE,
};

struct Card {
    Suit suit;
    Value value;
};