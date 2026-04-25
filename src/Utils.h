#pragma once

#include "ofMain.h"

namespace Utils
{

// Draw a thick line between iPoint1 and iPoint2 using a triangle strip (reliable on all backends)
// - iPoint1, iPoint2: end points
// - width: total thickness of the line in pixels
void drawThickLine(const ofPoint& iPoint1, const ofPoint& iPoint2, float width);

} // namespace Utils
