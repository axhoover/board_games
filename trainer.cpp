/*
 * I will write a test program to try and optimize the current weights in the AmazonsAI
 * class. This will be to test my very rudamentary AI.
 */


#include <memory>
#include "Amazons.h"
#include "Amazons_AI.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    Amazons g = Amazons();
    Player p1(stdin, stdout);
    Player p2(stdin, stdout);
    g.add_player(p1);
    g.add_player(p2);
    int w = g.play_game();
    printf("Player %i is the winner\n", w);
}