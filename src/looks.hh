#include "TGaxis.h"
#include "TH1D.h"
#include "TStyle.h"
#include <iostream>

void fix_hist(TH1D& j)
{
  j.GetXaxis()->CenterTitle();
  j.GetYaxis()->CenterTitle();
}

void looks()
{
  TGaxis::SetMaxDigits(3);    
  gStyle->SetFrameBorderMode(0);
  gStyle->SetFrameFillColor(0);
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetCanvasColor(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetPadColor(0);
  gStyle->SetStatColor(0);
  gStyle->SetTitleFont(22,"");
  gStyle->SetLabelFont(22,"x");
  gStyle->SetTitleFont(22,"x");
  gStyle->SetLabelFont(22,"y");
  gStyle->SetTitleFont(22,"y");
  gStyle->SetLabelFont(22,"z");
  gStyle->SetTitleFont(22,"z");
  gStyle->SetLabelSize(0.048,"x");
  gStyle->SetTitleSize(0.048,"x");
  gStyle->SetLabelSize(0.048,"y");
  gStyle->SetTitleSize(0.048,"y");
  gStyle->SetLabelSize(0.048,"z");
  gStyle->SetTitleSize(0.048,"z");
  gStyle->SetTitleSize(0.048,"");
  gStyle->SetTitleAlign(23);
  gStyle->SetTitleX(0.5);
  gStyle->SetTitleBorderSize(0);
  gStyle->SetTitleFillColor(0);
  gStyle->SetTitleStyle(0);
  gStyle->SetOptStat("emr");
  gStyle->SetStatBorderSize(0);
  gStyle->SetStatFont(22);
  gStyle->SetStatFontSize(0.048);
  gStyle->SetStatY(0.9);
  gStyle->SetStatX(0.86);
  gStyle->SetHistLineColor(kBlue+2);
  gStyle->SetLegendBorderSize(0);
  gStyle->SetLegendFillColor(0);
  gStyle->SetFuncWidth(2);
  gStyle->SetFuncColor(2);
  gStyle->SetPadTopMargin(0.08);
  gStyle->SetPadBottomMargin(0.142);
  gStyle->SetPadLeftMargin(0.12);
  gStyle->SetPadRightMargin(0.12);  
  gStyle->SetCanvasDefX(400);
  gStyle->SetCanvasDefY(20);
  gStyle->SetCanvasDefH(420);
  gStyle->SetCanvasDefW(610);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetFrameLineWidth(2);
  gStyle->SetHistLineWidth(2);
  gStyle->SetTitleOffset(1.07,"y");
  gStyle->SetTitleOffset(1.14,"x");
}
