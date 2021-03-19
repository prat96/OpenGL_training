#pragma once

#include <string>
#include <GL/glew.h>

class shader
{
public:
	shader(const std::string& filename);
	void Bind();
	virtual ~shader();
private:
	static const unsigned int NUM_SHADERS = 2;
	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];
	 
	std::string LoadShader(const std::string& filename);
	void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);

protected:
};

