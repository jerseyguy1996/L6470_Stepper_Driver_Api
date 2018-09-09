#ifndef dSpin_H_
#define dSpin_H_

#include <Arduino.h>
#include <SPI.h>
#include "cL6470.h"

class dSpin {
    public:
             
         //Default constuctot
         dSpin();
         
         //Overload Constructor
         //@param int MOSI, int MISO, int CS, int CLK, int BUSY, int RESET
         dSpin(int,int ,int ,int ,int ,int );
         void init();
           unsigned long _GetParam(byte);
         byte _Data_To_Transfer(byte);
           unsigned long _ParamHandler(byte , unsigned long );
         void  _SetParam(byte , unsigned long );
         unsigned long _Param(unsigned long, byte);
         int _GetStatus();
         unsigned long _SpdCalc(float); 
         unsigned long _IntSpdCalc(float);  
         unsigned long _FSCalc(float);  
         unsigned long _MinSpdCalc(float);  
         unsigned long _MaxSpdCalc(float);
         unsigned long _DecCalc(float);
         unsigned long _AccCalc(float);
        void _SetLSPDOpt(boolean);
        void _Run(byte, unsigned long);
        void _Step_Clock(byte);
        void _Move(byte, unsigned long);
        void _GoTo(unsigned long);
        void _GoTo_DIR(byte, unsigned long);
        void _GoUntil(byte, byte, unsigned long);
        void _ReleaseSW(byte, byte);
        void _GoHome();
        void _GoMark();
        void _ResetPos();
        void _ResetDev();
        void _SoftStop();
        void _HardStop();
        void _SoftHiZ();
        void _HardHiZ();
        
        
        //@param int MOSI 
        void _Set_MOSI(int);
        //@param int MISO 
        void _Set_MISO(int);
        //@param int CS 
        void _Set_CS(int );
        //@param int CLK  
        void _Set_CLK(int); 
        //@param int BUSY 
        void _Set_BUSY(int ); 
        //@param int RESET
        void _Set_RESET(int); 
        
        
        
        int _Get_MOSI();
        int _Get_MISO();
        int _Get_CS();
        int _Get_CLK();
        int _Get_BUSY();
        int _Get_RESET();
        
        
    private:
        // Member Variable
        
        int _MOSI  = 0;
        int _MISO  = 0;
        int _CS    = 0;
        int _CLK   = 0;
        int _BUSY  = 0;
        int _RESET = 0;
      };
        

#endif
