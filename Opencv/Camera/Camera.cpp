#include<iostream>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
 
int main() {
/* 读取视频或摄像头
   cv::VideoCapture capture(0)  0表示打开摄像头
   cv::VideoCapture capture("in.avi") 表示打开一个视频 */
cv::VideoCapture capture(0);
while (true){
	cv::Mat frame;
	//capture >> frame;
    capture.read(frame);
	cv::imshow("camera", frame);

    /* 按下Esc键退出 */
	if (cv::waitKey(1) == 27) break;
}
 
system("pause");
return 0;
}