#include<iostream>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
 
int main() {
    cv::Mat img1= cv::imread("../test.jpg", cv::ImreadModes::IMREAD_COLOR);
    cv::Mat img2= cv::imread("../test.jpg", cv::ImreadModes::IMREAD_GRAYSCALE);

    
    // std::cerr << "Size of img1:\n(" << img1.cols << ", " << img1.rows << ")\n" << "dims: " << img1.dims << std::endl;
    // std::cerr << img1.at<cv::Vec3b>(3,3) << std::endl;
    // std::cerr << img1.channels() << std::endl;
    // cv::imshow("Color", img1);
    // cv::waitKey();
    // std::cerr << "Size of img2:\n(" << img2.cols << ", " << img2.rows << ")\n" << "dims: " << img2.dims << std::endl;
    // std::cerr << img2.at<cv::Vec3b>(3,3) << std::endl;
    // cv::imshow("Gragscale", img2);
    // cv::waitKey();

    // cv::Mat img3 = cv::Mat(img1.cols,img1.rows,CV_8UC1);
    // cv::imshow("One Channel", img3);
    // std::cerr << "img3.data:\n" << img3.at<cv::Vec3b>(3,3) << std::endl;
    // std::cerr << "img3.channels:\n" <<img1.channels() << std::endl;
    // cv::waitKey();

    cv::Mat ret(img1.cols, img1.rows, CV_32FC3);
    std::cerr << "ret.channels:\n" <<ret.channels() << std::endl;
    ret.at<cv::Vec3f>(3,3)[0] = 2.5f;
    ret.at<cv::Vec3f>(3,3) = {1.1f,0.9f,3};
    ret.at<cv::Vec3f>(3,3) *=2;
    std::cerr << ret.at<cv::Vec3f>(3,3) << std::endl;

    return 0;
}