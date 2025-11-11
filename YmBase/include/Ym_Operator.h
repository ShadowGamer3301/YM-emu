#pragma once
#include "Ym_Core.h"

namespace Ym2612 {
    struct Operator
    {
        uint8_t m_Detune_Multiple; //D0 - D3 -> MUL, D4 - D6 -> DT1
        uint8_t m_TotalLevel; //D0 - D6 -> TL
        uint8_t m_RateScaling_AttackRate; //D0 - D4 -> AR, D6-D7 -> RS
        uint8_t m_FirstDecayRate_AmplitudeModulation; //D0 - D4 -> D1R, D7 -> AM
        uint8_t m_SecondaryDecayRate; //D0 - D4 -> D2R
        uint8_t m_SecondaryAmplitude_ReleaseRate; //D0 - D3 -> RR, D4 -> D7 -> D1L
        uint8_t m_Proprietary; //D0 -> D3 -> SSG-EG
    };
}