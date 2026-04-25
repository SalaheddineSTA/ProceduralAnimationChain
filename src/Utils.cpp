#include "Utils.h"

namespace Utils
{
  void drawThickLine(const ofPoint& iPoint1, const ofPoint& iPoint2, float width)
  {
    ofVec2f dir = iPoint2 - iPoint1;
    ofVec2f normal = dir.getPerpendicular().getNormalized();

    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);

    ofVec2f offset = normal * (width / 2.0);

    mesh.addVertex(iPoint1 - offset);
    mesh.addVertex(iPoint1 + offset);
    mesh.addVertex(iPoint2 - offset);
    mesh.addVertex(iPoint2 + offset);

    mesh.draw();
  }
} // namespace Utils
