#pragma once
#include <unordered_map>
#include <tuple>
#include <vector>

namespace vo {
	class Voronoi {
	public:
		void show(Voronoi& v);

	private:
		//!\brief contains all coords (pixels)
		std::unordered_map<std::tuple<int, int>, int> graph;
		int _height{ 500 };
		int _width{ 500 };
		int dim{ 2 }; // yes IR**2 = C technically

		//!\brief represents the points that makes the different zones
		std::vector<std::tuple<int, int>> points;

		//!\brief associates each source with its color
		std::unordered_map<std::tuple<int, int>, std::tuple<int, int, int>> colors;
	};
}