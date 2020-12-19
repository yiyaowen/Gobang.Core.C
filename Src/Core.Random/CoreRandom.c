#include <stdlib.h>

#include "CoreRandom.h"
#include "RandomUtility.h"

CorePoint getCorePointFromRandomAlgorithm(CoreBoard board)
{
    CorePoint point = { -1, -1 };

    CorePoint* validPoints = malloc(sizeof(CorePoint)*COR_BOARD_SIZE*COR_BOARD_SIZE);
    int validPointsCount = filterValidPointsFromCoreBoard(board, validPoints);

    if (validPointsCount == 0) return point;

    point = validPoints[getRandomIntFromLeftInclusiveRange(0, validPointsCount)];

    free(validPoints);
    return point;
}
