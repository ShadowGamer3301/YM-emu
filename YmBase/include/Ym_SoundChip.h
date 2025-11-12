#pragma once
#include "Ym_Core.h"
#include "Ym_Channel.h"

namespace Ym2612
{
#ifdef PLAT_WIN32
    struct YMAPI SoundChip;
#endif

    struct SoundChip
    {
        bool InitSoundChip();

        Channel ma_Channels[6];
        uint8_t m_LfoEnable_LfoFrequency; // D0 - D2 -> LFO frequency, D3 -> LFO enable
        uint8_t m_TimerAmsb; // Uses whole 8 bits
        uint8_t m_TimerAlsb; // D0 - D1 -> Timer A LSBs
        uint8_t m_TimerB; // Uses whole 8 bits
        uint8_t m_Ch3mode_reset_enable_load; // D0 -> Load A, D1 -> Load B, D2 -> Enable A, D3 -> Enable B, D4 -> Reset A, D5 -> Reset B, D6 - D7 -> Channel 3 mode
        uint8_t m_DAC; //Uses whole 8 bits
        uint8_t m_DACen; //D6 - D7 -> DAC enable
    };
}