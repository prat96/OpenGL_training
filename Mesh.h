#pragma once

#include <glm/glm.hpp>

class Vertex 
{
public:
	Vertex(const glm::vec3& pos)
	{
		this->pos = pos;
	}
protected:
private:
	glm::vec3 pos;
};

class Mesh
{
public:
	Mesh();

	void Draw();

	virtual ~Mesh();
};

