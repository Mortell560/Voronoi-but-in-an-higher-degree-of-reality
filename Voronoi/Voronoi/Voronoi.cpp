#include "Voronoi.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>

namespace vo {
	Voronoi::Voronoi(const int H, const int W, const double dim, const bool auto_select, const bool progressive) {
		this->_height = H;
		this->_width = W;
		this->_auto_select = auto_select;
		this->dim = dim;
		this->_progressive = progressive;
		this->init_voronoi();
	};

	void Voronoi::show() {
		do {
			cv::imshow("pspsp", this->mat);
		} while (cv::waitKey());
	};

	void Voronoi::init_voronoi() {

	}
}