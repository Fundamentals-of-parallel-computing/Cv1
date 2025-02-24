
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    auto pathToImage = "/home/alex/OpenCVProject/First/image.png";
    Mat image        = imread(pathToImage);

    if (image.empty()) {
        std::cerr << "Ошибка: не удалось загрузить изображение!" << std::endl;
        return -1;
    }

    line(image, {0, 0}, {image.rows, image.cols}, {110, 170, 0}, 10);

    rectangle(image, {0, 0, image.rows, image.cols}, {110, 170, 0}, 5);

    circle(image, {300, 300}, 30, Scalar{110, 170, 0}, 10);

    ellipse(
        image, cv::Point(400, 400), Size(50, 25), 0, 0, 360, Scalar(0, 255, 0),
        10);

    std::vector<cv::Point> points = {{150, 110}, {250, 210}, {450, 10}};
    polylines(image, points, true, cv::Scalar(0, 255, 0), 10);

    putText(
        image, "Last Of Us", Point(274, 100), cv::FONT_HERSHEY_SIMPLEX, 1.5,
        Scalar(0, 255, 0), 5);

    imshow("Image", image);

    cv::waitKey();

    return 0;
}
