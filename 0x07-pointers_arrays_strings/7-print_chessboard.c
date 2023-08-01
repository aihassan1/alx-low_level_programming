#include "main.h"

/**
 * print_chessboard - Prints a chessboard represented by a 2D array.
 * @a: Pointer to the 2D array representing the chessboard.
 *
 * Description: The chessboard is represented by a 2D array of characters,
 * where each character represents a square on the chessboard.
 * The function prints the chessboard on the console.
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
