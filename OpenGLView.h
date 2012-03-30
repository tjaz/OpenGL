//
//  OpenGLView.h
//  HelloOpenGL
//
//  Created by Lion User on 28/02/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
// http://www.raywenderlich.com/3664/opengl-es-2-0-for-iphone-tutorial

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#import <UIKit/UIKit.h>

@interface OpenGLView : UIView {
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    GLuint _depthRenderBuffer;
    GLuint _positionSlot;
    GLuint _colorSlot;
    GLuint _projectionUniform;
    GLuint _modelViewUniform;
    
    GLuint _floorTexture;
    GLuint _fishTexture;
    GLuint _texCoordSlot;
    GLuint _textureUniform;
    
    GLuint _vertexBuffer;
    GLuint _indexBuffer;
    GLuint _vertexBuffer2;
    GLuint _indexBuffer2;
    
    float _currentRotation;

}

// koraki pri postavitvi openGL-a
+ (Class)layerClass;
- (void)setupLayer;
- (void)setupContext;
- (void)setupRenderBuffer;
- (void)setupFrameBuffer;
- (void)render:(CADisplayLink*)displayLink;
- (GLuint)compileShader:(NSString*)shaderName withType:(GLenum)shaderType;// Kompajlanje šaderjev
- (void)compileShaders;
- (void)setupVBOs;
- (void)setupDisplayLink;
- (void)setupDepthBuffer;
- (GLuint)setupTexture:(NSString *)fileName;

@end
