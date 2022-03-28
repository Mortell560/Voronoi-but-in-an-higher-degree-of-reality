#pragma once
#include <unordered_map>
#include <tuple>

class Voronoi {
public:
	void show(Voronoi& v);

private:
	std::unordered_map<std::tuple<int, int>, int> yes;
};