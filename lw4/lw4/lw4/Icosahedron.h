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
	/// ������������ ���������� �������, ����� ������ ��������
	/// ����� ������ � ���� ����� ������
	/// ����������� ��� ������ ������
	/// </summary>
	std::vector<std::vector<float>> m_vertexes;
	std::vector<std::vector<float>> m_facets;//��������� ����, ��������� 
	std::vector<std::vector<float>> m_colors;
};
