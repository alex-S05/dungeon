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

void printDungeon() {
    for (int i = 0; i < SIZE; i++) {
        cout << '\n';
        // dungeon[i] == {0,0,0,0,0,0,0,0,0}
        for (int j = 0; j < SIZE; j++) {
            // dungeon[i][j] == 0
            cout << dungeon[i][j] << ' ';
        }
    }
    cout << '\n';
    
}


int main() {

    printDungeon();


    return 0;
}