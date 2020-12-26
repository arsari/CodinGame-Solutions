#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * goal of this puzzle is to guess the coordinate of a bomb (line and column
 * of a 2 dimensional array). You will have to make a guess at each step of
 * the puzzle and adjust it from given feedbacks. Of course, you have a
 * limited number of guess.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();

    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();

    int x0; // batman start position at x
    int y0; // batman start position at y
    cin >> x0 >> y0; cin.ignore();

    int xMin = 0;
    int yMin = 0;
    int xMax = W - 1;
    int yMax = H - 1;

    // game loop
    while (N != 0) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();

        // standard if...else version
        /*if (bombDir == "U") {
            yMax = y0 - 1;
        } else if (bombDir == "UR") {
            yMax = y0 - 1;
            xMin = x0 + 1;
        } else if (bombDir == "R") {
            xMin = x0 + 1;
        } else if (bombDir == "DR") {
            yMin = y0 + 1;
            xMin = x0 + 1;
        } else if (bombDir == "D") {
            yMin = y0 + 1;
        } else if (bombDir == "DL") {
            yMin = y0 + 1;
            xMax = x0 - 1;
        } else if (bombDir == "L") {
            xMax = x0 - 1;
        } else if (bombDir == "UL") {
            yMax = y0 - 1;
            xMax = x0 - 1;
        }*/

        // refactored using string function find()
        if (bombDir.find("U") != string::npos) {yMax = y0 - 1;}
        if (bombDir.find("D") != string::npos) {yMin = y0 + 1;}
        if (bombDir.find("L") != string::npos) {xMax = x0 - 1;}
        if (bombDir.find("R") != string::npos) {xMin = x0 + 1;}

        x0 = (xMax + xMin) / 2;
        y0 = (yMax + yMin) / 2;

        cout << x0 << ' ' << y0 << endl; // the location of the next window Batman should jump to

        N--;
    }
}
