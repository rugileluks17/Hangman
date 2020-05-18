
#ifndef bandome_h
#define bandome_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Wizard.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <FL/fl_message.H>
#include <stdio.h>
#include <string>
#include <FL/Fl_Input_.H>
#include <FL/fl_draw.H>
using namespace std;

struct Informacija
{
    Fl_Input* name;
    string failas;
    string Vardai[100];
};

struct Zodynelis
{
    string Zodis_4[150];
    string Zodis_5[1500];
    string Zodis_7[1300];
    string failas_4;
    string failas_5;
    string failas_7;
    string zodis_4;
    string zodis_5;
    string zodis_7;
    char word_4[10];
    char word_5[10];
    char word_7[10];
};

class DrawHangman : public Fl_Widget {
public:
    DrawHangman(int X, int Y, int W, int H, const char* L = 0) : Fl_Widget(X, Y, W, H, L) {
    }
    void draw() {
        // default kartuves
        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(50, 150, 50, 400);

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(10, 400, 95, 400);

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(50, 150, 190, 150);

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(110, 150, 50, 210);

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(160, 150, 160, 210);

        //jau piesiame kuneli

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_circle(160, 233, 23); //galva

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(160, 255, 160, 340); //kunas

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(160, 270, 130, 330); //pirma ranka

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(160, 270, 190, 330); //antra ranka


        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(160, 339, 130, 400); //pirma koja

        fl_color(FL_BLACK);
        fl_line_style(0, 3);
        fl_line(160, 339, 190, 400); //antra koja
    }

};



void next_cb(Fl_Widget*,void*);
void done_cb(Fl_Widget*, void*);
void back_cb(Fl_Widget*, void*);
void easyButton_cb(Fl_Widget*, void*);
void mediumButton_cb(Fl_Widget*, void*);
void hardButton_cb(Fl_Widget*, void*);
void isnaujo_cb(Fl_Widget*, void*);
void geriausiulentele_cb(Fl_Widget*,void*);
void geriausiulentelegrizti_cb(Fl_Widget*,void*);
void skaitymasVardu(string Vardai[]);
void rasymasVardu_cb(Fl_Widget* w, void* param);
void skaitymasZodis_4(string Zodis_4[], string &zodis_4);
void skaitymasZodis_5(string Zodis_5[], string &zodis_5);
void skaitymasZodis_7(string Zodis_7[], string &zodis_7);
void konvertavimas_4(string zodis_4, char word_4[]);
void konvertavimas_5(string zodis_5, char word_5[]);
void konvertavimas_7(string zodis_7, char word_7[]);
#endif

