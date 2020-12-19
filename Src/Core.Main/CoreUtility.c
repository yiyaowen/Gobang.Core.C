#include "CoreUtility.h"

bool isCoreBoardFull(CoreBoard board)
{
    for (int i = 0; i < COR_BOARD_SIZE; ++i) {
        for (int j = 0; j < COR_BOARD_SIZE; ++j) {
            if (board[i][j] == CPC_SIDE_EMPTY) return false;
        }
    }
    return true;
}
