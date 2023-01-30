//---------------------------------------------------------------------------

#ifndef MemoryClassH
#define MemoryClassH
#include "Jucator.h"
//---------------------------------------------------------------------------

class MEMORY : public JUCATOR
{
  public :
        int scor;
        void IncarcaNeagra ();
        void CrestereScor ( int &scor );
        void ImagineNeagra ( int id );
};
#endif
