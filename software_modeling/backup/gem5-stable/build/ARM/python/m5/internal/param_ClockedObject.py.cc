#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ClockedObject[] = {
    120,156,197,88,255,111,219,198,21,127,71,82,178,37,203,177,
    28,127,75,98,167,102,59,100,213,130,213,110,179,102,25,80,
    47,104,214,117,64,11,212,237,168,14,73,212,98,28,45,158,
    44,202,252,34,144,231,36,42,100,12,152,131,109,255,192,254,
    132,253,176,255,102,255,209,246,222,59,146,166,28,7,8,208,
    69,115,196,203,241,120,247,238,125,249,188,47,119,125,200,255,
    106,248,124,106,3,100,169,0,240,241,39,32,4,136,4,244,
    4,8,41,192,95,135,147,26,164,31,131,95,131,151,0,61,
    3,164,1,231,216,49,225,59,3,226,22,175,169,67,104,242,
    136,128,73,19,164,5,189,26,60,142,87,193,146,117,56,105,
    66,250,39,16,66,196,2,158,248,11,224,47,194,75,164,142,
    157,6,19,92,4,26,108,242,96,3,252,37,30,108,130,223,
    226,206,18,76,218,32,91,208,91,166,105,189,107,72,246,46,
    146,93,97,178,255,38,178,62,126,217,0,255,26,77,71,190,
    158,210,76,139,102,242,126,43,76,165,93,112,185,10,189,235,
    69,127,173,210,95,175,244,55,184,143,187,94,135,209,38,140,
    182,96,116,3,6,168,136,213,114,135,155,32,77,24,221,130,
    222,45,144,248,187,9,231,168,43,255,122,101,197,54,175,88,
    43,87,236,240,138,219,208,187,13,18,127,59,122,69,29,186,
    157,77,212,127,240,31,252,235,160,254,65,181,176,121,38,211,
    44,72,98,55,136,7,73,96,208,247,58,53,100,173,62,53,
    11,185,217,62,35,179,253,11,216,102,190,145,155,237,12,144,
    176,32,89,66,3,206,184,115,102,192,164,3,83,1,35,11,
    124,19,166,184,77,141,24,56,22,112,110,192,247,38,77,56,
    195,214,66,229,190,3,150,210,54,27,177,114,53,165,5,56,
    171,193,180,6,221,39,83,131,6,78,26,144,254,19,126,216,
    97,162,139,76,212,128,41,182,22,156,91,112,86,135,199,56,
    9,135,70,13,18,95,60,153,162,164,56,210,237,88,200,237,
    97,69,92,18,197,15,210,216,139,164,90,199,190,59,246,82,
    47,114,63,11,147,254,137,244,191,62,26,201,190,234,52,139,
    153,73,182,55,246,212,208,225,165,38,233,36,26,43,38,153,
    196,82,45,97,103,16,196,190,27,37,254,105,40,213,34,209,
    115,7,65,40,93,151,63,126,17,141,147,84,125,158,166,73,
    234,144,90,121,48,76,188,114,5,41,181,31,38,153,236,208,
    110,188,141,67,228,21,205,30,140,153,34,49,192,236,210,98,
    95,102,253,52,24,43,180,150,166,72,179,137,90,135,236,196,
    77,214,197,102,127,152,68,114,255,68,70,145,76,229,189,253,
    99,25,221,231,230,131,76,121,71,161,220,63,58,13,66,127,
    255,145,243,213,254,120,162,134,73,188,143,223,131,88,73,84,
    76,184,127,133,74,246,112,218,117,34,254,60,56,118,3,22,
    203,29,202,112,44,211,101,26,189,69,27,139,182,104,137,186,
    48,69,71,44,99,175,134,143,41,118,140,37,113,24,144,96,
    125,18,150,112,101,85,145,68,230,21,112,98,64,186,67,56,
    25,225,79,144,97,17,45,93,250,102,240,183,223,147,70,244,
    232,200,36,235,235,193,41,99,11,65,134,51,15,200,220,49,
    48,64,106,48,170,131,6,14,226,77,35,41,157,80,139,211,
    137,140,129,196,45,200,254,1,168,97,132,204,20,114,56,157,
    155,32,226,54,168,38,121,52,142,110,226,134,127,97,68,118,
    59,196,254,33,163,66,13,131,44,121,30,179,238,169,207,62,
    212,69,205,124,51,209,218,202,118,113,224,105,114,106,247,189,
    56,78,148,237,249,190,237,41,149,6,71,167,74,102,182,74,
    236,59,89,135,204,233,172,22,192,42,233,77,198,5,144,200,
    232,8,36,253,226,7,125,133,47,107,252,194,86,200,164,66,
    80,12,19,63,195,113,34,113,44,149,67,76,42,82,114,194,
    140,48,102,92,154,74,219,227,188,107,248,254,168,224,132,129,
    217,169,23,48,202,100,56,80,77,70,164,151,101,46,115,66,
    227,12,62,34,252,204,11,79,37,83,71,20,41,100,136,186,
    154,135,57,192,239,6,137,82,72,206,226,196,73,236,79,144,
    187,160,255,62,109,124,131,65,216,98,24,110,32,4,23,176,
    173,227,255,117,177,105,244,173,28,120,245,2,124,20,6,21,
    176,233,69,110,125,4,226,57,134,156,142,193,49,131,37,98,
    143,124,143,122,180,216,217,161,230,54,53,239,80,179,91,8,
    253,118,37,95,190,44,249,3,218,205,96,113,89,48,50,142,
    89,8,230,207,120,213,205,11,175,194,192,216,37,239,48,200,
    135,46,188,195,162,32,154,62,164,22,167,178,223,153,144,125,
    75,33,155,188,136,137,145,195,32,244,169,119,225,16,172,38,
    167,77,226,47,22,88,118,8,160,85,148,30,87,80,234,144,
    133,24,162,206,205,34,26,186,52,67,131,211,217,38,82,181,
    43,244,108,83,243,238,124,148,125,1,179,227,87,96,246,9,
    109,220,206,97,182,204,240,106,226,211,54,250,102,110,129,50,
    75,174,93,130,23,97,203,186,2,91,63,165,158,249,170,204,
    115,133,85,46,233,239,42,176,34,230,140,170,64,135,216,153,
    108,145,28,85,64,109,97,194,127,28,111,97,14,55,56,135,
    127,200,57,156,235,0,174,134,116,128,54,57,70,235,78,141,
    20,50,48,97,51,207,205,89,3,219,113,154,188,152,216,201,
    192,86,44,49,197,211,131,59,217,222,157,236,19,140,148,246,
    67,142,81,58,86,234,104,152,202,49,69,51,90,250,249,139,
    190,228,124,200,111,174,171,131,151,203,129,204,205,243,44,98,
    107,131,212,105,20,122,230,48,158,169,148,162,247,28,52,221,
    44,53,77,140,127,73,91,53,89,205,166,216,66,28,53,5,
    243,227,234,152,205,21,23,127,197,231,55,164,122,146,89,2,
    213,199,78,87,115,203,130,144,72,206,207,103,176,242,86,197,
    112,246,145,238,31,10,140,212,47,48,66,143,89,128,254,111,
    192,149,168,128,191,2,161,0,141,157,131,190,244,17,50,251,
    26,77,255,35,176,119,92,145,255,57,206,116,41,231,243,12,
    12,63,217,3,158,170,203,129,47,225,239,21,215,42,146,182,
    153,215,154,213,164,109,149,49,138,225,243,70,137,217,154,13,
    102,100,154,161,151,209,52,29,161,46,188,245,34,9,148,5,
    34,70,232,183,139,165,69,189,137,75,252,124,127,129,36,74,
    123,219,98,205,168,224,227,35,106,238,149,208,16,197,216,91,
    99,109,23,94,159,161,93,157,5,190,163,253,45,230,120,101,
    129,35,208,12,149,18,251,181,2,251,247,74,236,75,206,88,
    47,249,240,65,173,65,230,62,55,4,158,2,177,88,163,67,
    151,5,178,6,189,58,121,9,23,214,34,119,34,81,196,48,
    218,111,38,29,178,82,14,181,186,74,139,107,99,82,243,98,
    14,177,129,236,121,16,122,209,145,239,61,60,161,141,104,183,
    126,225,86,70,193,122,187,202,58,185,132,120,29,247,252,122,
    191,16,225,217,28,226,194,47,145,110,201,58,123,129,159,244,
    57,24,124,59,148,118,36,163,35,60,95,14,131,177,61,8,
    189,99,182,138,153,139,246,117,33,154,98,179,94,46,46,178,
    187,212,38,118,63,137,49,88,159,246,85,146,218,190,196,35,
    151,244,237,15,108,142,244,118,144,217,222,17,126,245,240,220,
    198,16,159,245,81,174,96,189,244,56,227,98,245,228,57,117,
    231,100,85,23,207,211,1,22,237,17,148,105,85,31,243,202,
    192,205,229,184,246,24,204,128,120,152,82,19,29,171,168,208,
    112,246,168,249,25,204,47,190,127,12,12,48,200,72,85,117,
    177,109,52,12,46,229,102,38,126,67,107,179,87,29,245,233,
    155,56,170,190,168,193,9,178,14,163,5,110,23,41,186,211,
    61,140,149,223,195,208,224,18,244,90,197,253,207,50,249,115,
    253,199,250,51,123,196,156,124,65,253,79,221,216,121,240,127,
    224,220,249,21,228,249,252,117,46,60,83,28,62,210,107,181,
    21,48,235,79,214,89,74,125,210,96,41,197,227,248,22,86,
    137,22,87,137,7,84,37,78,185,146,116,13,93,40,94,24,
    143,15,0,124,183,177,133,77,44,159,187,87,224,79,23,131,
    132,10,111,60,150,177,239,220,133,106,125,199,159,231,160,51,
    242,211,23,80,73,194,166,88,199,130,238,85,164,82,20,170,
    200,200,136,172,149,216,220,153,159,133,255,92,88,184,115,109,
    38,20,57,7,212,180,103,226,142,182,194,123,87,71,0,44,
    180,79,92,63,137,188,32,166,243,195,155,76,195,170,32,191,
    95,40,134,88,129,138,110,143,124,25,74,37,175,50,181,34,
    166,242,211,164,47,49,210,39,19,44,239,185,96,198,247,208,
    117,231,21,30,127,157,171,142,143,39,24,30,241,228,183,97,
    52,234,13,193,217,230,210,189,169,230,135,10,68,93,22,78,
    50,135,253,106,165,212,43,223,237,21,81,159,180,207,7,152,
    67,47,210,247,50,124,235,224,252,4,242,51,162,243,126,105,
    26,58,59,115,45,174,79,60,232,33,156,9,57,241,57,191,
    160,113,58,69,70,247,247,10,129,246,42,2,253,150,245,206,
    247,139,209,125,181,125,229,196,110,16,105,169,213,234,165,239,
    126,74,139,55,46,141,102,50,13,188,48,248,65,95,92,21,
    195,138,68,189,76,144,56,46,223,56,225,176,245,103,116,205,
    166,78,229,113,144,33,33,166,82,174,200,157,159,44,161,236,
    215,0,174,186,122,78,208,208,69,156,62,107,62,164,91,141,
    236,83,108,232,30,170,177,210,16,117,131,226,130,137,199,188,
    101,97,153,173,118,195,106,45,53,172,198,130,201,215,7,203,
    88,180,55,173,198,82,75,232,127,187,8,168,166,177,187,220,
    16,255,5,48,53,142,111,
};

EmbeddedPython embedded_m5_internal_param_ClockedObject(
    "m5/internal/param_ClockedObject.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_ClockedObject.py",
    "m5.internal.param_ClockedObject",
    data_m5_internal_param_ClockedObject,
    2167,
    6450);

} // anonymous namespace