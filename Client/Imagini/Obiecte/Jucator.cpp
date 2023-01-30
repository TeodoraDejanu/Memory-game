//---------------------------------------------------------------------------


#pragma hdrstop
#include "JocMemory.h"
#include "Jucator.h"
#include "JocMemory.h"
#include <algorithm.h>

//---------------------------------------------------------------------------

void JUCATOR :: RandomImagini ()
{
    srand ( ( int ) time ( 0 ) );
    int w[17];
    for ( int i = 1; i <= 16; i ++ )
        w[i] = 2;
    int r = 1, i = 1;
    while ( i <= 32 )
    {
        while ( w[r] == 0 )
             r = rand() % 16 + 1;
        if ( w[r] != 0 )
        {
                a[i] = r;
                w[r] --;
                r = rand() % 16 + 1;
        }
        i ++;
    }
}

void JUCATOR :: PuneImaginea ( int a, int i )
{
  switch ( i )
  {
    case ( 1 ) : {
        if ( a == 1 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image1 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 2 ) : {
        if ( a == 1 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image2 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 3 ) : {
        if ( a == 1 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image3 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 4 ) : {
        if ( a == 1 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image4 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 5 ) : {
        if ( a == 1 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image5 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 6 ) : {
        if ( a == 1 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image6 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 7 ) : {
        if ( a == 1 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image7 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 8 ) : {
        if ( a == 1 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image8 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 9 ) : {
        if ( a == 1 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image9 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 10 ) : {
        if ( a == 1 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image10 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 11 ) : {
        if ( a == 1 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image11 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 12 ) : {
        if ( a == 1 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image12 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 13 ) : {
        if ( a == 1 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image13 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 14 ) : {
        if ( a == 1 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image14 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 15 ) : {
        if ( a == 1 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image15 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 16 ) : {
        if ( a == 1 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image16 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 17 ) : {
        if ( a == 1 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image17 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 18 ) : {
        if ( a == 1 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image18 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 19 ) : {
        if ( a == 1 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image19 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 20 ) : {
        if ( a == 1 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image20 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 21 ) : {
        if ( a == 1 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image21 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 22 ) : {
        if ( a == 1 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image22 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 23 ) : {
        if ( a == 1 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image23 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 24 ) : {
        if ( a == 1 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image24 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 25 ) : {
        if ( a == 1 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image25 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 26 ) : {
        if ( a == 1 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image26 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

     case ( 27 ) : {
        if ( a == 1 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image27 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
     }

    case ( 28 ) : {
        if ( a == 1 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image28 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 29 ) : {
        if ( a == 1 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image29 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 30 ) : {
        if ( a == 1 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image30 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 31 ) : {
        if ( a == 1 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image31 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }

    case ( 32 ) : {
        if ( a == 1 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/1.jpg" );
        if ( a == 2 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/2.jpg" );
        if ( a == 3 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/3.jpg" );
        if ( a == 4 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/4.jpg" );
        if ( a == 5 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/5.jpg" );
        if ( a == 6 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/6.jpg" );
        if ( a == 7 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/7.jpg" );
        if ( a == 8 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/8.jpg" );
        if ( a == 9 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/9.jpg" );
        if ( a == 10 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/10.jpg" );
        if ( a == 11 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/11.jpg" );
        if ( a == 12 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/12.jpg" );
        if ( a == 13 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/13.jpg" );
        if ( a == 14 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/14.jpg" );
        if ( a == 15 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/15.jpg" );
        if ( a == 16 )
                Form1 -> Image32 -> Picture -> LoadFromFile ( "Imagini/16.jpg" );
        break;
    }
  }
}

#pragma package(smart_init)
