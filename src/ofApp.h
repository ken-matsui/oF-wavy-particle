#pragma once

#include "ofMain.h"
#include "ofVbo.h"

#define	NUM_BILLBOARDS	20000

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
    
    ofEasyCam cam; // カメラ
    float zoom; // 現在のズーム
    float zoomTarget; // ズーム目標
    ofImage texture; // パーティクルに貼るテクスチャイメージ
    ofVbo billboardVbo; // VBO
    ofVec3f billboardVerts[NUM_BILLBOARDS]; // 頂点座標情報
    ofFloatColor billboardColor[NUM_BILLBOARDS]; //頂点色情報
    ofVec3f billboardVels[NUM_BILLBOARDS]; // パーティクルの移動速度
    
//    static constexpr int numue = 10;
//    int ka[numue];
};
