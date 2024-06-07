#pragma once

#include <raylib.h>
#include <deque>
#include <raymath.h>

#define MAN_FPS 60

using namespace std;

/*
 * Colors used for drawing.
 */
static const Color white = {255, 255, 255, 255};
static const Color green = {144, 216, 119, 255};
static const Color darkGreen = {22, 88, 53, 255};
static const Color red = {185, 20, 20, 255};

static int cellSize = 25;       // Size of each cell in the grid (in pixels).
static int cellCount = 25;      // Number of cells in the grid (per row and column).
static int bottomOffset = 30;   // Offset for the bottom of the window (used for the score display).

static double lastUpdateTime = 0;   // Time of the last update event.

/*
 * @brief   Check if a certain interval of time has passed since the last event trigger.
 * @param   interval    The interval in seconds.
 * @return  true        If the interval has passed.
 *          false       If the interval has not passed.
 */
static bool eventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

/*
 * @brief   Check if a specific element is present in the Vector2 deque.
 * @param   element     The element to check for.
 * @param   deque       The deque to search in.
 * @return  true        If the element is in the deque.
 *          false       If the element is not in the deque.
 */
static bool ElementInDeque(Vector2 element, deque<Vector2> deque)
{
    for (unsigned int i = 0; i < deque.size(); i++)
    {
        if (Vector2Equals(deque[i], element))
        {
            return true;
        }
    }
    return false;
}