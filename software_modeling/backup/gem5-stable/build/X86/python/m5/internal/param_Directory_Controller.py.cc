#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Directory_Controller[] = {
    120,156,197,89,109,115,219,198,17,222,3,64,74,164,36,75,
    178,222,252,34,91,244,139,98,214,211,72,169,27,199,153,177,
    235,214,181,147,78,51,83,37,133,220,218,97,50,69,33,226,
    36,129,2,1,22,56,218,102,70,106,103,34,79,219,47,253,
    214,254,132,126,232,191,233,159,105,191,182,187,123,0,8,234,
    205,236,216,101,36,241,116,92,236,237,237,238,61,187,183,119,
    104,66,250,83,194,207,79,106,0,201,191,5,128,135,127,2,
    2,128,182,128,134,0,33,5,120,243,176,87,130,248,67,240,
    74,240,26,160,97,128,52,224,16,59,38,124,101,64,56,201,
    99,202,16,152,76,17,208,171,130,180,160,81,130,103,225,44,
    88,178,12,123,85,136,127,11,66,136,80,192,115,111,12,188,
    113,120,141,210,177,83,97,129,227,64,196,42,19,43,224,77,
    48,177,10,222,36,119,38,160,55,3,114,18,26,83,196,214,
    56,135,98,111,163,216,105,22,251,79,18,235,225,147,5,240,
    206,17,59,234,245,37,113,90,196,201,243,77,179,148,153,76,
    203,89,104,156,207,250,115,133,254,124,161,191,80,232,47,22,
    250,75,133,254,133,66,255,98,161,127,169,208,191,92,232,47,
    23,250,87,10,253,171,133,254,74,161,95,227,62,90,126,30,
    90,215,160,117,29,90,55,96,27,23,99,54,183,242,38,72,
    19,90,171,208,88,5,137,127,55,225,16,215,203,59,95,24,
    241,30,143,152,203,71,220,226,17,117,104,212,65,226,223,45,
    61,162,12,155,245,69,196,128,255,31,252,169,35,6,64,77,
    98,243,66,198,137,31,133,142,31,110,71,190,65,207,203,212,
    16,98,154,212,140,165,208,121,76,208,249,7,48,110,60,35,
    133,206,1,160,96,65,182,4,6,28,112,231,192,128,94,29,
    246,5,180,44,240,76,216,199,105,74,164,192,142,128,67,3,
    190,54,137,225,0,91,11,23,248,42,88,74,227,166,197,11,
    172,37,141,193,65,9,246,75,176,249,124,223,32,194,94,5,
    226,191,195,55,203,44,116,156,133,26,176,143,173,5,135,22,
    28,148,225,25,50,33,169,85,33,243,197,243,125,180,20,41,
    155,117,11,181,221,40,152,75,166,120,126,28,186,109,169,46,
    99,223,233,184,177,219,118,158,248,177,108,170,40,238,57,143,
    163,80,197,81,16,200,184,94,205,6,68,201,90,199,85,187,
    54,75,48,201,53,237,142,98,201,81,40,213,4,118,182,253,
    208,115,218,145,215,13,164,26,39,177,206,182,31,72,199,225,
    135,63,111,119,162,88,125,18,199,81,108,147,119,153,24,68,
    110,62,130,124,219,12,162,68,214,105,54,158,198,38,241,138,
    184,183,59,44,145,20,96,173,105,176,39,147,102,236,119,20,
    46,154,150,72,220,36,173,78,203,197,77,210,192,102,125,55,
    106,203,245,61,217,110,203,88,222,89,223,145,237,187,220,188,
    159,40,119,43,144,235,91,93,63,240,214,159,127,252,209,122,
    167,167,118,163,112,29,159,251,161,146,232,159,96,253,116,207,
    172,33,247,121,154,227,165,191,227,248,108,157,179,43,131,142,
    140,167,136,122,137,230,23,51,98,82,148,133,41,234,98,10,
    123,37,252,152,98,217,152,16,27,62,217,215,36,155,9,101,
    86,17,87,180,216,2,246,12,136,151,9,53,45,252,19,180,
    204,136,157,77,122,102,240,179,95,146,99,52,181,101,18,22,
    52,113,159,145,134,144,67,206,7,180,248,33,48,92,74,208,
    42,131,134,17,162,79,227,42,238,81,139,236,36,198,64,225,
    22,36,127,3,116,52,2,104,31,82,112,29,154,32,194,25,
    80,85,202,49,72,93,196,9,191,101,124,110,214,73,253,13,
    6,135,218,245,147,232,101,200,75,64,125,142,168,77,244,204,
    23,189,207,183,90,232,187,100,5,9,95,70,221,90,211,13,
    195,72,213,92,207,171,185,74,197,254,86,87,201,164,166,162,
    218,106,82,167,85,181,103,51,124,229,242,122,157,12,79,180,
    246,136,39,253,197,243,155,10,191,204,241,23,94,133,68,42,
    196,198,110,228,37,72,39,17,59,82,217,164,164,34,39,71,
    172,8,67,199,33,86,154,30,249,206,225,247,71,153,38,140,
    207,122,57,67,83,34,131,109,85,101,96,186,73,226,176,38,
    68,103,12,146,224,23,110,208,149,44,29,193,164,80,33,234,
    106,29,70,135,194,11,100,81,230,0,182,42,140,66,175,135,
    74,250,205,91,52,255,5,198,226,36,163,113,1,145,56,134,
    109,25,255,151,197,162,209,180,82,252,149,51,12,82,110,84,
    192,8,16,41,8,16,143,135,152,135,234,6,39,18,54,140,
    227,243,58,245,104,176,189,76,205,21,106,174,82,179,146,217,
    62,18,7,76,29,117,192,61,154,212,96,171,217,62,90,42,
    51,179,207,27,136,177,139,253,24,195,164,185,73,177,98,80,
    68,245,99,197,162,4,27,63,164,22,89,57,10,77,72,158,
    82,58,167,152,98,97,20,62,24,8,212,235,135,7,123,203,
    158,33,47,140,103,200,182,9,174,69,204,238,20,48,107,211,
    66,49,96,237,139,89,138,116,136,67,67,213,166,92,205,65,
    119,212,221,53,106,174,141,212,231,125,208,237,28,3,221,125,
    154,127,38,5,221,20,131,173,138,159,25,163,105,166,11,145,
    111,164,115,71,192,70,72,179,78,64,218,123,212,51,143,155,
    254,93,128,44,53,248,211,2,200,72,71,163,104,215,6,118,
    122,75,100,78,17,94,75,88,26,60,11,151,112,183,55,120,
    183,255,128,119,123,174,24,184,118,211,201,219,228,252,173,59,
    37,242,203,182,9,139,233,46,158,84,176,237,196,209,171,94,
    45,218,174,41,54,156,114,237,131,213,100,109,53,185,143,89,
    180,246,144,243,151,206,163,58,83,198,178,67,153,142,134,126,
    242,170,41,121,203,228,111,142,163,19,155,195,73,206,73,183,
    98,68,218,2,121,213,200,220,205,41,62,81,49,101,246,209,
    57,188,154,59,156,244,255,140,102,172,178,183,77,177,132,168,
    170,10,86,203,209,105,157,75,52,126,138,159,159,210,10,144,
    233,18,168,168,183,55,181,210,108,15,89,102,127,127,0,57,
    163,176,198,94,71,241,191,202,16,83,238,35,134,62,102,22,
    9,127,2,174,96,5,252,17,8,19,184,244,105,36,228,129,
    67,32,152,35,246,223,0,135,204,9,149,2,231,160,77,170,
    14,152,3,83,83,114,143,89,117,225,240,25,252,185,16,111,
    217,246,110,166,53,106,113,123,183,242,252,197,96,26,106,11,
    183,6,19,29,173,208,174,155,16,155,206,94,253,16,238,239,
    19,121,69,137,217,123,36,200,26,215,115,57,164,214,215,125,
    92,209,6,121,89,204,25,5,180,252,128,154,59,57,80,68,
    70,251,127,107,184,2,167,111,233,142,222,47,190,34,53,44,
    86,124,122,76,205,227,255,147,132,229,113,81,202,226,226,78,
    30,23,146,183,184,215,124,146,161,214,32,12,28,26,2,143,
    181,88,235,209,41,210,2,89,130,70,153,34,136,203,115,145,
    6,152,200,210,28,37,197,129,253,147,93,180,161,157,151,195,
    64,175,48,53,175,70,151,62,104,145,31,4,110,123,203,115,
    31,190,160,249,104,210,102,22,114,70,102,193,76,209,2,10,
    23,113,154,17,252,245,110,102,201,139,209,165,142,143,104,186,
    204,2,14,20,47,106,114,190,120,186,43,107,109,217,222,194,
    163,235,174,223,169,109,7,238,14,175,145,153,90,248,121,102,
    161,226,69,62,90,155,36,183,169,141,106,205,40,196,236,222,
    165,185,107,158,196,99,156,244,106,239,215,120,107,168,249,73,
    205,221,194,167,110,83,105,248,15,134,49,151,195,110,188,147,
    112,229,187,247,146,186,163,93,99,7,79,236,62,30,4,94,
    65,190,29,235,19,100,158,233,185,196,215,209,132,59,39,30,
    208,84,79,103,53,170,83,236,53,106,190,7,35,223,16,62,
    68,241,93,154,135,28,87,22,151,141,138,161,46,157,18,197,
    95,144,164,228,120,44,255,107,152,88,214,151,83,105,68,151,
    137,83,142,209,253,1,181,21,218,30,26,213,140,56,193,237,
    36,19,167,50,226,57,110,167,153,56,147,17,103,185,61,207,
    196,185,140,56,207,237,2,19,23,51,226,18,183,23,152,120,
    49,35,94,226,246,50,19,151,51,226,21,110,175,50,113,37,
    187,125,171,49,241,26,52,174,211,53,17,81,110,80,58,26,
    123,219,116,196,145,60,218,24,254,195,59,205,66,246,189,239,
    206,0,251,99,72,43,150,211,50,144,40,90,55,165,51,80,
    75,100,7,168,162,105,124,117,115,237,76,224,59,205,88,186,
    74,234,117,91,30,165,217,156,213,244,236,223,246,243,203,241,
    114,255,81,110,225,33,87,110,189,121,94,78,125,146,228,229,
    20,207,194,75,88,247,91,92,247,63,160,186,127,159,221,225,
    24,186,244,239,131,181,148,123,133,74,164,80,190,60,81,57,
    237,25,93,229,147,146,110,167,35,67,207,190,13,197,194,157,
    31,143,14,35,148,79,255,2,133,122,202,20,243,88,169,31,
    143,83,218,52,10,22,243,186,150,242,200,28,233,10,51,176,
    255,154,1,187,126,19,138,59,135,253,128,26,222,43,242,109,
    194,254,113,190,62,245,179,81,235,229,143,240,196,56,60,51,
    86,124,124,56,203,41,234,131,97,135,6,136,211,176,169,231,
    251,159,7,209,188,179,197,121,179,39,234,254,217,162,84,132,
    37,105,155,30,53,243,71,3,170,188,205,120,210,138,11,141,
    51,152,212,147,179,39,224,187,89,175,237,218,242,119,93,153,
    168,167,17,242,146,152,16,7,208,149,127,51,234,134,138,53,
    125,39,130,72,229,85,20,52,20,183,122,52,196,148,241,27,
    21,127,123,41,164,245,245,76,235,51,89,213,207,134,245,82,
    210,193,202,82,126,26,71,237,83,21,127,87,178,146,52,196,
    134,29,160,30,15,49,241,118,20,99,69,235,157,105,192,187,
    144,67,202,223,204,148,127,3,243,80,24,141,135,113,253,59,
    17,52,0,246,55,113,243,14,193,155,189,39,3,169,228,25,
    59,155,162,172,155,222,145,122,8,197,56,234,57,142,190,241,
    193,239,129,227,140,184,92,255,17,138,255,61,205,67,201,8,
    203,117,81,198,130,125,65,12,252,26,149,114,69,240,217,232,
    200,11,68,173,38,237,30,250,158,163,151,216,92,70,77,231,
    91,9,191,221,202,14,39,180,235,240,22,176,225,182,245,43,
    9,190,105,183,111,64,122,19,106,223,202,183,36,186,40,230,
    203,37,125,161,135,229,2,159,219,248,152,102,255,144,232,180,
    58,237,187,107,153,157,107,218,78,187,187,213,203,109,253,5,
    103,86,126,211,214,190,203,175,4,143,15,216,244,219,250,85,
    14,111,18,197,231,94,236,98,127,225,8,53,145,177,239,6,
    254,55,82,213,78,85,160,239,98,206,241,39,51,109,246,18,
    37,219,92,12,157,168,85,39,144,169,254,39,79,244,40,61,
    190,166,76,39,91,135,15,83,235,86,78,124,254,56,136,154,
    123,210,75,121,174,156,206,243,36,106,147,55,46,156,172,173,
    54,229,168,10,50,236,178,6,180,18,145,39,143,249,226,145,
    231,197,182,27,238,72,231,5,175,23,71,208,0,195,128,137,
    25,23,97,42,99,225,11,162,19,29,79,239,48,179,241,125,
    50,31,79,79,45,203,57,44,99,185,227,163,57,49,139,30,
    20,154,22,167,20,51,234,214,217,89,166,40,105,180,33,173,
    111,136,244,149,247,67,122,213,146,252,26,27,122,71,86,153,
    174,96,120,83,249,106,138,42,22,176,150,57,57,83,177,38,
    39,42,86,101,204,228,151,25,83,98,206,168,90,149,137,73,
    113,214,239,10,166,131,170,177,178,84,17,255,5,196,216,184,
    187,
};

EmbeddedPython embedded_m5_internal_param_Directory_Controller(
    "m5/internal/param_Directory_Controller.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_Directory_Controller.py",
    "m5.internal.param_Directory_Controller",
    data_m5_internal_param_Directory_Controller,
    2593,
    8829);

} // anonymous namespace