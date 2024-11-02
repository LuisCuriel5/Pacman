#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    int y=frame * frame;
    
    while (true)
    {
        auto can = Canvas(50,50);
        can.DrawPointCircle(10,10,10);
        can.DrawBlock(2,10,10); //ojo izquiero
        can.DrawBlock(8,8,10); //ojo derecho
        can.DrawBlockLine(12,20,12,40); //torso
        can.DrawBlockLine(12,30,30 + frame,15 + frame); //brazo derecho
        can.DrawBlockLine(12,30,-30 - frame,15 - frame); //hombro izquierdo
        can.DrawBlockLine(0,27,27 + frame,5 + frame); //brazo izquierdo





        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element personaje = spinner(7, frame);
        Element lienzo = bgcolor(Color::Yellow, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(.1s);
        frame++;
    }

    return 0;
}