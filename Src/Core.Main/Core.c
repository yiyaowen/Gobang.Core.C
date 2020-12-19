#include "Core.h"
#include "CoreDefinitions.h"
#include "CoreUtility.h"
#include "CoreRandom.h"

CorePoint getCorePointFromCoreAlgorithm(CoreBoard board, const CorePrefabConfig* const prefabConfig)
{
    CorePoint point = { -1, -1 };
    if (isCoreBoardFull(board)) return point;

    switch (prefabConfig->level)
    {
        case CPC_LEVEL_DRUNK:
        {
            return getCorePointFromRandomAlgorithm(board);
        }
        case CPC_LEVEL_LOW:
        {
            // TODO
            return point;
        }
        case CPC_LEVEL_MIDDLE:
        {
            // TODO
            return point;
        }
        case CPC_LEVEL_HIGH:
        {
            // TODO
            return point;
        }
        case CPC_LEVEL_RANDOM:
        {
            // TODO
            return point;
        }
        default:
        {
            point.i = point.j = 0;
            return point;
        }
    }
}
