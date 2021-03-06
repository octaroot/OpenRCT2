#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#ifndef _PAINT_MAP_ELEMENT_H
#define _PAINT_MAP_ELEMENT_H

#include "../../common.h"
#include "../../world/map.h"

typedef enum edge
{
    EDGE_NE = (1 << 0),
    EDGE_SE = (1 << 1),
    EDGE_SW = (1 << 2),
    EDGE_NW = (1 << 3),
    EDGE_BOTTOMLEFT = EDGE_SW,
    EDGE_BOTTOMRIGHT = EDGE_SE,
    EDGE_TOPLEFT = EDGE_NW,
    EDGE_TOPRIGHT = EDGE_NE
} edge;

enum
{
    SEGMENT_B4 = (1 << 0), // 0
    SEGMENT_CC = (1 << 1), // 6
    SEGMENT_BC = (1 << 2), // 2
    SEGMENT_D4 = (1 << 3), // 8
    SEGMENT_C0 = (1 << 4), // 3
    SEGMENT_D0 = (1 << 5), // 7
    SEGMENT_B8 = (1 << 6), // 1
    SEGMENT_C8 = (1 << 7), // 5
    SEGMENT_C4 = (1 << 8), // 4
};

extern const int SEGMENTS_ALL;

enum
{
    TUNNEL_6 = 6,
};

void paint_util_push_tunnel_left(uint16 height, uint8 type);
void paint_util_push_tunnel_right(uint16 height, uint8 type);

void paint_util_set_general_support_height(sint16 height, uint8 slope);
void paint_util_force_set_general_support_height(sint16 height, uint8 slope);
void paint_util_set_segment_support_height(int segments, uint16 height, uint8 slope);

void map_element_paint_setup(int x, int y);

void entrance_paint(uint8 direction, int height, rct_map_element* map_element);
void banner_paint(uint8 direction, int height, rct_map_element* map_element);
void surface_paint(uint8 direction, uint16 height, rct_map_element *mapElement);
void path_paint(uint8 direction, uint16 height, rct_map_element *mapElement);
void scenery_paint(uint8 direction, int height, rct_map_element* mapElement);
void fence_paint(uint8 direction, int height, rct_map_element* mapElement);
void scenery_multiple_paint(uint8 direction, uint16 height, rct_map_element *mapElement);
void track_paint(uint8 direction, int height, rct_map_element *mapElement);

#endif
