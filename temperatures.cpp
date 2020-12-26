#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * This program analyze records of temperatures to find the closest to zero.
 *
 * The program prints the temperature closest to 0 among input data. If two
 * numbers are equally close to zero, positive integer has to be considered
 * closest to zero (for instance, if the temperatures are -5 and 5, then display 5).
 *
 * Your program must read the data from the standard input and write the result on
 * the standard output. Display 0 (zero) if no temperatures are provided. Otherwise,
 * display the temperature closest to 0.
 **/
int main()
{
    vector<int> temp2analyze;
    int result;

    int n; // the number of temperatures to analyse
    cin >> n;
    cin.ignore();

    if (n <= 0 || n > 10000)
    {
        result = 0;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            int t; // a temperature expressed as an integer ranging from -273 to 5526
            cin >> t;
            cin.ignore();
            temp2analyze.push_back(t); // add user entry to vector variable
        }

        result = temp2analyze[0];

        for (int i = 0; i < temp2analyze.size(); i++)
        {
            if ((temp2analyze[i] > 0 && temp2analyze[i] < result) || (temp2analyze[i] < 0 && temp2analyze[i] > result))
            {
                result = temp2analyze[i];
            }
        }

        if (result < 0)
        {
            for (int i = 0; i < temp2analyze.size(); i++)
            {
                if (result * -1 == temp2analyze[i])
                {
                    result *= -1;
                }
            }
        }
    }

    cout << result << endl;
}
