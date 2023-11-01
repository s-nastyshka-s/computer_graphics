#include <glut.h>
#include <cmath>
#include "Icosahedron.h"

using namespace std;
const int facetesCount = 20;

Icosahedron::Icosahedron()
{
	InitColors();
	InitVertexes();
	InitFacets();
}

void Icosahedron::DrawIcosahedron() const
{
	for (int i = 0; i < facetesCount; i++) 
	{
		glColor3fv(&m_colors[i][0]);
		DrawTriangle(m_vertexes[m_facets[i][0]], m_vertexes[m_facets[i][1]], m_vertexes[m_facets[i][2]]);
	}
}

void Icosahedron::DrawTriangle(vector<float> v1, vector<float> v2, vector<float> v3) const
{
	glLineWidth(3);

	glBegin(GL_TRIANGLES);
	glVertex3fv(&v1[0]);
	glVertex3fv(&v2[0]);
	glVertex3fv(&v3[0]);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex3fv(&v1[0]);
	glVertex3fv(&v2[0]);
	glVertex3fv(&v3[0]);
	glEnd();
}

void Icosahedron::InitColors()
{
	m_colors = {
		{ 0.9, 0.9, 0.98 },
		{ 0.57, 0.44, 0.85 },
		{ 0.54, 0.16, 0.88 },
		{ 0.41, 0.35, 0.8},
		{ 0.28, 0.23, 0.54},
		{ 0.29, 0, 0.5 },
		{ 0.58, 0,  0.83 },
		{ 0.72, 0.33, 0.82 },
		{ 0.84, 0.74, 0.84 },
		{ 0.67, 0.84, 0.9 },
		{ 0.68, 0.92, 0.92 },
		{ 0.25, 0.41,  0.88 },
		{ 0.49, 1, 0.83 },
		{ 0, 0, 1 },
		{ 0.09, 0.09, 0.44 },
		{ 0.48, 0.4, 0.93},
		{ 0.53, 0.8, 0.98},
		{ 0.27, 0.5, 0.7 },
		{ 0, 1,  1 },
		{ 0.12, 0.56, 1 },
	};
}

void Icosahedron::InitVertexes()
{
	const float phi = (1 + sqrt(5)) / 2;
	m_vertexes = {
		{ phi, 1, 0 },
		{ phi, -1, 0 },
		{ -phi, -1, 0 },
		{ -phi, 1, 0 },
		{ 0, phi, 1 },
		{ 0, -phi, 1 },
		{ 0, -phi, -1 },
		{ 0, phi, -1 },
		{ 1, 0, phi },
		{ 1, 0, -phi },
		{ -1, 0, -phi },
		{ -1, 0, phi }
	};
}

void Icosahedron::InitFacets()
{
	m_facets = {
		{ 7, 0, 4 },
		{ 7, 4, 3 },
		{ 7, 3, 10 },
		{ 7, 10, 9 },
		{ 7, 9, 0 },
		{ 0, 8, 4 },
		{ 8, 4, 11 },
		{ 4, 11, 3 },
		{ 11, 3, 2 },
		{ 3, 2, 10},
		{ 2, 10, 6 },
		{ 10, 6, 9 },
		{ 6, 9, 1 },
		{ 9, 1, 0 },
		{ 1, 0, 8 },
		{ 5, 8, 11 },
		{ 5, 11, 2 },
		{ 5, 2, 6 },
		{ 5, 6, 1 },
		{ 5, 1, 8 },
	};
}