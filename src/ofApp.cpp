#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() 
{

  m_gui.setup();
  m_gui.add(m_jointsSize.setup("joints size", 10, 0, 50));
  m_gui.add(m_linkLength.setup("link length", 40, 0, 200));
  m_gui.add(m_linkWidth.setup("link width", 20, 0, 50));

  m_chain = Chain(ofVec2f(200, 200), m_jointsSize, m_linkLength, m_linkWidth);
}

//--------------------------------------------------------------
void ofApp::update() {}

//--------------------------------------------------------------
void ofApp::draw()
{
  ofBackground(0);
  m_chain.update(m_jointsSize, m_linkLength, m_linkWidth);
  m_chain.draw();

  m_gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {}
