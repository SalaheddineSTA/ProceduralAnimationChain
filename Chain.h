#pragma once

#include "ofMain.h"
#include <vector>

class Chain {
public:
	Chain();

	void update();
	void draw();

private:
	std::vector<ofVec2> joints;
	int linkSize; // Space between joints

	// Only used in non-FABRIK resolution
	std::vector<float> angles;
	float angleConstraint; // Max angle diff between two adjacent joints, higher = loose, lower = rigid
};
