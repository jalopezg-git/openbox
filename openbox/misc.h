#ifndef __ob__misc_h
#define __ob__misc_h

typedef enum
{
    OB_CURSOR_NONE,
    OB_CURSOR_POINTER,
    OB_CURSOR_BUSY,
    OB_CURSOR_MOVE,
    OB_CURSOR_NORTH,
    OB_CURSOR_NORTHEAST,
    OB_CURSOR_EAST,
    OB_CURSOR_SOUTHEAST,
    OB_CURSOR_SOUTH,
    OB_CURSOR_SOUTHWEST,
    OB_CURSOR_WEST,
    OB_CURSOR_NORTHWEST,
    OB_NUM_CURSORS
} ObCursor;

typedef enum
{
    OB_KEY_RETURN,
    OB_KEY_ESCAPE,
    OB_KEY_LEFT,
    OB_KEY_RIGHT,
    OB_KEY_UP,
    OB_KEY_DOWN,
    OB_NUM_KEYS
} ObKey;

typedef enum
{
    OB_STATE_STARTING,
    OB_STATE_RUNNING,
    OB_STATE_EXITING
} ObState;

typedef enum
{
    OB_DIRECTION_NORTH,
    OB_DIRECTION_NORTHEAST,
    OB_DIRECTION_EAST,
    OB_DIRECTION_SOUTHEAST,
    OB_DIRECTION_SOUTH,
    OB_DIRECTION_SOUTHWEST,
    OB_DIRECTION_WEST,
    OB_DIRECTION_NORTHWEST
} ObDirection;

typedef enum
{
    OB_ORIENTATION_HORZ,
    OB_ORIENTATION_VERT
} ObOrientation;

typedef enum
{
    OB_CORNER_TOPLEFT,
    OB_CORNER_TOPRIGHT,
    OB_CORNER_BOTTOMLEFT,
    OB_CORNER_BOTTOMRIGHT
} ObCorner;

#endif
