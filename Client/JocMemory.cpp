//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "MemoryClass.h"
#include "JocMemory.h"
#include "Jucator.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        ShowMessage ( "Ai fost ales ca Jucatorul 2 !" );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnExitClick(TObject *Sender)
{
        exit ( 0 );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnStartClick(TObject *Sender)
{
     x = new MEMORY;
     x -> scor = 0;
     btnStart -> Visible = false;
     x -> id1 = 0;
     x -> id2 = 0;
     Timer -> Enabled = true;
     x -> RandomImagini ();
     for ( int i = 1; i <= 32; i ++ )
        x -> PuneImaginea ( x -> a[i], i );

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TimerTimer(TObject *Sender)
{
     x -> IncarcaNeagra ();
     Timer -> Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
    if ( x -> a[1] == 1 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[1] == 2 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[1] == 3 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[1] == 4 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[1] == 5 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[1] == 6 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[1] == 7 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[1] == 8 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[1] == 9 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[1] == 10 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[1] == 11 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[1] == 12 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[1] == 13 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[1] == 14 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[1] == 15 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[1] == 16 )
        Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 1;
    else
        x -> id2 = 1;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}

void __fastcall TForm1::Image2Click(TObject *Sender)
{
    if ( x -> a[2] == 1 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[2] == 2 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[2] == 3 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[2] == 4 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[2] == 5 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[2] == 6 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[2] == 7 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[2] == 8 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[2] == 9 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[2] == 10 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[2] == 11 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[2] == 12 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[2] == 13 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[2] == 14 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[2] == 15 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[2] == 16 )
        Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 2;
    else
        x -> id2 = 2;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    if ( x -> a[x -> id1] != x -> a[x -> id2] ) {
        x -> ImagineNeagra ( x -> id1 );
        x -> ImagineNeagra ( x -> id2 );
    }
    else
    {
       x -> CrestereScor ( x -> scor );
       Form1 -> Label1 -> Caption = IntToStr ( x -> scor );
       int n = x -> id1 * 100 + x -> id2;
       String s = IntToStr ( n );
       ClientSocket -> Socket -> SendText ( s );
    }
    x -> id1 = 0;
    x -> id2 = 0;
    Form1 -> Timer1 -> Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
    if ( x -> a[3] == 1 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[3] == 2 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[3] == 3 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[3] == 4 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[3] == 5 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[3] == 6 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[3] == 7 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[3] == 8 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[3] == 9 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[3] == 10 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[3] == 11 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[3] == 12 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[3] == 13 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[3] == 14 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[3] == 15 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[3] == 16 )
        Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 3;
    else
        x -> id2 = 3;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
    if ( x -> a[4] == 1 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[4] == 2 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[4] == 3 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[4] == 4 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[4] == 5 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[4] == 6 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[4] == 7 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[4] == 8 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[4] == 9 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[4] == 10 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[4] == 11 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[4] == 12 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[4] == 13 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[4] == 14 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[4] == 15 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[4] == 16 )
        Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 4;
    else
        x -> id2 = 4;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image5Click(TObject *Sender)
{
    if ( x -> a[5] == 1 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[5] == 2 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[5] == 3 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[5] == 4 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[5] == 5 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[5] == 6 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[5] == 7 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[5] == 8 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[5] == 9 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[5] == 10 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[5] == 11 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[5] == 12 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[5] == 13 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[5] == 14 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[5] == 15 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[5] == 16 )
        Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 5;
    else
        x -> id2 = 5;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
    if ( x -> a[6] == 1 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[6] == 2 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[6] == 3 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[6] == 4 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[6] == 5 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[6] == 6 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[6] == 7 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[6] == 8 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[6] == 9 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[6] == 10 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[6] == 11 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[6] == 12 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[6] == 13 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[6] == 14 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[6] == 15 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[6] == 16 )
        Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 6;
    else
        x -> id2 = 6;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
    if ( x -> a[7] == 1 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[7] == 2 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[7] == 3 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[7] == 4 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[7] == 5 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[7] == 6 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[7] == 7 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[7] == 8 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[7] == 9 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[7] == 10 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[7] == 11 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[7] == 12 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[7] == 13 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[7] == 14 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[7] == 15 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[7] == 16 )
        Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 7;
    else
        x -> id2 = 7;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{                     
    if ( x -> a[8] == 1 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[8] == 2 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[8] == 3 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[8] == 4 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[8] == 5 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[8] == 6 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[8] == 7 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[8] == 8 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[8] == 9 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[8] == 10 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[8] == 11 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[8] == 12 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[8] == 13 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[8] == 14 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[8] == 15 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[8] == 16 )
        Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 8;
    else
        x -> id2 = 8;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
    if ( x -> a[9] == 1 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[9] == 2 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[9] == 3 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[9] == 4 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[9] == 5 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[9] == 6 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[9] == 7 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[9] == 8 )
        Form1 -> Image9-> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[9] == 9 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[9] == 10 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[9] == 11 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[9] == 12 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[9] == 13 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[9] == 14 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[9] == 15 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[9] == 16 )
        Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 9;
    else
        x -> id2 = 9;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
    if ( x -> a[10] == 1 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[10] == 2 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[10] == 3 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[10] == 4 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[10] == 5 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[10] == 6 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[10] == 7 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[10] == 8 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[10] == 9 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[10] == 10 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[10] == 11 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[10] == 12 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[10] == 13 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[10] == 14 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[10] == 15 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[10] == 16 )
        Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 10;
    else
        x -> id2 = 10;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11Click(TObject *Sender)
{
    if ( x -> a[11] == 1 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[11] == 2 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[11] == 3 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[11] == 4 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[11] == 5 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[11] == 6 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[11] == 7 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[11] == 8 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[11] == 9 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[11] == 10 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[11] == 11 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[11] == 12 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[11] == 13 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[11] == 14 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[11] == 15 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[11] == 16 )
        Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 11;
    else
        x -> id2 = 11;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
    if ( x -> a[12] == 1 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[12] == 2 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[12] == 3 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[12] == 4 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[12] == 5 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[12] == 6 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[12] == 7 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[12] == 8 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[12] == 9 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[12] == 10 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[12] == 11 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[12] == 12 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[12] == 13 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[12] == 14 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[12] == 15 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[12] == 16 )
        Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 12;
    else
        x -> id2 = 12;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
    if ( x -> a[13] == 1 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[13] == 2 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[13] == 3 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[13] == 4 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[13] == 5 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[13] == 6 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[13] == 7 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[13] == 8 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[13] == 9 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[13] == 10 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[13] == 11 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[13] == 12 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[13] == 13 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[13] == 14 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[13] == 15 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[13] == 16 )
        Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 13;
    else
        x -> id2 = 13;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
    if ( x -> a[14] == 1 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[14] == 2 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[14] == 3 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[14] == 4 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[14] == 5 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[14] == 6 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[14] == 7 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[14] == 8 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[14] == 9 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[14] == 10 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[14] == 11 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[14] == 12 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[14] == 13 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[14] == 14 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[14] == 15 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[14] == 16 )
        Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 14;
    else
        x -> id2 = 14;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
    if ( x -> a[15] == 1 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[15] == 2 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[15] == 3 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[15] == 4 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[15] == 5 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[15] == 6 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[15] == 7 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[15] == 8 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[15] == 9 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[15] == 10 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[15] == 11 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[15] == 12 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[15] == 13 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[15] == 14 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[15] == 15 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[15] == 16 )
        Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 15;
    else
        x -> id2 = 15;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
    if ( x -> a[16] == 1 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[16] == 2 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[16] == 3 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[16] == 4 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[16] == 5 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[16] == 6 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[16] == 7 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[16] == 8 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[16] == 9 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[16] == 10 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[16] == 11 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[16] == 12 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[16] == 13 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[16] == 14 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[16] == 15 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[16] == 16 )
        Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 16;
    else
        x -> id2 = 16;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image17Click(TObject *Sender)
{
    if ( x -> a[17] == 1 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[17] == 2 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[17] == 3 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[17] == 4 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[17] == 5 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[17] == 6 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[17] == 7 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[17] == 8 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[17] == 9 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[17] == 10 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[17] == 11 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[17] == 12 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[17] == 13 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[17] == 14 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[17] == 15 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[17] == 16 )
        Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 17;
    else
        x -> id2 = 17;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image18Click(TObject *Sender)
{
    if ( x -> a[18] == 1 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[18] == 2 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[18] == 3 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[18] == 4 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[18] == 5 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[18] == 6 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[18] == 7 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[18] == 8 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[18] == 9 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[18] == 10 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[18] == 11 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[18] == 12 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[18] == 13 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[18] == 14 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[18] == 15 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[18] == 16 )
        Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 18;
    else
        x -> id2 = 18;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image19Click(TObject *Sender)
{
    if ( x -> a[19] == 1 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[19] == 2 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[19] == 3 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[19] == 4 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[19] == 5 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[19] == 6 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[19] == 7 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[19] == 8 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[19] == 9 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[19] == 10 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[19] == 11 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[19] == 12 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[19] == 13 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[19] == 14 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[19] == 15 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[19] == 16 )
        Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 19;
    else
        x -> id2 = 19;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image20Click(TObject *Sender)
{
    if ( x -> a[20] == 1 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[20] == 2 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[20] == 3 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[20] == 4 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[20] == 5 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[20] == 6 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[20] == 7 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[20] == 8 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[20] == 9 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[20] == 10 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[20] == 11 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[20] == 12 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[20] == 13 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[20] == 14 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[20] == 15 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[20] == 16 )
        Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 20;
    else
        x -> id2 = 20;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image21Click(TObject *Sender)
{
    if ( x -> a[21] == 1 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[21] == 2 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[21] == 3 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[21] == 4 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[21] == 5 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[21] == 6 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[21] == 7 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[21] == 8 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[21] == 9 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[21] == 10 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[21] == 11 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[21] == 12 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[21] == 13 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[21] == 14 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[21] == 15 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[21] == 16 )
        Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 21;
    else
        x -> id2 = 21;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image22Click(TObject *Sender)
{
    if ( x -> a[22] == 1 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[22] == 2 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[22] == 3 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[22] == 4 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[22] == 5 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[22] == 6 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[22] == 7 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[22] == 8 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[22] == 9 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[22] == 10 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[22] == 11 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[22] == 12 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[22] == 13 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[22] == 14 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[22] == 15 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[22] == 16 )
        Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 22;
    else
        x -> id2 = 22;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image23Click(TObject *Sender)
{
    if ( x -> a[23] == 1 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[23] == 2 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[23] == 3 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[23] == 4 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[23] == 5 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[23] == 6 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[23] == 7 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[23] == 8 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[23] == 9 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[23] == 10 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[23] == 11 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[23] == 12 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[23] == 13 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[23] == 14 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[23] == 15 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[23] == 16 )
        Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 23;
    else
        x -> id2 = 23;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image24Click(TObject *Sender)
{
    if ( x -> a[24] == 1 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[24] == 2 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[24] == 3 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[24] == 4 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[24] == 5 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[24] == 6 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[24] == 7 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[24] == 8 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[24] == 9 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[24] == 10 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[24] == 11 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[24] == 12 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[24] == 13 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[24] == 14 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[24] == 15 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[24] == 16 )
        Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 24;
    else
        x -> id2 = 24;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image25Click(TObject *Sender)
{
    if ( x -> a[25] == 1 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[25] == 2 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[25] == 3 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[25] == 4 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[25] == 5 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[25] == 6 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[25] == 7 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[25] == 8 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[25] == 9 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[25] == 10 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[25] == 11 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[25] == 12 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[25] == 13 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[25] == 14 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[25] == 15 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[25] == 16 )
        Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

   if ( x -> id1 ==0 )
        x -> id1 = 25;
    else
        x -> id2 = 25;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image26Click(TObject *Sender)
{
    if ( x -> a[26] == 1 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[26] == 2 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[26] == 3 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[26] == 4 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[26] == 5 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[26] == 6 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[26] == 7 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[26] == 8 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[26] == 9 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[26] == 10 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[26] == 11 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[26] == 12 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[26] == 13 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[26] == 14 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[26] == 15 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[26] == 16 )
        Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 26;
    else
        x -> id2 = 26;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image27Click(TObject *Sender)
{
    if ( x -> a[27] == 1 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[27] == 2 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[27] == 3 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[27] == 4 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[27] == 5 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[27] == 6 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[27] == 7 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[27] == 8 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[27] == 9 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[27] == 10 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[27] == 11 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[27] == 12 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[27] == 13 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[27] == 14 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[27] == 15 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[27] == 16 )
        Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 27;
    else
        x -> id2 = 27;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image28Click(TObject *Sender)
{
    if ( x -> a[28] == 1 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[28] == 2 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[28] == 3 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[28] == 4 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[28] == 5 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[28] == 6 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[28] == 7 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[28] == 8 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[28] == 9 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[28] == 10 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[28] == 11 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[28] == 12 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[28] == 13 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[28] == 14 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[28] == 15 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[28] == 16 )
        Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 28;
    else
        x -> id2 = 28;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image29Click(TObject *Sender)
{
    if ( x -> a[29] == 1 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[29] == 2 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[29] == 3 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[29] == 4 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[29] == 5 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[29] == 6 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[29] == 7 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[29] == 8 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[29] == 9 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[29] == 10 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[29] == 11 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[29] == 12 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[29] == 13 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[29] == 14 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[29] == 15 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[29] == 16 )
        Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 29;
    else
        x -> id2 = 29;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image30Click(TObject *Sender)
{
    if ( x -> a[30] == 1 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[30] == 2 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[30] == 3 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[30] == 4 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[30] == 5 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[30] == 6 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[30] == 7 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[30] == 8 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[30] == 9 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[30] == 10 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[30] == 11 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[30] == 12 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[30] == 13 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[30] == 14 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[30] == 15 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[30] == 16 )
        Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 30;
    else
        x -> id2 = 30;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image31Click(TObject *Sender)
{
    if ( x -> a[31] == 1 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[31] == 2 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[31] == 3 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[31] == 4 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[31] == 5 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[31] == 6 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[31] == 7 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[31] == 8 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[31] == 9 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[31] == 10 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[31] == 11 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[31] == 12 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[31] == 13 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[31] == 14 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[31] == 15 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[31] == 16 )
        Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 31;
    else
        x -> id2 = 31;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image32Click(TObject *Sender)
{
    if ( x -> a[32] == 1 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
    if ( x -> a[32] == 2 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
    if ( x -> a[32] == 3 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
    if ( x -> a[32] == 4 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
    if ( x -> a[32] == 5 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
    if ( x -> a[32] == 6 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
    if ( x -> a[32] == 7 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
    if ( x -> a[32] == 8 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
    if ( x -> a[32] == 9 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
    if ( x -> a[32] == 10 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
    if ( x -> a[32] == 11 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
    if ( x -> a[32] == 12 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
    if ( x -> a[32] == 13 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
    if ( x -> a[32] == 14 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
    if ( x -> a[32] == 15 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
    if ( x -> a[32] == 16 )
        Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );

    if ( x -> id1 ==0 )
        x -> id1 = 32;
    else
        x -> id2 = 32;
    if ( x -> id2 != 0 )
        Form1 -> Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnConnectClick(TObject *Sender)
{
        Form1 -> ClientSocket -> Active = false;
        Form1 -> ClientSocket -> Address = "192.168.0.101";
        Form1 -> ClientSocket -> Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocketConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
        ShowMessage ( "Te-ai conectat la server" );
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocketRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        String s = Socket -> ReceiveText ();
        Form1 -> Label2 -> Caption = s;
        int n = StrToInt ( s );
        int c = n / 100, k = n % 100;
        x -> PuneImaginea ( x -> a[c], c );
        x -> PuneImaginea ( x -> a[k], k );
}
//---------------------------------------------------------------------------







