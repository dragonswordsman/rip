#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_Enum[] = {
    120,156,189,87,91,111,27,85,16,158,179,187,118,98,199,110,
    156,134,38,45,13,173,1,21,44,4,49,148,75,145,90,85,
    92,84,164,246,33,192,26,212,52,173,88,156,221,147,120,29,
    123,215,218,61,105,107,228,188,144,10,248,3,252,4,30,248,
    55,252,33,4,243,205,238,218,238,5,137,7,76,148,157,156,
    157,51,59,103,46,223,204,156,248,148,255,148,248,249,164,73,
    148,254,201,139,128,127,21,13,136,134,138,246,20,41,173,40,
    104,208,81,137,146,15,40,40,209,19,162,61,139,180,69,167,
    188,176,233,190,69,81,77,190,41,211,192,22,142,162,113,149,
    180,67,123,37,186,27,173,145,163,203,116,84,165,228,123,82,
    74,69,138,118,131,37,10,150,233,9,107,231,69,69,20,46,
    19,152,85,97,86,40,88,17,102,149,130,154,44,86,104,220,
    32,93,163,189,58,196,246,206,176,218,183,88,237,170,168,253,
    3,106,3,222,89,163,224,12,196,217,174,123,144,116,32,41,
    231,173,138,22,86,97,83,127,13,244,20,110,241,203,89,218,
    59,43,220,117,218,91,135,7,157,214,89,142,64,248,23,255,
    180,20,175,76,141,201,67,157,164,97,28,121,97,116,16,135,
    22,246,203,32,8,156,15,178,148,71,240,115,68,240,119,146,
    240,5,86,30,193,19,34,133,119,162,129,69,39,178,56,177,
    104,220,162,137,162,190,67,129,77,19,62,166,4,147,14,21,
    157,90,244,192,134,192,9,83,135,253,188,68,142,201,194,215,
    23,63,51,77,75,116,82,162,73,137,58,187,19,11,140,163,
    10,37,191,209,15,91,162,116,89,148,90,52,97,234,208,169,
    67,39,101,186,203,66,204,234,87,16,29,181,59,97,79,153,
    211,105,57,108,237,206,156,187,112,37,8,147,168,59,212,166,
    202,107,79,71,199,67,239,22,147,86,181,216,143,211,237,81,
    215,244,92,249,192,70,36,134,35,35,138,226,72,155,21,94,
    28,132,81,224,13,227,224,120,160,205,50,180,120,7,225,64,
    123,158,108,222,30,142,226,196,220,74,146,56,113,17,76,97,
    14,226,238,244,11,132,210,31,196,169,110,225,52,57,198,133,
    122,3,233,131,145,104,132,1,98,36,62,14,116,234,39,225,
    200,112,142,50,141,144,134,182,22,178,35,36,189,205,164,221,
    139,135,186,125,164,135,67,157,232,171,237,67,61,252,80,200,
    59,169,233,238,15,116,123,255,56,28,4,237,221,143,63,106,
    143,198,166,23,71,109,222,15,35,163,57,28,131,246,52,16,
    219,188,9,144,164,143,194,67,47,20,103,188,158,30,140,116,
    82,7,247,101,28,167,26,170,166,202,202,86,45,85,231,85,
    137,31,91,109,89,43,106,39,132,59,62,92,4,134,156,121,
    212,32,149,138,142,44,74,182,128,137,62,255,42,36,145,145,
    209,193,158,37,123,95,35,14,25,183,111,35,211,25,115,34,
    56,98,64,177,228,13,164,54,34,1,67,137,250,101,202,64,
    194,216,202,80,147,140,65,89,28,106,44,86,238,80,250,43,
    113,92,25,30,19,202,161,115,106,147,138,26,196,40,224,66,
    98,238,6,31,248,163,160,175,211,130,249,59,130,5,211,11,
    211,248,81,36,17,199,90,234,165,195,145,249,106,252,229,126,
    95,251,38,189,204,140,123,241,113,211,239,70,81,108,154,221,
    32,104,118,141,73,194,253,99,163,211,166,137,155,87,210,22,
    146,232,174,21,112,154,234,27,143,10,248,32,213,12,159,236,
    37,8,125,195,47,235,242,34,89,72,181,97,40,244,226,32,
    101,62,84,28,106,227,194,72,131,32,199,98,136,32,197,131,
    40,142,103,185,51,252,254,105,97,137,192,177,85,46,192,147,
    234,193,129,224,223,31,116,211,212,19,75,192,23,200,65,241,
    195,238,224,88,139,118,198,142,97,131,176,204,108,88,24,232,
    206,195,129,194,95,113,34,138,163,96,204,54,133,254,155,56,
    238,188,64,175,38,224,59,199,192,91,98,90,230,191,101,181,
    97,249,78,14,183,114,1,185,13,56,75,146,112,149,231,156,
    225,119,202,77,165,101,73,87,16,63,164,250,94,195,10,31,
    187,91,32,175,128,92,2,185,92,184,186,8,127,235,207,250,
    123,13,103,88,226,164,184,131,68,216,133,59,193,83,21,116,
    97,86,65,220,240,58,168,4,11,245,50,171,4,7,205,49,
    185,9,202,162,82,99,54,165,223,160,21,163,98,68,25,138,
    131,97,142,213,12,252,18,28,183,1,167,151,11,220,186,0,
    227,60,34,15,231,16,233,34,47,2,71,247,66,209,239,60,
    72,100,64,116,47,66,85,233,5,209,109,130,188,186,200,16,
    207,32,117,248,28,164,174,227,184,70,14,169,186,64,169,202,
    79,195,242,237,60,238,211,153,183,254,12,148,128,35,231,5,
    56,122,3,43,251,121,79,255,7,8,229,254,125,49,7,33,
    152,100,205,187,177,195,139,241,38,172,159,7,207,38,15,237,
    187,209,38,207,97,75,230,240,187,50,135,101,150,203,229,34,
    107,188,182,244,222,108,81,66,24,14,108,218,200,231,107,90,
    97,58,74,226,199,227,102,124,208,52,226,39,250,228,141,43,
    233,246,149,244,58,119,192,230,77,233,61,89,15,204,186,92,
    162,71,232,82,248,244,214,99,95,203,116,147,55,207,203,154,
    146,151,13,232,124,106,50,142,206,33,136,86,17,93,105,207,
    169,73,208,149,23,22,223,234,52,190,48,247,14,14,168,74,
    112,109,181,201,152,169,42,177,194,203,58,176,220,149,100,151,
    159,207,16,112,120,170,9,151,76,183,147,217,40,230,195,17,
    247,237,167,112,177,0,227,221,54,107,251,182,192,67,121,134,
    7,60,118,1,235,159,249,202,161,0,137,159,8,25,231,196,
    230,176,158,86,1,82,188,14,241,239,72,240,255,130,25,46,
    253,163,131,185,45,18,220,86,210,107,34,154,141,244,59,244,
    203,92,241,20,131,215,206,239,134,243,131,215,153,246,30,129,
    202,191,26,174,206,211,77,10,9,233,117,83,136,101,157,103,
    86,143,179,150,62,189,218,113,231,93,4,110,150,51,213,30,
    172,120,48,67,13,70,215,69,181,110,205,97,225,61,144,171,
    83,24,168,130,247,31,27,116,153,254,121,182,122,89,39,191,
    143,83,29,177,115,117,73,162,246,204,255,2,153,133,47,77,
    67,55,78,93,112,220,85,16,171,168,108,238,3,124,85,52,
    99,185,127,100,71,78,89,40,239,29,190,98,100,151,99,76,
    93,247,117,202,251,166,139,17,239,110,83,62,69,4,189,89,
    63,136,244,35,233,8,146,78,247,125,240,81,65,59,185,123,
    114,134,31,71,28,147,200,136,9,197,142,92,105,252,135,221,
    100,161,117,38,71,222,200,186,212,77,204,190,20,233,196,29,
    165,178,90,81,101,11,87,99,155,91,69,93,57,118,173,81,
    113,106,43,21,167,178,100,203,184,169,51,24,170,78,165,86,
    87,21,235,111,78,78,20,225,
};

EmbeddedPython embedded_m5_internal_enum_Enum(
    "m5/internal/enum_Enum.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/enum_Enum.py",
    "m5.internal.enum_Enum",
    data_m5_internal_enum_Enum,
    1528,
    3757);

} // anonymous namespace