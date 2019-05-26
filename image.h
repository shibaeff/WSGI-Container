#include <wx/wx.h>
#include <wx/image.h>
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;


class Image:public wxImage{
  wxColor pen;
  wxColor fill;
  int w,h;
  public:
   Image(string); 
   Image(int w, int h, wxColor back); 
   ~Image();
   void DrawLine(wxPoint one, wxPoint sec);
   void setPen(wxColor);
   void setFill(wxColor);
   void ColorPoint(wxPoint, wxColor);
   void FillRec(wxPoint, wxColor);
   void saveToFile(string);
};

