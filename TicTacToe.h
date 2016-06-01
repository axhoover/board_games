#ifndef __TICTACTOE_H__
#define __TICTACTOE_H__

#include <memory>

#include "Game.h"

class TicTacToe : public Game {
public:
    TicTacToe();
    TicTacToe(const TicTacToe&);
    TicTacToe& operator=(const TicTacToe&);
    ~TicTacToe();
    int add_player(Player&);
    // Returns -1 if there was an error. Returns 0 if a draw
    // Otherwise returns the number player that won.
    int play_game();
    void print_game(FILE* stream);

private:
    class Impl;
    Impl* mImpl;
};

#endif // __TICTACTOE_H__