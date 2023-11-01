#pragma once
#include <vector>

class Icosahedron
{
public:
	Icosahedron();
	void DrawIcosahedron() const;
private:
	void DrawTriangle(std::vector<float> v1, std::vector<float> v2, std::vector<float> v3) const;
	void InitColors();
	void InitVertexes();
	void InitFacets();

	/// <summary>
	/// использовать подходящие массивы, много месста занимает
	/// цвета граней и сами грани вместе
	/// разобраться что хранят фасеты
	/// </summary>
	std::vector<std::vector<float>> m_vertexes;
	std::vector<std::vector<float>> m_facets;//храниться дичь, исправить 
	std::vector<std::vector<float>> m_colors;
};
