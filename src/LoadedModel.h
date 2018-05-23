//
//  LoadedModel.h
//  martian-terrain
//
//  Created by Sidharth Mishra on 5/20/18.
//

#ifndef LoadedModel_h
#define LoadedModel_h

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

/**
 Models loaded using ofxAssimpleModelLoader are not extending ofNode class. This makes it difficult to
 make hierarchies of ofNodes using these models. Using the LoadedModel class, the programmer can perform
 operations like they would on a node instance.
 */

namespace sidmishraw_model {
  
  /**
   The loaded model. This makese the ofxAssimpleModelLoader conform to the ofNode.
   */
  class LoadedModel : public ofNode {
    
    /// The Assimplemodel loader instance.
    ///
    ofxAssimpModelLoader model;
  
  public:
    
    /// Default loaded model created, use in conjunction with load model to make the model.
    ///
    LoadedModel();
    
    /// Load the model with the given model name and optimization flag.
    ///
    bool loadModel(string modelName, bool optimize = true);
    
    /// Loads the model with the given "modelName". The boolean flag named "optimize" will optimize
    /// the loaded model if needed.
    ///
    LoadedModel(string modelName, bool optimize = true);

    //
    // For compliance with ofxAssimpleModelLoader functionality --
    //
    
    /// Explicit model update.
    ///
    void update();
    
    /// Does this model have animations defined on it?
    ///
    bool hasAnimations();
    
    /// Plays all the animations on the loaded model.
    ///
    void playAllAnimations();
    
    /// Stops all the running animations on the loaded model.
    ///
    void stopAllAnimations();
    
    /// Reset all the animations on the loaded model.
    ///
    void resetAllAnimations();
    
    /// Checks if this loaded model has meshes.
    ///
    bool hasMeshes();
    
    /// Fetches the number of meshes in the loaded model.
    ///
    unsigned int getMeshCount();
    
    /// Clears the loaded model.
    ///
    void clear();
    
    /// Sets the scale values of this loaded model.
    ///
    void setScale(float x, float y, float z);
    void setScale(ofVec3f scaleVector);
    
    /// Sets the position of this model.
    ///
    void setPosition(float x, float y, float z);
    void setPosition(ofVec3f posVector);
    
    /// Sets the rotation of this model. This allows the model to have multiple
    /// rotation values that are added incrementally to the model. These rotation
    /// values are stored in a list indexed by the first parameter ("which").
    ///
    void setRotation(int which, float angle, float rot_x, float rot_y, float rot_z);
    
    /// Set flag denoting scale normalization.
    ///
    void setScaleNormalization(bool normalize);
    
    /// Sets the normalization factor.
    ///
    void setNormalizationFactor(float factor);
    
    /// Fetches the list of all the names of the meshes of this model.
    ///
    vector<string> getMeshNames();
    
    /// Fetches the total number of meshes in this loaded model.
    ///
    int getNumMeshes();
    
    /// Fetches the mesh for the given "name".
    ///
    ofMesh getMesh(string name);
    
    /// Fetches the mesh indexed by the provided index -- "num".
    ///
    ofMesh getMesh(int num);
    
    // --------------- TODO -----------------------
    /// TODO: Implement these methods
    ofMesh getCurrentAnimatedMesh(string name);
    ofMesh getCurrentAnimatedMesh(int num);
    ofMaterial getMaterialForMesh(string name);
    ofMaterial getMaterialForMesh(int num);
    ofTexture getTextureForMesh(string name);
    ofTexture getTextureForMesh(int num);
    // --------------- TODO -----------------------
    
    /// Draws the model in wireframe view.
    ///
    void drawWireframe();
    
    /// Draws the faces of the loaded model.
    ///
    void drawFaces();
    
    /// Draws the vertices of the loaded model.
    ///
    void drawVertices();
    
    /// Enables the textures of the loaded model while drawing.
    ///
    void enableTextures();
    
    /// Disables the textures of the loaded model while drawing.
    ///
    void disableTextures();
    
    /// Enables the normals for this loaded model.
    ///
    void enableNormals();
    
    /// Disables the normals for this loaded model.
    ///
    void disableNormals();
    
    /// Enables the materials for this loaded model.
    ///
    void enableMaterials();
    
    /// Disables the materials for this loaded model.
    ///
    void disableMaterials();
    
    /// Enables the colors for this loaded model.
    ///
    void enableColors();
    
    /// Disables the colors for this loaded model.
    ///
    void disableColors();
    
    /// Draws the model for the given render type (render mode).
    ///
    void draw(ofPolyRenderMode renderType);
    
    /// Gets the current position of this model.
    ///
    ofPoint getPosition();
    
    /// Gets the center of the model -- current scene.
    ///
    ofPoint getSceneCenter();
    
    /// Gets the normalized scale factor.
    ///
    float getNormalizedScale();
    
    /// Gets the current scale vector.
    ///
    ofVec3f getScale();
    
    /// Gets the current model matrix holding all the transformations on this
    /// model.
    ///
    ofMatrix4x4 getTransformMatrix();
    
    /// Gets the minimum bounds of this loaded model. Useful for creating bounding boxes.
    ///
    ofVec3f getSceneMin(bool bScaled = false);
    
    /// Gets the maximum bounds of this loaded model. Useful for creating bounding boxes.
    ///
    ofVec3f  getSceneMax(bool bScaled = false);
    
    /// Gets the number of applied rotations on this loaded model.
    ///
    int  getNumRotations();
    
    /// Fetches the rotation axis for the rotation applied at provided index -- ("which").
    ///
    ofVec3f  getRotationAxis(int which);
    
    /// Fetches the rotation angle for the rotation applied at provided index -- ("which").
    ///
    float getRotationAngle(int which);
    
    /// Computes the dimension of the loaded model.
    ///
    void calculateDimensions();
  };
  
}

#endif /* LoadedModel_h */
