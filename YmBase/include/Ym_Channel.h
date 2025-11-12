#pragma once
#include "Ym_Core.h"
#include "Ym_Operator.h"

namespace Ym2612 {

    struct Channel
    {
        Operator ma_Operators[4];
        uint8_t m_FrequencyNumberLSB; //Uses whole 8 bits
        uint8_t m_FrequencyNumberMSB_Block; // D0 - D2 -> frequency number msb, D3 - D5 -> block
        uint8_t m_Ch3SupplementaryFrequencyNumber; //Uses whole 8 bits
        uint8_t m_Ch3SupplementaryBlock_Ch3SupplementaryFrequencyNumber; // D0 - D2 - Channel 3 supplementary frequency number, D3 - D5 -> Channel 3 supplementary block
    };

}