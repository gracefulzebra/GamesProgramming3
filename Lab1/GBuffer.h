#pragma once

#include <GL/glew.h>
#include "ShaderHandler.h"

class GBuffer
{
private:
	GLuint GBO; // Frame Buffer 
	GLuint RBO; // Render Buffer 
	GLuint gPos; // Position
	GLuint gNormal; // Normals
	GLuint gAlbedoSpec; // Albedo Specular Values
	GLuint quadVAO;
	GLuint quadVBO;

	ShaderHandler FBOShader;
public:
	void Bind();
	void Unbind();
	void Generate(GLsizei w, GLsizei h);
	void Render();
};

