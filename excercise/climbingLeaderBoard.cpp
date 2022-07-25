#include <iostream>

using namespace std;

void climbingLeaderboard(int *ranked, int *player, int rL, int pL) {
    // Store rank positions
    int rankedPosition[rL];

    // Holds position
    int currentPosition = 0;

    // Store player ranks
    for(int i = 0; i < rL; i++) {
        if(i == 0) {
            // Set the first position
            currentPosition++;
        } else if (ranked[i -1] != ranked[i]){
            // If not equals increment current position
            currentPosition++;
        }
        // Set index value at current position
        rankedPosition[i] = currentPosition;
    }

    // Mark position
    int markPosition = 0;

    // Start with the last rank
    int i =  rL - 1;

    while(markPosition < pL) {
        if(player[markPosition] < ranked[i]) {  // Set celling
            cout << rankedPosition[i] + 1 << endl;
            markPosition++; //  Increment positon
            continue;
        }else if(player[markPosition] == ranked[i]) {  // If its equal just take the rank
            cout << rankedPosition[i] << endl;
            markPosition++; //  Increment positon
            continue;
        }

        if(i == 0) { // If is on the first position
            if(player[markPosition] > ranked[i]) { // If has scored more than first
                cout << rankedPosition[i] << endl;
                markPosition++; // Increment positon
            }
        }

        i--; // Decrement i after each iteration

        // Exhausted the player points but still alice is playing
        i = (i < 0) ? 0 : i;
    }
}


int main() {

    string rlen;

    getline(cin, rlen);

    string rarr;

    int  intR = stoi(rlen);

    int * ranked = new int[intR];

    for(int i = 0; i < intR; i++) {
        cin >> rarr;
        ranked[i] = stoi(rarr);
    }

    string plen;

    cin >> plen;

    string parr;

    int intP = stoi(plen) ;

    int *players = new int[intP];

    for(int j = 0; j < intP; j++) {
        cin >> parr;
        players[j] = stoi(parr);
    }

    climbingLeaderboard(ranked, players, intR, intP);

    return 0;
}