#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * A simple program that find the highest mountain out of a list of mountains.
 *
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{
    vector<int> mountain;

    // game loop
    while (1)
    {
        for (int i = 0; i < 8; i++)
        {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH;
            cin.ignore();

            mountain.push_back(mountainH);
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        int highMountainIndex = max_element(mountain.begin(), mountain.end()) - mountain.begin();
        cout << highMountainIndex << endl; // The index of the mountain to fire on.
        mountain.clear();
    }
}
