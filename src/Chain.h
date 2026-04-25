#pragma once

#include "ofMain.h"
#include <vector>

class Chain {
public:
  Chain() = default;
  Chain(const ofVec2f& iPosition, int iJointsSize, float iLinkLenght, float iLinkWidth);
	~Chain() = default;

	void update(int iJointsSize, float iLinkLength, float iLinkWidth);
	void draw();

private:
	std::vector<ofVec2f> m_joints;

	float m_linkLength; // Space between joints
  float m_linkwidth;  // link line width
};
