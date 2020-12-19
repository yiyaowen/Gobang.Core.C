#include <stdlib.h>
#include <time.h>

#include "RandomUtility.h"

int filterValidPointsFromCoreBoard(CoreBoard board, CorePoint* validPoints)
{
    int validPointsCount = 0;
    for (int i = 0; i < COR_BOARD_SIZE; ++i) {
        for (int j = 0; j < COR_BOARD_SIZE; ++j) {
            if (board[i][j] == CPC_SIDE_EMPTY) {
                CorePoint point = { i, j };
                validPoints[validPointsCount++] = point;
            }
        }
    }
    return validPointsCount;
}

int getRandomIntFromLeftInclusiveRange(int left, int right)
{
    srand((unsigned)time(0));
    return rand() % (right-left) + left;
}
