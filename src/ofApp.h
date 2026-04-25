#pragma once

#include "ofMain.h"
#include "Chain.h"
#include <ofxSlider.h>
#include <ofxPanel.h>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		private:

    ofxPanel m_gui;

		ofxIntSlider m_jointsSize;
    ofxFloatSlider m_linkLength;
    ofxFloatSlider m_linkWidth;
    Chain m_chain;
		
};
