#include "opencv2/opencv.hpp"
#include <Windows.h>
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "GetFilenameToSave.h"
#include "OpenFileDialog.h"

using namespace sf;
using namespace cv;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{   sf::Text text;
    sf::Font font;
    Mat img,gray,imgCrop,imgForBlend1,imgForBlend2;
    int w=0;
    int h=0;

    TCHAR openedFileName1[MAX_PATH];
    TCHAR openedFileName2[MAX_PATH];

    RenderWindow window(VideoMode(500, 500), "PJC Projekt", Style::Default);

    while (window.isOpen()) {
        font.loadFromFile(R"(C:\Windows\Fonts\Arial.ttf)");
        text.setFont(font); // font is a sf::Font
        text.setLineSpacing(2.5);
        text.setString("Wcisnij L, aby wybrac zdjecie\nWcisnij C, aby przyciac\nWcisnij B, aby zblendowac"
                       "\nWcisnij S, aby zapisac\nWcisnij W, aby zapisac jako");
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::White);
        text.setStyle(sf::Text::Bold);
        text.setPosition(50, 100);

        window.clear();
        window.draw(text);
        window.display();

        Event e;
        while (window.pollEvent(e)) {
            switch (e.type) {
                case Event::Closed:
                    window.close();
                    break;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)) { //load
            if (OpenFileDialog(openedFileName1))
                std::cout << "File location\\name: " << openedFileName1 << "\n";
            else
                std::cout << "User cancelled the operation\n";

            img = imread(openedFileName1);
            cvtColor(img, gray, COLOR_BGR2GRAY);
            imshow("Picture", img);
            window.clear();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) { //save as
            if (!img.empty()) {
                if (GetFilenameToSave(openedFileName1)) {
                    cv::imwrite(openedFileName1, img);
                }
            }
            if (!imgCrop.empty()) {
                if (GetFilenameToSave(openedFileName1)) {
                    cv::imwrite(openedFileName1, imgCrop);
                }
            }
            if (!imgForBlend1.empty()) {
                if (GetFilenameToSave(openedFileName2)) {
                    cv::imwrite(openedFileName2, imgForBlend1);
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) { //save
            if(!img.empty()){
                imwrite(openedFileName1, img);
            }
            if(!imgCrop.empty()){
                imwrite(openedFileName1, imgCrop);
            }
            if(!imgForBlend1.empty()){
                imwrite(openedFileName2, imgForBlend1);
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) { //crop

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
                w++;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                h++;
            }
            imgCrop.create(img.rows-h,img.cols-w,16);
            if (!img.empty()) {
                for (int i = 0; i < imgCrop.cols; i++) {
                    for (int j = 0; j < imgCrop.rows; j++) {
                        Vec3b &intensity = img.at<Vec3b>(j, i);
                            for (int k = 0; k < imgCrop.channels(); k++) {
                                    imgCrop.at<Vec3b>(j, i) = intensity;
                            }
                        }
                    }
                }
            cvtColor(imgCrop, gray, COLOR_BGR2GRAY);
            imshow("Picture cropped", imgCrop);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::B)) { //blend
            if (OpenFileDialog(openedFileName2))
                std::cout << "File location\\name: " << openedFileName2 << "\n";
            else
                std::cout << "User cancelled the operation\n";
            imgForBlend2 = imread(openedFileName2);
            if (OpenFileDialog(openedFileName2))
                std::cout << "File location\\name: " << openedFileName2 << "\n";
            else
                std::cout << "User cancelled the operation\n";
            imgForBlend1 = imread(openedFileName2);
            if (!imgForBlend1.empty() && !imgForBlend2.empty()) {
                cvtColor(imgForBlend1, gray, COLOR_BGR2GRAY);
                cvtColor(imgForBlend2, gray, COLOR_BGR2GRAY);
                for (int i = 0; i < imgForBlend1.cols; i++) {
                    for (int j = 0; j < imgForBlend1.rows; j++) {
                        Vec3b &intensity = imgForBlend1.at<Vec3b>(j, i);
                        if (imgForBlend2.size().width > i && imgForBlend2.size().height > j) {
                            Vec3b &intensity2 = imgForBlend2.at<Vec3b>(j, i);
                            int a = imgForBlend2.channels();
                            for (int k = 0; k < imgForBlend1.channels(); k++) {
                                if (k <= a) {
                                    intensity.val[k] = (intensity.val[k] + intensity2.val[k]) / 2;
                                    imgForBlend1.at<Vec3b>(j, i) = intensity;
                                }
                            }
                        }
                    }
                }
                imshow("Pictures blendec", imgForBlend1);
            }
        }
    }
    destroyAllWindows();
    return 0;
}
