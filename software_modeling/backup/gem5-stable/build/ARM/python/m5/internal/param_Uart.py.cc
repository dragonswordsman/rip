#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Uart[] = {
    120,156,189,88,235,115,219,198,17,223,3,64,74,164,94,148,
    245,178,45,217,162,147,202,166,61,141,212,186,113,221,153,56,
    158,58,78,58,147,204,88,113,65,103,236,48,153,162,16,113,
    146,64,225,193,1,78,146,153,145,166,157,202,125,124,232,215,
    254,9,253,208,255,166,255,81,187,187,7,128,160,30,157,204,
    52,140,76,158,143,119,123,139,125,252,246,113,232,66,246,87,
    193,239,175,155,0,169,97,0,120,248,17,16,0,132,2,58,
    2,132,20,224,45,194,65,5,146,15,193,171,192,59,128,142,
    1,210,128,51,156,152,240,141,1,209,52,159,169,66,96,242,
    138,128,65,29,164,5,157,10,188,142,230,193,146,85,56,168,
    67,242,123,16,66,68,2,222,120,19,224,77,194,59,228,142,
    147,26,51,156,4,90,172,243,98,13,188,41,94,172,131,55,
    205,147,41,24,52,64,78,67,103,134,200,58,179,200,246,1,
    178,157,99,182,255,38,182,30,238,44,129,55,75,228,40,215,
    215,68,105,17,37,63,111,142,185,52,114,41,231,161,115,45,
    159,47,148,230,139,165,249,82,105,190,92,154,175,148,230,215,
    75,243,27,165,249,205,210,124,181,52,95,43,205,111,149,230,
    183,75,243,245,210,188,89,154,223,225,57,90,225,26,244,222,
    131,222,251,208,251,9,236,162,99,230,11,141,55,64,154,208,
    187,11,157,187,32,241,179,1,103,232,59,239,90,233,196,61,
    62,177,80,156,104,241,137,251,208,185,15,18,63,45,125,162,
    10,237,214,50,226,193,255,15,254,181,4,206,212,52,14,71,
    50,73,253,56,114,252,104,55,246,13,218,175,210,64,232,233,
    210,48,145,193,232,57,193,232,95,192,24,242,140,12,70,167,
    128,140,5,233,18,24,112,202,147,83,3,6,45,56,17,208,
    179,192,51,225,4,31,83,33,1,246,4,156,25,240,173,73,
    4,167,56,90,232,236,219,96,41,141,161,30,59,91,115,154,
    128,211,10,156,84,160,253,230,196,160,133,131,26,36,255,132,
    239,214,152,233,36,51,53,224,4,71,11,206,44,56,173,194,
    107,36,194,165,94,141,212,23,111,78,80,83,92,105,183,44,
    148,118,187,164,46,169,226,249,73,228,134,82,77,225,220,233,
    187,137,27,58,95,185,137,106,213,115,130,56,221,236,187,106,
    223,230,19,38,153,34,236,43,230,20,71,250,216,174,31,121,
    78,24,123,135,129,84,147,196,198,217,245,3,233,56,188,249,
    121,216,143,19,245,89,146,196,137,77,214,228,197,32,118,139,
    19,100,203,110,16,167,178,69,79,227,199,216,196,94,17,245,
    110,159,57,146,0,133,148,158,76,187,137,223,87,232,36,205,
    145,168,137,91,139,220,195,67,250,5,14,91,251,113,40,183,
    14,100,24,202,68,62,220,218,147,225,35,30,62,72,149,187,
    19,200,173,157,67,63,240,182,158,217,47,182,250,3,181,31,
    71,91,184,239,71,74,162,61,130,173,161,37,54,113,247,26,
    241,60,246,247,28,159,181,113,246,101,208,151,201,12,173,222,
    164,231,137,134,152,22,85,97,138,150,152,193,89,5,191,166,
    88,51,166,196,182,79,250,116,73,71,66,145,85,198,13,57,
    83,192,129,1,201,26,161,162,135,31,65,110,68,108,180,105,
    207,224,189,223,146,33,244,106,207,36,95,235,197,19,70,18,
    66,10,41,159,144,115,35,96,56,84,160,87,5,13,19,68,
    151,198,77,50,160,17,201,137,141,129,204,45,72,255,1,104,
    88,4,200,9,100,224,57,51,65,68,13,80,117,202,39,184,
    186,140,15,252,19,227,175,221,34,241,183,25,12,106,223,79,
    227,227,136,77,78,115,142,152,54,90,230,229,224,203,157,158,
    236,170,116,29,23,190,142,15,155,93,55,138,98,213,116,61,
    175,233,42,149,248,59,135,74,166,77,21,55,55,210,22,121,
    209,158,207,241,84,240,27,244,115,252,144,175,17,63,250,135,
    231,119,21,254,88,224,31,236,133,84,42,196,194,126,236,165,
    184,78,44,246,164,178,73,72,69,70,142,89,16,13,104,34,
    165,199,35,221,44,254,126,150,75,194,120,108,85,115,244,164,
    50,216,85,117,6,162,155,166,14,75,66,235,140,57,98,124,
    228,6,135,146,185,35,120,20,10,68,83,45,195,248,80,119,
    157,52,200,21,102,45,162,56,242,6,40,148,223,189,71,207,
    187,206,216,155,102,244,45,33,242,38,112,172,226,255,85,177,
    108,116,173,12,111,213,28,115,148,235,20,176,199,69,230,116,
    196,223,25,230,149,150,193,137,129,21,225,248,123,143,102,116,
    216,94,163,225,22,13,183,105,88,207,117,29,139,194,51,231,
    21,126,76,15,49,88,75,214,135,92,97,230,250,120,35,49,
    116,99,24,67,152,244,218,20,11,6,69,204,48,22,44,74,
    144,201,83,26,145,148,163,204,132,244,21,165,99,138,25,102,
    70,225,129,64,167,217,16,254,108,29,187,65,90,79,230,200,
    181,9,142,101,76,238,149,48,105,147,99,24,144,246,141,60,
    229,57,68,161,161,104,175,18,171,202,37,230,109,210,112,103,
    172,54,30,130,106,239,2,168,62,162,231,53,50,80,205,48,
    152,234,248,109,24,93,51,51,124,81,248,22,206,129,137,144,
    100,93,130,164,187,52,51,47,170,250,99,128,40,83,240,55,
    37,16,145,76,70,89,143,109,156,12,86,72,252,50,124,86,
    176,116,191,142,86,176,26,27,92,141,127,198,213,152,43,58,
    247,89,58,249,154,156,127,245,164,66,118,216,53,97,57,171,
    178,105,13,199,126,18,191,29,52,227,221,166,98,69,41,87,
    62,217,72,55,55,210,143,48,11,54,159,114,254,209,121,80,
    103,186,68,246,41,83,209,209,207,222,118,37,151,56,254,229,
    56,58,49,57,156,164,156,172,116,34,146,150,200,138,70,110,
    94,78,209,169,74,40,51,143,207,192,245,194,192,36,47,49,
    79,235,108,93,83,172,32,106,234,130,197,112,116,26,230,150,
    137,119,241,251,9,89,156,84,149,64,13,183,221,214,66,178,
    252,164,137,253,211,17,100,140,67,122,123,11,217,125,149,35,
    162,58,68,4,125,205,28,217,127,5,238,32,5,252,5,200,
    231,232,218,12,217,69,32,144,147,23,136,252,119,192,33,112,
    73,37,231,28,210,166,234,205,20,152,90,210,199,76,170,11,
    251,23,240,183,82,252,228,229,215,204,122,196,114,249,181,138,
    252,195,96,249,94,37,214,26,77,84,228,145,125,55,37,50,
    157,125,134,33,57,204,235,69,135,135,217,119,44,200,153,212,
    188,29,18,227,219,33,110,168,128,173,138,5,163,132,134,159,
    211,240,176,0,130,200,215,126,104,137,214,225,234,18,235,232,
    124,254,13,61,214,98,65,231,38,184,43,160,195,5,174,43,
    57,174,31,22,184,150,92,114,222,241,205,128,70,131,124,122,
    102,8,188,50,98,111,69,55,52,11,100,5,58,85,138,0,
    110,127,69,22,32,34,79,75,148,196,70,234,25,155,96,91,
    27,167,112,171,246,24,13,111,199,23,238,228,180,39,129,27,
    238,120,238,211,99,226,79,15,233,230,33,99,228,18,55,202,
    18,19,220,197,85,66,243,207,71,185,228,71,227,11,245,95,
    34,187,66,98,6,182,23,119,57,190,95,237,203,102,40,195,
    29,188,234,237,251,253,230,110,224,238,177,15,204,76,163,47,
    115,141,20,59,241,124,47,144,62,160,49,110,118,227,8,179,
    237,97,87,197,73,211,147,120,13,146,94,243,131,38,167,234,
    166,159,54,221,29,220,117,187,74,195,119,52,236,24,72,110,
    178,151,114,39,121,112,76,211,241,250,208,193,27,173,143,141,
    244,0,138,114,168,111,92,69,230,229,22,89,71,3,86,46,
    188,224,168,129,206,58,212,23,216,155,52,220,135,177,39,232,
    15,9,20,196,151,12,83,21,171,70,205,224,146,67,251,47,
    137,50,189,24,123,209,247,137,61,253,162,6,9,100,21,122,
    19,60,78,82,86,238,212,242,197,58,143,83,188,56,157,199,
    234,12,47,206,66,103,46,127,41,212,160,184,173,254,191,113,
    203,33,48,94,240,255,241,7,13,87,251,241,143,39,176,253,
    43,200,74,241,85,161,58,210,197,61,211,161,170,109,142,5,
    123,176,200,202,233,11,0,43,39,94,71,55,177,157,179,184,
    157,123,66,237,220,9,183,124,142,161,59,186,161,171,184,47,
    55,242,112,136,228,177,51,68,158,110,214,200,245,110,191,47,
    35,207,126,0,229,254,139,183,199,103,33,10,195,63,67,169,
    108,154,98,17,27,174,139,40,164,220,82,210,136,209,86,41,
    112,183,54,118,55,254,61,119,99,107,126,36,193,216,79,104,
    104,140,100,19,109,234,149,145,0,119,250,129,171,118,227,36,
    164,22,254,202,61,172,216,250,229,80,182,112,158,16,197,11,
    125,20,240,50,38,197,94,206,36,95,96,35,43,18,219,147,
    129,84,178,228,124,69,130,103,183,61,79,98,106,143,7,216,
    144,115,175,139,191,3,199,25,115,98,252,24,217,253,129,248,
    206,234,196,136,55,179,37,177,100,212,170,53,193,117,229,220,
    203,74,45,8,1,84,247,116,131,212,230,200,154,43,140,206,
    198,203,19,61,185,134,239,26,219,110,168,95,143,240,91,0,
    251,125,200,110,113,246,189,194,111,116,169,229,70,90,95,78,
    48,70,184,230,113,137,179,127,65,235,244,86,44,124,180,153,
    107,178,169,53,121,153,123,202,224,109,117,235,82,170,207,35,
    149,60,199,139,79,18,7,124,91,189,72,209,30,164,74,134,
    106,245,220,166,140,14,67,231,133,12,227,100,240,34,246,164,
    90,59,183,255,204,243,18,219,141,246,164,115,36,169,102,171,
    59,231,9,178,130,173,121,228,84,205,75,101,24,165,189,32,
    139,38,194,77,253,90,140,27,205,139,251,207,131,184,123,32,
    189,140,230,114,115,48,205,167,113,232,226,250,229,79,105,251,
    249,83,230,207,237,123,9,157,90,58,183,154,202,196,119,3,
    255,59,121,133,155,94,101,177,112,133,230,159,184,169,223,125,
    233,199,159,202,35,191,43,175,144,105,184,79,40,203,55,213,
    34,65,238,50,46,132,233,209,37,110,4,88,35,10,0,14,
    187,68,238,249,232,249,132,217,140,82,103,249,249,227,75,146,
    73,249,228,120,67,84,247,202,250,114,254,148,94,250,164,111,
    112,160,183,115,181,185,154,168,26,148,177,77,188,32,207,8,
    203,156,110,212,172,233,169,154,85,155,48,249,53,203,12,94,
    128,234,86,109,106,90,252,239,127,235,24,238,117,99,125,182,
    38,254,11,100,11,236,221,
};

EmbeddedPython embedded_m5_internal_param_Uart(
    "m5/internal/param_Uart.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_Uart.py",
    "m5.internal.param_Uart",
    data_m5_internal_param_Uart,
    2327,
    6869);

} // anonymous namespace