#include <iostream>
#include <string>
#include <cstdlib> 
#include "linked_list.hpp"
#include "image.h"


using namespace std;

void prepare_image(Image &im) {
// цветт заливки
 im.setFill(wxColor(0, 0, 0));
// цвет линий
 im.setPen(wxColor(0, 0, 0));
// рисование линий
 
 im.DrawLine(wxPoint(20,20),wxPoint(60,20));
 im.DrawLine(wxPoint(20,20),wxPoint(20,60));
 im.DrawLine(wxPoint(20,60),wxPoint(60,60));
 im.DrawLine(wxPoint(60,20),wxPoint(60,60));
// закраска прямоугольника, если точка внутри.
// снаружи красить не умеет
 im.FillRec(wxPoint(30,30), wxColor(0,0,0));


 im.DrawLine(wxPoint(120,120),wxPoint(160,120));
 im.DrawLine(wxPoint(120,120),wxPoint(120,160));
 im.DrawLine(wxPoint(120,160),wxPoint(160,160));
 im.DrawLine(wxPoint(160,120),wxPoint(160,160));
 im.FillRec(wxPoint(130,130), wxColor(0,0,0));

// сохранить в файл
 
}


Example example;

example.add_one();
example.add_one();
g++ -o myprg image.cpp main.cpp ` wx-config —cflags —libs` && sudo ./myprg

void test_image_container() {
     wxInitAllImageHandlers();
    // стандартный объект класса string для имени файла
    string file("file.png");
    // создание изображения из файла
    Image im(file);
    // файл для новой картинки
    string s = "f1.png";
    prepare_image(im);

    // КОНТЕЙНЕР С ПРЯМОУГОЛЬНИКАМИ
    List<wxRect> rect_list;

    // КИДАЕМ В НЕГО ПРЯМОУГОЛЬНИКИ
    rect_list.push_back(wxRect(60, 20, 40, 40));
    rect_list.push_back(wxRect(160, 120, 40, 40));

    // ПЕРЕКРАШИВАЕМ ИХ
//    for (auto it = rect_list.begin(); ...  )
    for (vector<int>::)
    for (auto rect: rect_list) {
        auto point = rect.GetBottomLeft();
        cout << point.y;
        im.FillRec(wxPoint(point.x - 1, point.y + 1), wxColor(rand() % 255, rand() % 255, rand() % 255));
    }
    im.saveToFile(s); 
}

void test_container() {
    // конструктор контейнера с произвольным типом
    List<wxRect> rect_list;

    // добавление
    rect_list.push_back(wxRect(1, 1, 2, 4));
    rect_list.push_back(wxRect(1, 1, 2, 4));


    auto it = rect_list.begin();
    it++;
    auto first_rect = (*it);
    // фильтр по критерию
    // критерий сделан через лямбда-функцию
    // лямбда возвращает True/False
    // все трушные элементы возвращаются в контейнер res
    // данная лямбда фильтрует прямоугольники с шириной больше 1
    [] (wxRect rect) {
        return rect.GetWidth() * rect.GetHeight() > 6;
    }
    auto res = rect_list.lambda_filter(
            [](wxRect x) {
        return x.GetWidth() > 1;
    });

    cout <<"Искомая ширина: " <<(*res.begin()).GetWidth() << endl;

    // удаление по критерию
    // фильтруем все широкие прямоуготльники
     rect_list.lambda_remove([](wxRect x) {
        return x.GetWidth() > 1;
    });

     List<wxPoint> point_list;
     List<wxLine> line_list;
    cout << (*res.begin()).GetWidth();
}
int main(int argc, char *argv[])
{
    test_container();
    test_image_container();
    return 0;
}