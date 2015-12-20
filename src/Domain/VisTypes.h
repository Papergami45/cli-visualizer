/*
 * VisTypes.h
 *
 * Created on: Jul 30, 2015
 *     Author: dpayne
 */

#ifndef _VIS_TYPES_H
#define _VIS_TYPES_H

#include <cstdint>

namespace vis
{
struct stereo_sample_frame
{
    int16_t l;
    int16_t r;
};

using pcm_stereo_sample = struct stereo_sample_frame;

using ColorIndex = int16_t;
using ColorValue = int16_t;

enum class SmoothingMode
{
    None = 0,
    MonsterCat,
    Sgs
};

enum class FalloffMode
{
    None = 0,
    Fill,
    Top
};

enum class ChannelMode
{
    Left = 0,
    Right,
    Both
};

}
#endif
