#include "menger.h"

/**
 * menger - draws 2-D menger square
 * @level: legnth pow(3)of the level
 */
void menger(int level)
{
    int n = pow(3, level);
    int row, col, x, y, c;

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            x = row;
            y = col;
            c = '#';
            while (x || y)
            {
                if (x % 3 == 1 && y % 3 == 1)
                    c = ' ';
                x /= 3;
                y /= 3;
            }
            putchar(c);
        }
        putchar('\n');
    }
}