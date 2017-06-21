#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NativeTrace[] = {
    120,156,189,88,253,110,219,200,17,159,37,41,217,146,229,88,
    137,99,59,137,29,91,109,145,158,26,244,172,54,189,92,14,
    56,55,232,125,164,192,29,10,231,142,74,145,156,238,80,150,
    22,87,18,101,138,20,200,117,98,29,228,22,168,131,182,47,
    208,71,232,31,125,155,190,81,59,51,75,82,148,237,0,7,
    180,150,35,110,150,203,221,217,249,248,205,199,110,23,210,191,
    18,62,191,105,0,36,127,18,0,30,254,4,4,0,35,1,
    29,1,66,10,240,110,195,113,9,226,15,192,43,193,91,128,
    142,1,210,128,115,236,152,240,173,1,97,141,215,148,33,48,
    121,68,192,164,10,210,130,78,9,94,134,55,193,146,101,56,
    174,66,252,71,16,66,132,2,94,121,75,224,45,195,91,164,
    142,157,10,19,92,6,26,172,242,96,5,188,21,30,172,130,
    87,227,206,10,76,234,32,107,208,89,165,105,157,27,72,246,
    33,146,93,99,178,255,38,178,30,126,217,0,239,6,77,71,
    190,190,161,153,22,205,228,253,214,152,74,61,227,242,38,116,
    110,101,253,245,66,255,118,161,191,81,232,111,114,31,57,184,
    5,195,45,24,222,129,225,93,232,161,82,110,230,187,221,3,
    105,194,112,27,58,219,32,241,119,15,206,81,111,222,173,194,
    138,29,94,177,158,175,184,207,43,118,161,179,11,18,127,247,
    245,138,50,180,155,155,104,11,255,63,248,215,68,91,128,170,
    97,243,90,198,137,31,133,142,31,246,34,223,160,239,101,106,
    200,114,93,106,150,82,19,126,70,38,252,23,176,253,60,35,
    53,225,25,32,97,65,178,4,6,156,113,231,204,128,73,19,
    166,2,134,22,120,38,76,113,155,18,49,208,23,112,110,192,
    119,38,77,56,195,214,66,69,239,130,165,180,253,134,172,104,
    77,105,9,206,74,48,45,65,251,213,212,160,129,227,10,196,
    255,132,239,119,152,232,50,19,53,96,138,173,5,231,22,156,
    149,225,37,78,194,161,97,133,196,23,175,166,40,41,142,180,
    155,22,114,123,88,16,151,68,241,252,56,116,71,82,221,194,
    190,51,118,99,119,228,28,186,202,127,45,95,196,110,87,54,
    171,217,188,40,217,31,187,106,96,243,66,147,52,50,26,43,
    38,24,133,82,173,96,167,231,135,158,51,138,188,147,64,170,
    101,162,230,244,252,64,58,14,127,252,98,52,142,98,245,44,
    142,163,216,38,165,242,96,16,185,249,10,82,105,55,136,18,
    217,164,221,120,27,155,200,43,154,221,27,51,69,98,128,153,
    165,197,158,76,186,177,63,86,104,43,77,145,102,19,181,38,
    89,137,155,228,107,108,90,131,104,36,91,199,114,52,146,177,
    124,212,234,203,209,99,110,222,79,148,123,20,200,214,209,137,
    31,120,173,87,31,125,216,26,79,212,32,10,91,248,221,15,
    149,68,181,4,173,75,10,217,199,73,164,170,228,141,223,119,
    124,22,202,25,200,96,44,227,85,26,189,71,219,138,186,168,
    137,178,48,69,83,172,98,175,132,143,41,118,140,21,113,232,
    147,88,93,18,149,48,101,21,81,68,166,21,112,108,64,188,
    67,24,25,226,79,144,81,17,41,109,250,102,240,183,175,73,
    31,122,116,104,146,229,245,224,148,113,133,0,195,153,7,100,
    234,16,24,28,37,24,150,65,131,6,177,166,81,20,79,168,
    197,233,68,198,64,226,22,36,255,0,212,47,194,101,10,41,
    148,206,77,16,97,29,84,149,60,27,71,55,113,195,191,48,
    26,219,77,98,255,144,49,161,6,126,18,189,9,89,243,212,
    103,255,105,163,102,190,154,60,63,26,202,174,74,246,112,224,
    155,232,164,209,117,195,48,82,13,215,243,26,174,82,177,127,
    116,162,100,210,80,81,227,65,210,36,99,218,55,51,88,229,
    244,38,227,12,70,100,114,132,145,126,241,252,174,194,151,117,
    126,97,43,36,82,33,36,6,145,151,224,56,145,232,75,101,
    19,147,138,148,28,49,35,140,24,135,166,210,246,56,239,6,
    190,127,146,113,194,176,108,150,51,16,37,50,232,169,42,227,
    209,77,18,135,57,161,113,134,30,17,126,237,6,39,146,169,
    35,134,20,50,68,93,205,195,181,131,239,14,9,146,201,205,
    194,132,81,232,77,144,55,191,251,30,109,123,135,33,88,99,
    16,110,32,0,151,176,45,227,255,101,177,105,116,173,20,118,
    229,12,122,20,0,21,176,225,69,106,123,132,225,57,6,155,
    166,193,209,130,229,97,111,252,49,245,104,177,189,67,205,125,
    106,118,169,217,203,68,190,78,185,87,47,202,253,132,246,50,
    88,88,22,139,12,99,102,98,121,115,30,117,119,230,81,24,
    16,219,228,25,6,249,207,204,51,44,10,158,241,83,106,113,
    42,251,156,9,201,11,10,213,228,65,76,140,156,5,97,79,
    189,153,51,176,146,236,58,9,191,156,225,216,38,112,22,17,
    218,47,32,212,38,251,48,60,237,187,89,28,116,104,134,6,
    166,189,77,164,74,87,104,185,65,205,143,22,161,234,25,196,
    250,151,32,246,49,109,91,79,33,182,202,208,170,226,83,55,
    186,102,170,255,60,55,174,95,128,22,225,202,186,2,87,63,
    165,158,121,89,226,5,66,42,149,243,183,5,72,17,107,70,
    81,156,67,236,76,182,72,138,34,152,182,48,201,191,12,183,
    48,111,27,156,183,127,193,121,155,115,63,87,67,58,48,155,
    28,155,117,167,68,234,232,153,176,153,230,227,164,130,237,56,
    142,78,39,141,168,215,80,44,47,197,209,131,7,201,254,131,
    228,99,140,144,141,167,28,155,116,140,212,81,48,150,99,138,
    98,180,244,217,105,87,114,22,228,55,199,209,65,203,225,0,
    230,164,217,21,113,181,65,202,52,50,45,115,248,78,84,76,
    81,251,218,245,92,205,245,76,108,127,73,27,85,89,201,166,
    216,66,12,85,5,115,227,232,72,205,53,22,127,197,231,83,
    82,60,73,44,129,170,99,187,173,121,101,49,72,32,251,231,
    115,56,185,70,33,236,22,82,253,125,134,143,242,12,31,244,
    152,25,220,255,6,92,121,10,248,43,16,2,208,208,41,220,
    115,239,32,147,175,211,244,63,0,251,197,21,57,159,227,75,
    155,242,60,207,192,176,147,60,225,169,186,4,248,18,254,94,
    112,170,44,81,155,105,109,89,76,212,86,30,155,24,58,63,
    40,25,91,243,65,140,12,51,112,19,154,166,35,211,204,79,
    103,161,63,47,9,49,50,95,39,142,150,245,22,14,113,243,
    221,12,69,148,234,182,197,186,81,192,198,47,169,121,148,195,
    66,100,99,215,196,216,30,188,59,39,59,58,242,127,75,187,
    91,204,239,218,18,71,88,94,237,124,246,252,119,207,15,219,
    69,130,185,3,148,50,7,120,148,59,128,228,132,245,150,207,
    28,212,26,100,245,115,67,224,65,16,235,52,58,119,89,32,
    75,208,41,147,171,112,69,45,82,79,18,89,24,163,160,55,
    151,13,89,59,135,90,111,185,225,181,77,169,57,189,246,240,
    64,102,61,8,220,209,145,231,62,13,104,27,218,171,155,249,
    150,145,49,94,47,50,78,126,33,222,197,59,191,62,206,4,
    120,125,237,161,225,67,164,154,51,206,142,224,69,93,142,7,
    47,6,178,49,146,163,35,60,82,14,252,113,163,23,184,125,
    182,136,153,10,246,60,19,76,177,73,47,214,21,201,67,106,
    163,70,55,10,49,86,159,116,85,20,55,60,137,231,44,233,
    53,222,111,112,160,111,248,73,195,61,194,175,110,87,105,156,
    207,187,41,23,174,110,220,79,184,70,61,126,67,221,133,88,
    212,193,3,180,143,149,122,8,121,78,213,39,187,60,110,115,
    13,174,221,6,211,31,158,160,212,68,7,43,170,49,236,125,
    106,126,6,139,10,239,31,144,118,136,60,169,169,44,182,141,
    138,161,8,81,133,105,95,209,186,228,178,123,126,254,67,220,
    83,223,208,164,78,90,6,185,68,39,119,186,125,41,165,183,
    47,232,176,229,255,213,97,25,244,11,129,251,201,255,213,79,
    237,39,11,231,219,254,8,210,156,253,46,31,157,43,254,62,
    209,62,170,45,128,153,125,114,155,101,212,167,8,150,81,188,
    12,239,97,21,104,113,21,120,64,85,224,148,43,69,199,208,
    133,224,204,112,92,220,243,141,5,185,66,40,223,56,151,64,
    166,75,61,194,131,59,30,203,208,179,31,66,177,122,227,207,
    215,174,47,114,195,83,40,164,89,83,220,198,114,237,50,66,
    41,196,20,228,99,36,150,114,76,238,44,202,182,127,206,108,
    171,111,20,242,56,99,31,80,83,159,11,42,58,198,176,17,
    40,23,123,50,144,74,94,182,131,162,85,233,33,206,147,24,
    101,163,9,86,214,92,173,226,123,224,56,139,9,78,191,214,
    232,211,150,192,224,36,202,70,165,92,17,28,229,47,92,81,
    106,94,168,32,209,21,217,36,177,25,238,107,185,188,124,145,
    150,197,91,82,13,159,27,14,221,145,190,6,225,99,190,253,
    19,72,15,102,246,123,185,222,232,184,202,101,176,62,104,32,
    112,57,3,113,194,177,127,69,227,212,27,61,222,207,132,217,
    215,194,60,59,213,146,196,124,149,55,122,172,118,174,156,246,
    5,230,184,116,222,213,116,218,254,72,223,42,113,96,46,126,
    247,98,23,251,27,23,70,19,25,251,110,224,127,175,175,145,
    178,97,69,154,184,200,24,221,130,204,213,99,249,39,78,12,
    234,193,197,239,5,3,49,58,98,217,247,19,220,128,169,231,
    139,83,103,102,243,237,194,21,201,100,110,237,66,176,164,171,
    45,125,42,124,74,126,146,124,138,13,221,21,85,214,42,136,
    43,242,114,19,143,100,171,194,50,107,245,138,85,91,169,88,
    149,37,147,143,249,171,88,100,87,173,202,74,77,100,255,246,
    16,133,85,99,175,86,17,255,5,136,30,111,238,
};

EmbeddedPython embedded_m5_internal_param_NativeTrace(
    "m5/internal/param_NativeTrace.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_NativeTrace.py",
    "m5.internal.param_NativeTrace",
    data_m5_internal_param_NativeTrace,
    2157,
    6366);

} // anonymous namespace