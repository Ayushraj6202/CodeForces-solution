// C++ program for the above approach
#include <iostream>
using namespace std;

int queen_moves(int x, int y, int row, int col)
{

    // Find all the moves
    int queen_step = 0;

    // Find all moves for x + 1, y + 1
    if ((row - x) > 0 && (col - y) > 0)
        queen_step += min((row - x), (col - y));

    // Find all moves for x - 1, y - 1
    if ((y - 1) > 0 && (x - 1) > 0)
        queen_step += min((y - 1), (x - 1));

    // Find all moves for x - 1, y + 1
    if ((x - 1) > 0 && (col - y) > 0)
        queen_step += min((x - 1), (col - y));

    // Find all moves for x + 1, y - 1
    if ((row - x) > 0 && (y - 1) > 0)
        queen_step += min((row - x), (y - 1));

    queen_step += (row - 1) + (col - 1);
    return queen_step;
}

// Driver Code
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        // Function Call
        cout << (queen_moves(x, y, n, n)) << endl;
    }

    return 0;
}
