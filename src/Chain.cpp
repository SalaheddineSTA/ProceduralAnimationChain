#include "Chain.h"
#include "Utils.h"

Chain::Chain(const ofVec2f& iPosition, int iJointsSizes, float iLinkLenght, float iLinkWidth)
{
  // constructor implementation

  m_joints.resize(iJointsSizes);

  m_linkLength = iLinkLenght;
  m_linkwidth = iLinkWidth;

  for (int i = 0; i < iJointsSizes; ++i)
  {
    m_joints[i] = iPosition + ofVec2f(i * m_linkLength, 0); // Initialize joints in a straight line
  }
}

void Chain::update(int iJointsSize, float iLinkLength, float iLinkWidth)
{
  // update logic
  m_joints.resize(iJointsSize);
  m_linkLength = iLinkLength;
  m_linkwidth = iLinkWidth;

  m_joints[0] = ofVec2f(ofGetMouseX(), ofGetMouseY()); // Move the first joint to the mouse position
  for (int i = 1; i < m_joints.size(); ++i)
  {
    ofVec2f direction = m_joints[i] - m_joints[i - 1];
    float length = sqrt(direction.x * direction.x + direction.y * direction.y); // lenght

    if (length > m_linkLength)
    {
      direction = (direction / length) * m_linkLength;
      m_joints[i] = m_joints[i - 1] + direction;
    }
  }

}

void Chain::draw()
{
  // draw logic
  for (int i = 0; i < m_joints.size(); ++i)
  {
    ofSetColor(255); // Set color for joints
    if (i < m_joints.size() - 1)
    {
      Utils::drawThickLine(m_joints[i], m_joints[i + 1], m_linkwidth); // Draw line between joints
    }
 
    ofDrawCircle(m_joints[i], 15); // Draw each joint as a circle
    ofSetColor(0);     // Set color for joints
    ofDrawCircle(m_joints[i], 10); // Draw each joint as a circle
  }
 
}

