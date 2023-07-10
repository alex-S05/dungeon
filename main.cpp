#include <iostream>
using namespace std;

const int SIZE = 9;

int dungeon[SIZE][SIZE] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
};

void printDungeon(char p) {
    for (int i = 0; i < SIZE; i++) {
        cout << '\n';
        // dungeon[i] == {0,0,0,0,0,0,0,0,0}
        for (int j = 0; j < SIZE; j++) {
            // dungeon[i][j] == 0
            if (i == 0  && j == 0) {
                cout << p << ' ';
            } else {
                cout << dungeon[i][j] << ' ';
            }
            
        }
    }
    cout << '\n';
    
}

int main() {
    char player;
    cout << "Enter a charcter to represent the player: ";
    cin >> player;

    printDungeon(player);


    return 0;
}