#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Gic[] = {
    120,156,173,85,91,111,19,71,20,62,187,182,215,183,4,2,
    109,210,170,82,219,41,15,200,69,34,107,76,121,168,68,111,
    20,129,34,181,16,109,0,169,126,89,141,119,199,246,134,189,
    105,103,156,196,111,72,244,135,244,159,182,231,156,189,196,73,
    10,18,82,236,120,50,231,204,237,155,243,125,231,76,0,213,
    167,133,191,95,5,128,254,7,59,33,254,89,16,3,188,170,
    122,86,217,179,33,182,33,105,193,180,5,22,217,45,136,219,
    144,116,96,218,41,237,54,196,14,36,14,76,29,180,59,160,
    58,48,183,32,116,224,111,128,247,0,127,77,187,16,118,65,
    117,217,219,107,188,61,8,251,160,90,236,29,52,222,62,132,
    195,122,135,173,198,59,128,112,27,142,70,55,16,100,244,47,
    126,70,22,246,12,53,247,202,110,31,155,163,40,121,57,59,
    86,129,57,119,29,70,217,83,117,18,5,170,116,245,200,21,
    75,51,207,138,196,116,209,120,34,181,122,30,5,193,102,56,
    158,80,56,92,236,40,128,169,69,65,153,218,132,115,218,166,
    152,224,157,149,3,199,120,159,30,28,247,41,54,239,109,64,
    124,222,209,136,22,123,109,108,244,103,20,76,117,226,202,34,
    113,103,120,132,191,136,130,253,229,82,139,141,243,133,89,70,
    90,132,140,78,96,47,151,133,17,217,124,127,52,172,145,250,
    126,42,19,229,251,102,192,70,146,133,171,152,76,58,194,172,
    115,197,157,87,197,74,241,108,57,211,166,144,129,225,217,193,
    217,153,191,84,50,84,133,233,208,153,178,144,137,71,248,140,
    83,154,42,53,134,108,153,174,121,117,94,161,26,81,20,206,
    27,61,193,198,93,102,137,114,223,170,36,81,133,154,184,11,
    149,60,226,230,190,54,114,22,43,87,23,129,91,223,22,131,
    185,159,175,57,10,247,105,61,237,237,88,252,181,75,40,241,
    195,31,199,87,227,253,238,82,188,41,210,45,80,109,56,238,
    80,140,81,114,20,102,167,246,32,21,29,246,116,217,211,35,
    181,161,198,200,211,223,240,244,42,114,206,61,125,246,12,217,
    179,69,186,67,181,145,103,155,8,220,34,2,111,18,236,207,
    55,8,68,238,252,156,80,35,131,17,236,192,183,250,11,28,
    253,45,12,11,165,181,192,160,137,48,194,208,71,179,149,201,
    138,8,44,156,112,243,210,132,32,95,49,89,15,198,169,102,
    17,60,85,177,92,243,208,225,193,75,81,184,167,194,100,155,
    219,232,59,31,154,132,91,137,40,53,170,152,203,64,233,239,
    46,76,99,127,177,202,13,77,92,40,254,247,251,225,235,136,
    130,171,199,216,188,88,37,51,85,160,202,54,166,198,81,170,
    180,208,171,60,207,10,163,66,49,74,228,153,248,73,60,24,
    79,198,223,115,194,121,68,155,71,186,241,40,101,60,210,151,
    199,34,109,87,215,228,84,35,244,190,36,139,56,71,152,165,
    65,75,254,144,70,165,193,218,220,168,167,229,81,230,135,4,
    219,108,87,115,207,61,180,51,162,243,227,106,17,29,252,250,
    32,53,15,39,188,113,132,35,132,248,154,132,74,76,253,64,
    235,119,106,161,218,183,173,250,203,88,112,226,201,36,121,134,
    9,164,174,202,246,249,167,201,214,38,229,94,144,45,170,216,
    34,205,162,250,56,194,95,17,150,219,151,212,135,231,179,246,
    104,108,23,27,6,35,142,14,15,4,21,23,145,50,171,122,
    239,194,136,201,140,140,235,161,221,75,122,156,243,52,84,213,
    104,240,49,130,189,47,235,82,164,243,200,167,179,152,78,50,
    98,149,122,183,106,13,16,209,215,196,7,221,255,23,90,63,
    104,10,7,51,225,52,76,92,37,225,207,79,32,161,169,219,
    237,186,52,12,169,16,44,160,46,40,219,13,21,223,124,152,
    10,143,212,162,111,253,95,142,114,230,34,82,145,165,226,116,
    25,5,75,74,66,76,235,197,66,109,36,168,214,95,83,45,
    204,78,203,108,52,167,89,69,21,89,204,142,254,120,238,121,
    84,161,56,239,154,204,225,162,235,113,13,163,172,226,242,142,
    144,89,196,111,240,85,204,138,242,25,160,16,115,60,171,115,
    174,135,56,138,214,179,11,196,97,34,237,90,47,202,231,140,
    128,38,143,246,115,2,160,89,81,100,21,217,217,218,108,149,
    70,243,120,123,86,141,175,124,185,61,155,110,212,188,173,156,
    177,124,7,62,242,122,208,51,162,199,229,3,251,243,221,186,
    28,12,172,129,181,99,239,224,111,175,187,55,220,235,254,7,
    112,144,247,115,
};

EmbeddedPython embedded_m5_objects_Gic(
    "m5/objects/Gic.py",
    "/home/kemmere2/gem5/gem5-stable/src/dev/arm/Gic.py",
    "m5.objects.Gic",
    data_m5_objects_Gic,
    996,
    2357);

} // anonymous namespace