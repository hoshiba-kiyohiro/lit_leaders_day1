#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    ofSetColor(255, 255, 255, 255);
    
    for (int i = 1; i<=5; i++) {
        ofLine(0, 128*i, 1024, 128*i);
    }
    
    for (int i = 1; i<=7; i++) {
        ofLine(128*i, 0, 128*i, 768);
        
    }
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(45);
    ofRect(-150, -150, 300, 300);
    
    ofPopMatrix();
    ofSetColor(255, 0, 0);
    ofRect(0, 0, 300, 300);
    
    
    
    

    

    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
