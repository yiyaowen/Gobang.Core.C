#ifndef CORE_H
#define CORE_H

#include "CoreDefinitions.h"

#define getCorePoint getCorePointFromCoreAlgorithm

/**
 * Get the analysis result of core algorithm.
 * 
 * @param board The gobang game to be analyzed. You should use a native c array 
 *              to present a specific gobang game: First dimension represents
 *              every row, and second dimension represents every column. Every
 *              point in array should be set to one of the following values:
 *              [0 for empty]; [-1 for black piece]; [1 for white piece]. Otherwise
 *              the analysis result will be undefined.
 * 
 * @param  prefabConfig Set different prefab configuration to choose different
 *                      algorithm. There is no default prefab configuration. If
 *                      your pass a uninitialized or undefined configuration to
 *                      the function, it will simply return (0,0) without analysis.
 *
 * @return The analysis result of core algorithm. CorePoint is a simple struct includes
 *         two members: [i for row number]; [j for column number]. The result varies from
 *         diffrent gobang games and prefab configurations. One exception is: if the
 *         board is already filled with pieces, the function will return (-1, -1) directly.
 */
CorePoint getCorePointFromCoreAlgorithm(CoreBoard board, const CorePrefabConfig* const prefabConfig);

#endif // CORE_H
