/*
  Yurikleb_DRV2667.h - Library for controling the TI - DRV2667 Hapic Piezo Driver
  Created by Yuri Klenaov, January, 2016. (yurikleb.com)
  Released into the public domain.
  For more information see the DRV2667 Datasheet http://www.ti.com/lit/ds/symlink/drv2667.pdf
*/

#ifndef Yurikleb_DRV2667_h
#define Yurikleb_DRV2667_h


#include "core.h"

#define DRV2667_ADDR 0x59 //The DRV2667 Chip default I2C address.

class Yurikleb_DRV2667
{
  public:
    Yurikleb_DRV2667(void);
    void begin(void);

	void playWave(int WaveForm[][4], int WavesNumber);
	void setToAnalogInput();
	void writeRegisterBytes(int reg, int val);
	void i2c_Scan(void);
	

  private:

};

#endif

