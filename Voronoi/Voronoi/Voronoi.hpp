#pragma once
#include <unordered_map>
#include <tuple>
#include <vector>
#include <opencv2/core/core.hpp>

namespace vo {
	class Voronoi {
	public:
		Voronoi(const int H, const int W, const double dim, const bool auto_select, const bool progressive);
		void show();

	private:
		//!\brief contains all coords (pixels)
		std::unordered_map<std::tuple<int, int>, int> graph;
		int _height{ 500 };
		int _width{ 500 };
		int dim{ 2 }; // yes IR**2 = C technically
		bool _auto_select{ true };
		bool _progressive{ false };

		//!\brief represents the points that makes the different zones
		std::vector<std::tuple<int, int>> points;

		//!\brief associates each source with its color
		std::unordered_map<std::tuple<int, int>, std::tuple<int, int, int>> colors;

		//!\brief Higher reality window
		cv::Mat mat = cv::Mat::zeros(_height, _width, CV_8UC3);

		void init_voronoi();
	};
}