#include <glut.h>
#include <cmath>
#include "Icosahedron.h"

using namespace std;

const int facetesCount = 20;

Icosahedron::Icosahedron()
{
	InitVertexes();
	InitFacets();
}

void Icosahedron::DrawIcosahedron() const
{
	for (int i = 0; i < facetesCount; i++)
	{
		glColor4fv(m_facets[i].color);
		DrawTriangle(m_facets[i].vertexes);
	}
}

void Icosahedron::DrawTriangle(const int* indexes) const//Сначала непрозпачные, потом дальние и потом ближние
{
	glLineWidth(3);

	glBegin(GL_TRIANGLES);
	glVertex3f(m_vertexes[indexes[0]].x, m_vertexes[indexes[0]].y, m_vertexes[indexes[0]].z);
	glVertex3f(m_vertexes[indexes[1]].x, m_vertexes[indexes[1]].y, m_vertexes[indexes[1]].z);
	glVertex3f(m_vertexes[indexes[2]].x, m_vertexes[indexes[2]].y, m_vertexes[indexes[2]].z);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(m_vertexes[indexes[0]].x, m_vertexes[indexes[0]].y, m_vertexes[indexes[0]].z);
	glVertex3f(m_vertexes[indexes[1]].x, m_vertexes[indexes[1]].y, m_vertexes[indexes[1]].z);
	glVertex3f(m_vertexes[indexes[2]].x, m_vertexes[indexes[2]].y, m_vertexes[indexes[2]].z);
	glEnd();
}

void Icosahedron::InitVertexes()
{
	const float phi = (1 + sqrt(5)) / 2;

	m_vertexes[0] = { phi, 1, 0 };
	m_vertexes[1] = { phi, -1, 0 };
	m_vertexes[2] = { -phi, -1, 0 };
	m_vertexes[3] = { -phi, 1, 0 };
	m_vertexes[4] = { 0, phi, 1 };
	m_vertexes[5] = { 0, -phi, 1 };
	m_vertexes[6] = { 0, -phi, -1 };
	m_vertexes[7] = { 0, phi, -1 };
	m_vertexes[8] = { 1, 0, phi };
	m_vertexes[9] = { 1, 0, -phi };
	m_vertexes[10] = { -1, 0, -phi };
	m_vertexes[11] = { -1, 0, phi };
}

void Icosahedron::InitFacets()
{
	m_facets[0] = { { 4, 0, 7 }, { 0.9, 0.9, 0.98, 0.5 } };
	m_facets[1] = { { 7, 3, 4 }, { 0.57, 0.44, 0.85, 0.5 } };
	m_facets[2] = { { 7, 10, 3 }, { 0.54, 0.16, 0.88, 0.5 } };
	m_facets[3] = { { 7, 9, 10 }, { 0.41, 0.35, 0.8, 0.5 } };
	m_facets[4] = { { 7, 0, 9 }, { 0.28, 0.23, 0.54, 0.5 } };
	m_facets[5] = { { 0, 4, 8 }, { 0.29, 0, 0.5, 0.5 } };
	m_facets[6] = { { 8, 4, 11 }, { 0.58, 0, 0.83, 0.5 } };
	m_facets[7] = { { 4, 3, 11 }, { 0.72, 0.33, 0.82, 0.5 } };
	m_facets[8] = { { 11, 3, 2 }, { 0.84, 0.74, 0.84, 0.5 } };
	m_facets[9] = { { 3, 10, 2 }, { 0.68, 0.92, 0.92, 0.5 } };
	m_facets[10] = { { 2, 10, 6 }, { 0.25, 0.41, 0.88, 0.5 } };
	m_facets[11] = { { 10, 9, 6 }, { 0.49, 1, 0.83, 0.5 } };
	m_facets[12] = { { 6, 9, 1 }, { 0.09, 0.09, 0.44, 0.5 } };
	m_facets[13] = { { 9, 0, 1 }, { 0.48, 0.4, 0.93, 0.5 } };
	m_facets[14] = { { 1, 0, 8 }, { 0.53, 0.8, 0.98, 0.5 } };
	m_facets[15] = { { 5, 8, 11 }, { 0.27, 0.5, 0.7, 0.5 } };
	m_facets[16] = { { 5, 11, 2 }, { 0, 1, 1, 0.5 } };
	m_facets[17] = { { 5, 2, 6 }, { 0.12, 0.56, 1, 0.5 } };
	m_facets[18] = { { 5, 6, 1 }, { 0, 0, 1, 0.5 } };
	m_facets[19] = { { 5, 1, 8 }, { 0.67, 0.84, 0.9, 0.5 } };
}