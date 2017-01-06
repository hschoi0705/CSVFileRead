#include <iostream>
#include <fstream>
#include <opencv2\core\core.hpp>

int main(void)
{
	cv::Mat data(5, 4, CV_32SC1);
	std::ifstream fileID("Sample.csv");
	std::string value;
	int idx = 0;
	while (std::getline(fileID, value, ',')){
		data.at<int>(idx,0) = atoi(value.c_str());
		std::getline(fileID, value, ',');
		data.at<int>(idx,1) = atoi(value.c_str());
		std::getline(fileID, value, ',');
		data.at<int>(idx,2) = atoi(value.c_str());
		std::getline(fileID, value);
		data.at<int>(idx,3) = atoi(value.c_str());
		idx++;
	}
	std::cout << "SampleCSV = " << data << std::endll
	
	return 0;
}
