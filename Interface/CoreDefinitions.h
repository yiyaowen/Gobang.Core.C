#ifndef CORE_DEFINITIONS_H
#define CORE_DEFINITIONS_H

#define COR_BOARD_SIZE  15

typedef int CoreBoard[COR_BOARD_SIZE][COR_BOARD_SIZE];

typedef struct {
    int i;
    int j;
} CorePoint;

typedef struct {
    int side;
    int level;
} CorePrefabConfig;

#define CPC_SIDE_EMPTY  0
#define CPC_SIDE_BLACK  -1
#define CPC_SIDE_WHITE  1

#define CPC_LEVEL_DRUNK     -100
#define CPC_LEVEL_LOW       0
#define CPC_LEVEL_MIDDLE    1
#define CPC_LEVEL_HIGH      2
#define CPC_LEVEL_RANDOM    42

#endif // CORE_DEFINITIONS_H
