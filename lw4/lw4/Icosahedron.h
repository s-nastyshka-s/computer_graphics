#pragma once

struct Facet {
	int vertexes[3];
	float color[4];
};

struct Vertex {
	float x, y, z;
};

class Icosahedron
{
public:
	Icosahedron();
	void DrawIcosahedron() const;
private:
	void DrawTriangle(const int* indexes) const;
	void InitVertexes();
	void InitFacets();
 
	Vertex m_vertexes[12];
	Facet m_facets[20];
};//не хранить здесь эти значении, в cpp в какой-то ноунем  , типа будет пустой класс, 
//прыгает при изменении размеров окна, при вращении, типа когда повернул в маленько окне, потом увеличил окно и он сбросилось поворот
// про золотое сечение всю теорию знать

 
