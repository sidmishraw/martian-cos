//
//  LoadedModel.cpp
//  martian-terrain
//
//  Created by Sidharth Mishra on 5/20/18.
//

#include "LoadedModel.h"

using namespace sidmishraw_model;
using namespace std;

LoadedModel::LoadedModel():ofNode() {
}

LoadedModel::LoadedModel(string modelName, bool optimize):ofNode() {
  this->model = ofxAssimpModelLoader();
  this->model.loadModel(modelName);
  this->model.setScaleNormalization(false);
}

bool LoadedModel::loadModel(string modelName, bool optimize) {
  return this->model.loadModel(modelName);
}


void LoadedModel::update() {
  this->model.update();
}

bool LoadedModel::hasAnimations() {
  return this->model.hasAnimations();
}

void LoadedModel::playAllAnimations() {
  this->model.playAllAnimations();
}

void LoadedModel::stopAllAnimations() {
  this->model.stopAllAnimations();
}

void LoadedModel::resetAllAnimations() {
  this->model.resetAllAnimations();
}

bool LoadedModel::hasMeshes() {
  return this->model.hasMeshes();
}

unsigned int LoadedModel::getMeshCount() {
  return this->model.getMeshCount();
}

void LoadedModel::clear() {
  this->model.clear();
}

void LoadedModel::setScale(float x, float y, float z) {
  this->model.setScale(x, y, z);
}

void LoadedModel::setScale(ofVec3f scaleVector) {
  this->setScale(scaleVector.x, scaleVector.y, scaleVector.z);
}

void LoadedModel::setPosition(float x, float y, float z) {
  this->model.setPosition(x, y, z);
}

void LoadedModel::setPosition(ofVec3f posVector) {
  this->setPosition(posVector.x, posVector.y, posVector.z);
}

void LoadedModel::setRotation(int which, float angle, float rot_x, float rot_y, float rot_z) {
  this->model.setRotation(which, angle, rot_x, rot_y, rot_z);
}

void LoadedModel::setScaleNormalization(bool normalize) {
  this->model.setScaleNormalization(normalize);
}

void LoadedModel::setNormalizationFactor(float factor) {
  this->model.setNormalizationFactor(factor);
}

vector<string> LoadedModel::getMeshNames() {
  return this->model.getMeshNames();
}

int LoadedModel::getNumMeshes() {
  return this->model.getNumMeshes();
}

ofMesh LoadedModel::getMesh(string name) {
  return this->model.getMesh(name);
}

ofMesh LoadedModel::getMesh(int num) {
  return this->model.getMesh(num);
}

void LoadedModel::drawWireframe() {
  this->model.drawWireframe();
}

void LoadedModel::drawFaces() {
  this->model.drawFaces();
}

void LoadedModel::drawVertices() {
  this->model.drawVertices();
}

void LoadedModel::enableTextures() {
  this->model.enableTextures();
}

void LoadedModel::disableTextures() {
  this->model.disableTextures();
}

void LoadedModel::enableNormals() {
  this->model.enableNormals();
}

void LoadedModel::disableNormals() {
  this->model.disableNormals();
}

void LoadedModel::enableMaterials() {
  this->model.enableMaterials();
}

void LoadedModel::disableMaterials() {
  this->model.disableMaterials();
}

void LoadedModel::enableColors() {
  this->model.enableColors();
}

void LoadedModel::disableColors() {
  this->model.disableColors();
}

void LoadedModel::draw(ofPolyRenderMode renderType) {
  this->model.draw(renderType);
}

ofPoint LoadedModel::getPosition() {
  return this->model.getPosition();
}

ofPoint LoadedModel::getSceneCenter() {
  return this->model.getSceneCenter();
}

float LoadedModel::getNormalizedScale() {
  return this->model.getNormalizedScale();
}

ofVec3f LoadedModel::getScale() {
  return this->model.getScale();
}

ofMatrix4x4 LoadedModel::getTransformMatrix() {
  return this->model.getModelMatrix();
}

ofVec3f LoadedModel::getSceneMin(bool bScaled) {
  return this->model.getSceneMin(bScaled);
}

ofVec3f LoadedModel::getSceneMax(bool bScaled) {
  return this->model.getSceneMax(bScaled);
}

int LoadedModel::getNumRotations() {
  return this->model.getNumRotations();
}

ofVec3f LoadedModel::getRotationAxis(int which) {
  return this->model.getRotationAxis(which);
}

float LoadedModel::getRotationAngle(int which) {
  return this->model.getRotationAngle(which);
}

void LoadedModel::calculateDimensions() {
  this->model.calculateDimensions();
}



