#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleTrace[] = {
    120,156,189,88,253,110,219,200,17,159,37,41,217,146,229,88,
    142,99,59,137,157,88,215,34,61,53,232,89,109,122,105,10,
    156,155,94,90,92,129,30,122,190,28,149,34,57,221,161,44,
    77,174,36,202,20,41,144,235,56,10,236,63,90,7,109,95,
    160,143,208,63,250,54,125,163,118,102,150,164,232,143,0,7,
    92,45,71,220,44,151,187,179,243,241,155,143,93,15,178,191,
    10,62,159,182,0,210,68,0,248,248,19,16,2,140,5,244,
    4,8,41,192,191,5,135,21,72,62,6,191,2,239,0,122,
    6,72,3,206,176,99,194,55,6,68,13,94,83,133,208,228,
    17,1,211,58,72,11,122,21,120,25,173,130,37,171,112,88,
    135,228,207,32,132,136,4,188,242,23,192,95,132,119,72,29,
    59,53,38,184,8,52,88,231,193,26,248,75,60,88,7,191,
    193,157,37,152,54,65,54,160,183,76,211,122,55,144,236,67,
    36,187,194,100,255,67,100,125,252,178,14,254,13,154,142,124,
    125,77,51,45,154,201,251,173,48,149,102,206,229,42,244,110,
    230,253,181,82,255,86,169,191,206,125,220,245,38,140,54,96,
    180,9,163,219,208,71,69,172,22,59,220,1,105,194,232,46,
    244,238,130,196,223,29,56,67,93,249,55,75,43,182,120,197,
    90,177,98,155,87,220,131,222,61,144,248,219,214,43,170,208,
    109,111,160,254,131,255,226,95,27,245,15,170,129,205,107,153,
    164,65,28,57,65,212,143,3,131,190,87,169,33,107,121,212,
    44,100,102,251,45,153,237,223,192,54,243,141,204,108,167,128,
    132,5,201,18,26,112,202,157,83,3,166,109,56,17,48,178,
    192,55,225,4,183,169,16,3,3,1,103,6,124,107,210,132,
    83,108,45,84,238,125,176,148,182,217,136,149,171,41,45,192,
    105,5,78,42,208,125,117,98,208,192,97,13,146,127,193,219,
    109,38,186,200,68,13,56,193,214,130,51,11,78,171,240,18,
    39,225,208,168,70,226,139,87,39,40,41,142,116,219,22,114,
    187,95,18,151,68,241,131,36,114,199,82,221,196,190,51,113,
    19,119,236,116,131,241,36,148,47,18,215,147,237,122,62,47,
    78,119,39,174,26,218,188,208,36,141,140,39,138,9,198,145,
    84,75,216,233,7,145,239,140,99,255,40,148,106,145,168,57,
    253,32,148,142,195,31,127,63,158,196,137,250,44,73,226,196,
    38,165,242,96,24,187,197,10,82,169,23,198,169,108,211,110,
    188,141,77,228,21,205,238,79,152,34,49,192,204,210,98,95,
    166,94,18,76,20,218,74,83,164,217,68,173,77,86,226,38,
    253,10,155,206,48,30,203,206,161,28,143,101,34,31,117,6,
    114,252,152,155,143,82,229,30,132,178,115,112,20,132,126,231,
    153,253,69,103,50,85,195,56,234,224,247,32,82,18,213,18,
    118,46,41,100,23,39,145,170,210,227,96,224,4,44,148,51,
    148,225,68,38,203,52,122,151,182,21,77,209,16,85,97,138,
    182,88,198,94,5,31,83,108,27,75,98,63,32,177,60,18,
    149,48,101,149,81,68,166,21,112,104,64,178,77,24,25,225,
    79,144,81,17,41,93,250,102,240,183,175,72,31,122,116,100,
    146,229,245,224,9,227,10,1,134,51,247,200,212,17,48,56,
    42,48,170,130,6,13,98,77,163,40,153,82,139,211,137,140,
    129,196,45,72,255,9,168,95,132,203,9,100,80,58,51,65,
    68,77,80,117,242,102,28,221,192,13,255,202,104,236,182,137,
    253,125,198,132,26,6,105,124,28,177,230,169,207,254,211,69,
    205,60,159,126,121,48,146,158,74,119,112,224,235,248,168,229,
    185,81,20,171,150,235,251,45,87,169,36,56,56,82,50,109,
    169,184,245,32,109,147,49,237,213,28,86,5,189,233,36,135,
    17,153,28,97,164,95,252,192,83,248,178,198,47,108,133,84,
    42,132,196,48,246,83,28,39,18,3,169,108,98,82,145,146,
    99,102,132,17,227,208,84,218,30,231,221,192,247,103,57,39,
    12,203,118,53,7,81,42,195,190,170,51,30,221,52,117,152,
    19,26,103,232,17,225,215,110,120,36,153,58,98,72,33,67,
    212,213,60,92,59,248,110,147,32,185,220,44,76,20,71,254,
    20,121,11,188,15,105,219,219,12,193,6,131,112,29,1,184,
    128,109,21,255,175,138,13,195,179,50,216,85,115,232,81,0,
    84,192,134,23,153,237,17,134,103,24,108,218,6,71,11,150,
    135,189,241,7,212,163,197,246,54,53,247,168,185,79,205,78,
    46,242,117,202,189,124,81,238,39,180,151,193,194,178,88,100,
    24,51,23,203,63,231,81,119,102,30,133,1,177,75,158,97,
    144,255,204,60,195,162,224,153,60,165,22,167,178,207,153,144,
    190,160,80,77,30,196,196,200,89,16,246,212,155,57,3,43,
    201,110,146,240,139,57,142,109,2,103,25,161,131,18,66,109,
    178,15,195,211,190,147,199,65,135,102,104,96,218,91,68,170,
    114,133,150,91,212,124,48,15,85,207,32,54,184,4,177,79,
    104,219,102,6,177,101,134,86,29,159,166,225,153,153,254,139,
    220,184,118,1,90,132,43,235,10,92,253,136,122,230,101,137,
    231,8,169,76,206,223,149,32,69,172,25,101,113,246,177,51,
    221,36,41,202,96,218,196,36,255,50,218,196,188,109,112,222,
    254,41,231,109,206,253,92,1,233,192,108,114,108,214,157,10,
    169,163,111,194,70,150,143,211,26,182,147,36,126,51,109,197,
    253,150,98,121,41,142,238,61,72,119,31,164,159,96,132,108,
    61,229,216,164,99,164,142,130,137,156,80,20,163,165,159,189,
    241,36,103,65,126,115,28,29,180,28,14,96,78,150,93,17,
    87,235,164,76,35,215,50,135,239,84,37,20,181,175,93,207,
    245,66,207,196,246,231,180,81,157,149,108,138,77,196,80,93,
    48,55,142,142,212,92,99,241,87,124,126,67,138,39,137,37,
    80,69,108,119,53,175,44,6,9,100,255,228,28,78,174,81,
    8,187,131,84,255,152,227,163,58,195,7,61,102,14,247,191,
    3,87,158,2,254,6,132,0,52,116,6,247,194,59,200,228,
    107,52,253,79,192,126,113,69,206,231,248,210,165,60,207,51,
    48,236,164,79,120,170,46,1,62,135,127,148,156,42,79,212,
    102,86,91,150,19,181,85,196,38,134,206,119,74,198,214,249,
    32,70,134,25,186,41,77,211,145,105,230,167,179,208,95,148,
    132,24,153,175,19,71,139,122,11,135,184,249,118,134,34,74,
    117,91,98,205,40,97,227,103,212,60,42,96,33,242,177,107,
    98,108,7,222,159,147,29,29,249,191,161,221,45,230,119,101,
    129,131,126,137,70,129,249,74,142,249,71,5,230,37,231,168,
    119,124,204,160,214,32,67,159,25,2,207,123,88,154,209,241,
    202,2,89,129,94,149,188,131,139,104,145,57,143,200,35,23,
    197,185,115,9,144,21,178,175,85,85,216,90,155,145,154,55,
    215,30,17,200,146,123,161,59,62,240,221,167,135,180,13,237,
    229,229,238,100,228,140,55,203,140,147,43,136,247,241,206,175,
    143,115,1,94,95,123,52,248,5,82,45,24,103,236,251,177,
    199,33,224,197,80,182,198,114,124,128,167,200,97,48,105,245,
    67,119,192,22,49,51,193,190,204,5,83,108,210,139,165,68,
    250,144,218,184,229,197,17,134,231,35,79,197,73,203,151,120,
    180,146,126,235,163,22,199,246,86,144,182,220,3,252,234,122,
    74,67,251,188,103,114,173,234,38,131,148,203,210,195,99,234,
    206,197,162,14,158,153,3,44,206,199,80,164,81,125,152,43,
    66,53,151,221,218,83,48,227,225,161,73,77,117,124,162,178,
    194,222,165,230,199,48,175,136,254,49,48,180,32,37,53,85,
    197,150,81,51,212,234,121,199,124,78,235,210,203,238,249,197,
    119,113,79,125,17,147,57,105,53,191,193,89,0,201,71,45,
    186,100,169,102,151,44,232,185,11,223,215,115,25,253,115,193,
    189,250,191,58,172,253,100,238,124,219,191,132,44,95,191,207,
    89,69,89,168,101,189,118,36,242,163,65,89,34,190,121,184,
    125,21,106,28,47,145,174,146,218,56,219,115,16,146,221,93,
    111,122,60,243,192,203,133,236,179,66,158,51,174,82,166,183,
    216,102,250,68,196,54,19,47,163,187,88,209,90,92,209,238,
    81,69,123,194,194,59,134,46,106,103,64,172,20,58,32,31,
    143,228,177,115,73,15,186,108,37,222,220,201,68,70,190,253,
    16,202,149,40,127,190,118,251,83,124,121,11,165,146,193,20,
    183,176,244,188,236,113,20,59,75,242,177,241,42,133,143,205,
    195,140,140,213,191,228,88,109,211,81,96,22,64,237,61,106,
    56,100,22,209,210,254,53,228,17,180,64,163,47,67,169,228,
    101,99,40,90,154,157,74,125,137,57,36,158,226,81,129,203,
    111,124,15,29,103,62,161,247,87,153,120,124,208,193,208,43,
    170,70,205,172,85,107,130,179,216,133,91,87,205,13,149,155,
    186,200,156,166,54,123,241,74,33,49,223,13,230,249,132,52,
    196,71,161,125,119,172,111,118,248,230,194,254,33,100,103,77,
    251,195,66,125,116,2,231,202,94,159,157,16,191,156,97,57,
    161,218,63,167,241,7,216,140,31,239,230,226,236,106,113,158,
    39,241,129,252,67,144,42,25,201,68,95,117,241,61,229,248,
    177,218,186,114,1,202,159,77,91,189,240,221,79,92,236,175,
    95,24,77,101,18,184,97,240,86,95,129,229,195,138,248,125,
    63,7,20,209,174,24,231,68,119,49,70,49,4,18,57,160,
    153,9,211,189,98,101,230,192,100,45,117,255,202,24,87,166,
    50,23,232,232,210,81,159,106,159,82,25,157,126,138,13,221,
    117,213,86,106,8,35,242,108,19,143,148,203,194,50,27,205,
    154,213,88,170,89,181,5,147,175,41,150,241,144,80,183,106,
    75,13,161,255,237,32,224,234,198,14,174,251,31,217,100,155,
    92,
};

EmbeddedPython embedded_m5_internal_param_SimpleTrace(
    "m5/internal/param_SimpleTrace.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_SimpleTrace.py",
    "m5.internal.param_SimpleTrace",
    data_m5_internal_param_SimpleTrace,
    2177,
    6544);

} // anonymous namespace