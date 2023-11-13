#pragma once
#include <GL/glew.h>
#include "ShaderHandler.h"
class FBO
{
	private:
		GLuint FBO; // Frame Buffer 
		GLuint RBO; // Render Buffer 
		GLuint CBO; // Colour Buffer 
		GLuint quadVAO;
		GLuint quadVBO;
		
		ShaderHandler FBOShader;
	public:
		void Bind();
		void Unbind();
		void Generate(GLsizei w, GLsizei h);
		void Render();
};

