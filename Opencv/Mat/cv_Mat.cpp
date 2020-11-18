#include<iostream>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>

void printInfo(cv::Mat &mat);
 
int main() {
    cv::Mat img1= cv::Mat(2,2,CV_8UC3);
    img1.at<cv::Vec3b>(0,0) = {0, 8, 16};
    img1.at<cv::Vec3b>(0,1) = {32, 64, 128};
    img1.data[6] = 255;
    printInfo(img1);

    cv::Mat img2;
    img1.convertTo(img2, CV_32FC3, 1.0f/255);
    ((float*)(img2.data))[9] = 1.2;
    printInfo(img2);

    img1.convertTo(img1, CV_32FC3, 1.0f/255);
    printInfo(img1);

    return 0;
}

void printInfo(cv::Mat &mat){
    /* 打印矩阵 */
    std::cout << "Mat:\n" << mat << std::endl;

    /* 打印矩阵形状(W*H*C) */
    std::cout << "Shape: (" << mat.cols << ", " << mat.rows << ", " << mat.channels() << ")" << std::endl;

    /* 打印矩阵元素类型 */
    std::cout << "Element type: " << mat.type() << std::endl;
}