#include "Deck.cpp"


Deck::Deck() {
    //make one of every card
    //finding the best way to iterate through the enums to make the happen or think of another way
    std::srand(std::time(0));
    
}

void Deck::shuffleDeck() {
    //Eventually we will need to change the copy to a move function to not make extra copies for space and time
    for (int i = 0; i < DECK_SIZE; ++i) {
        int switch = (std::rand() % 52);
        Card temp = cards[i];
        cards[i] = cards[switch];
        cards[switch] = temp;
    }
}