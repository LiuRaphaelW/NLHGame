#include "Deck.hpp"
#include <vector>
class Game{
public:
    vector<Card> board;
    void reset();
    void deal();
private:
    Deck deck_();
    vector<Player> players_;
    vector<Player> stillPlaying_;
}