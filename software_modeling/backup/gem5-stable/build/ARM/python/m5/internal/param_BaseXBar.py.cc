#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseXBar[] = {
    120,156,189,89,239,114,219,198,17,223,3,64,74,164,36,139,
    250,111,91,178,196,56,117,195,122,26,41,117,227,186,51,81,
    60,181,147,116,166,153,137,146,130,233,216,97,50,69,33,226,
    40,129,2,1,14,112,146,204,140,244,161,149,167,205,244,123,
    31,161,31,250,54,125,144,190,67,186,187,199,131,72,74,106,
    228,105,40,137,60,29,22,123,123,251,231,119,123,123,167,38,
    244,127,10,248,253,77,21,32,251,187,0,8,240,35,32,2,
    232,8,104,8,16,82,64,176,8,7,5,72,223,135,160,0,
    175,1,26,22,72,11,206,176,99,195,215,22,196,211,60,166,
    8,145,205,20,1,189,50,72,7,26,5,120,17,207,129,35,
    139,112,80,134,244,79,32,132,136,5,188,12,38,32,152,132,
    215,40,29,59,37,22,56,9,68,44,51,177,4,193,20,19,
    203,16,76,115,103,10,122,21,144,211,208,152,33,182,198,45,
    20,251,16,197,206,178,216,127,147,216,0,223,44,65,112,139,
    216,81,175,175,136,211,33,78,158,111,150,165,84,140,150,115,
    208,152,55,253,133,129,254,226,64,127,105,160,191,60,208,95,
    225,62,106,51,15,237,219,208,190,3,237,187,208,66,7,205,
    229,51,175,130,180,161,189,6,141,53,144,248,89,133,51,244,
    97,48,63,48,226,30,143,88,200,71,172,243,136,13,104,108,
    128,196,207,186,30,81,132,122,109,25,227,18,126,143,63,53,
    140,11,168,105,108,142,100,154,133,73,236,133,113,43,9,45,
    122,95,164,134,162,216,164,102,162,31,206,143,40,156,255,2,
    142,101,96,245,195,121,10,40,88,144,45,145,5,167,220,57,
    181,160,87,131,19,1,109,7,2,27,78,112,154,2,41,176,
    39,224,204,130,111,108,98,56,197,214,65,167,175,131,163,116,
    44,219,236,116,45,105,2,78,11,112,82,128,250,203,19,139,
    8,7,37,72,255,9,223,174,177,208,73,22,106,193,9,182,
    14,156,57,112,90,132,23,200,132,164,118,137,204,23,47,79,
    208,82,164,212,107,14,106,187,51,96,46,153,18,132,105,236,
    119,164,154,197,190,215,245,83,191,227,61,247,51,249,242,185,
    159,214,202,134,41,201,54,187,190,218,119,121,148,77,238,232,
    116,21,75,75,98,169,166,176,211,10,227,192,235,36,193,97,
    36,213,36,137,242,90,97,36,61,143,95,254,174,211,77,82,
    245,73,154,38,169,75,30,101,98,148,248,249,8,242,103,51,
    74,50,89,163,217,120,26,151,196,43,226,110,117,89,34,41,
    192,154,210,224,64,102,205,52,236,42,12,148,150,72,220,36,
    173,70,33,226,38,219,193,102,107,63,233,200,173,3,217,233,
    200,84,62,218,218,147,157,199,220,188,155,41,127,55,146,91,
    187,135,97,20,108,61,115,63,219,234,246,212,126,18,111,225,
    251,48,86,18,125,18,109,13,123,99,19,57,230,73,238,113,
    184,231,133,108,145,183,47,163,174,76,103,136,122,151,230,20,
    21,49,45,138,194,22,53,49,131,189,2,126,109,177,102,77,
    137,157,144,108,106,146,157,132,38,103,16,63,20,84,1,7,
    22,164,107,132,142,54,126,4,133,19,49,82,167,119,22,191,
    251,61,57,67,83,219,54,197,92,19,79,24,81,8,45,228,
    220,166,32,199,192,176,40,64,187,8,26,46,136,50,141,159,
    180,71,45,178,147,24,11,133,59,144,253,3,208,185,8,148,
    19,232,131,232,204,6,17,87,64,149,105,125,35,117,25,39,
    252,11,227,176,94,35,245,119,24,16,106,63,204,146,227,152,
    221,78,125,94,57,117,244,204,23,189,207,119,219,178,169,178,
    13,36,124,149,28,86,155,126,28,39,170,234,7,65,213,87,
    42,13,119,15,149,204,170,42,169,62,200,106,20,73,119,206,
    96,42,151,215,235,26,12,81,188,17,67,250,33,8,155,10,
    31,22,248,129,163,144,73,133,120,216,79,130,12,233,36,98,
    79,42,151,148,84,228,228,132,21,97,184,120,196,74,211,35,
    223,45,124,126,102,52,97,76,214,138,6,65,153,140,90,170,
    204,96,244,179,204,99,77,136,206,184,35,193,71,126,116,40,
    89,58,2,72,161,66,212,213,58,140,23,121,183,201,10,99,
    52,91,18,39,113,208,67,197,194,230,59,52,231,109,198,223,
    52,35,112,9,209,55,129,109,17,255,22,197,178,213,116,250,
    152,43,26,220,81,222,83,192,81,23,253,192,35,6,207,48,
    199,212,44,78,18,108,12,175,195,251,212,163,193,238,26,53,
    247,168,89,167,102,195,216,59,54,163,103,70,141,126,66,19,
    89,108,41,219,68,33,177,141,77,193,208,90,186,115,190,150,
    48,9,214,105,77,88,180,114,206,215,132,67,9,51,125,74,
    45,178,242,106,179,33,251,146,210,51,173,29,22,70,203,4,
    1,79,189,243,101,192,30,114,43,100,249,164,65,176,75,176,
    28,196,230,222,0,54,93,10,14,3,211,189,99,210,159,71,
    28,26,146,238,42,137,42,92,226,226,42,53,111,141,221,207,
    231,224,218,187,0,174,15,104,206,74,31,92,51,12,170,50,
    126,43,86,211,238,59,63,223,12,23,70,64,69,136,114,46,
    65,212,79,169,103,95,52,247,166,192,212,55,242,183,3,96,
    34,189,172,65,91,72,129,222,10,153,48,8,163,21,220,210,
    95,196,43,184,75,91,188,75,191,199,187,52,239,244,92,7,
    233,100,108,115,62,214,157,2,249,162,101,195,114,127,247,205,
    74,216,118,211,228,85,175,154,180,170,138,141,165,220,185,253,
    32,219,124,144,125,128,89,177,250,148,243,145,206,139,58,243,
    165,178,75,153,139,134,126,242,170,41,121,219,227,39,207,211,
    137,202,227,164,229,245,183,83,68,212,18,121,210,50,46,230,
    148,157,169,148,50,245,120,157,92,206,157,76,58,127,74,179,
    148,217,195,182,88,65,244,148,5,171,226,233,212,204,229,20,
    191,197,239,115,242,58,153,43,129,138,98,183,174,21,101,27,
    200,26,247,231,67,8,25,151,5,238,22,138,252,131,65,70,
    241,28,25,244,181,13,202,255,6,92,97,10,248,43,80,236,
    49,196,125,148,231,139,130,130,189,64,236,127,4,94,14,151,
    236,240,156,83,234,180,171,51,7,166,154,236,9,179,234,13,
    255,83,248,110,96,45,153,109,217,238,215,144,131,219,178,147,
    231,35,6,205,181,182,94,103,56,113,81,84,246,253,140,216,
    116,54,58,95,158,231,185,62,175,254,48,27,143,13,65,147,
    90,190,71,170,124,115,142,31,218,216,86,197,130,53,128,138,
    95,80,243,40,7,132,48,180,113,104,181,1,87,111,191,158,
    206,243,95,211,212,14,43,59,59,193,102,24,1,57,206,11,
    6,231,143,114,156,75,222,142,94,243,41,130,90,139,226,123,
    102,9,60,230,97,253,69,167,42,7,100,1,26,69,90,17,
    92,38,139,254,130,17,38,85,81,98,27,218,235,216,21,59,
    218,73,121,136,117,244,168,121,53,222,20,64,150,111,71,126,
    103,55,240,159,118,104,14,154,168,105,150,144,101,180,174,12,
    106,77,240,23,87,41,206,143,143,141,246,71,227,93,254,191,
    66,145,185,214,12,246,32,105,242,154,255,114,95,86,59,178,
    179,139,199,195,253,176,91,109,69,254,30,199,194,238,91,245,
    185,177,74,113,48,71,235,133,236,33,181,73,181,153,196,152,
    137,15,155,42,73,171,129,196,99,147,12,170,239,86,57,141,
    87,195,172,234,239,226,91,191,169,52,156,135,151,34,151,162,
    126,186,151,113,213,121,112,76,221,241,199,210,195,147,112,136,
    133,119,2,249,118,169,79,105,121,86,230,146,90,175,14,220,
    217,240,64,164,122,58,27,81,237,224,110,82,243,51,184,145,
    228,253,62,138,140,72,54,57,168,40,86,173,146,197,202,25,
    158,47,104,68,118,113,61,254,231,58,235,81,95,184,32,131,
    44,66,123,130,219,73,202,218,141,146,33,150,185,157,98,226,
    180,33,206,112,123,139,137,179,134,88,225,118,142,137,243,134,
    184,192,237,34,19,151,12,113,153,219,21,38,222,54,196,59,
    220,222,101,226,170,33,174,113,123,143,137,235,38,123,108,48,
    177,10,141,183,204,213,210,125,202,36,197,255,55,147,240,130,
    28,255,82,60,250,81,19,136,251,228,102,149,118,127,13,253,
    130,225,170,228,49,84,115,62,211,201,67,251,30,203,138,222,
    34,27,168,143,45,108,160,120,17,223,197,226,211,225,226,115,
    155,138,207,19,46,80,61,75,215,159,231,33,227,211,4,223,
    140,208,157,69,44,143,189,225,53,160,203,75,130,129,223,237,
    202,56,112,31,194,96,197,200,175,199,235,41,74,14,127,134,
    129,13,222,22,139,88,34,94,68,37,101,189,1,203,24,125,
    133,28,135,107,55,18,210,239,76,72,107,111,15,165,62,119,
    155,154,202,80,158,211,110,191,127,33,237,120,173,36,197,156,
    29,120,145,175,100,220,236,209,57,228,58,108,88,113,240,237,
    220,8,93,189,125,201,208,20,15,6,24,205,161,41,174,195,
    71,115,144,21,163,47,46,27,156,202,172,139,155,152,252,161,
    73,46,240,153,73,70,95,168,159,92,28,124,136,175,113,123,
    244,15,35,229,165,126,188,39,121,150,107,49,210,52,4,223,
    11,111,248,156,59,50,252,56,12,212,62,203,190,242,37,201,
    35,188,241,147,122,239,34,27,95,5,154,153,112,127,143,241,
    108,67,55,200,205,228,48,86,44,251,141,7,209,156,116,46,
    254,159,92,106,235,10,177,29,63,67,52,95,174,202,155,142,
    33,77,214,140,38,87,48,169,205,43,132,102,145,127,36,47,
    215,227,13,135,144,26,171,70,141,203,121,56,163,40,90,154,
    129,140,164,146,35,25,143,161,215,191,156,9,36,86,89,73,
    15,207,205,124,28,197,231,200,243,110,160,62,249,144,96,9,
    253,219,98,172,79,68,81,44,13,255,90,165,98,73,112,201,
    55,242,191,7,173,88,21,204,17,172,151,185,188,197,204,230,
    25,135,47,201,77,253,69,121,137,175,8,118,252,142,190,229,
    228,139,60,151,211,23,93,192,184,239,228,73,139,238,164,248,
    220,171,239,20,112,179,224,114,148,171,79,247,151,68,167,94,
    231,241,166,177,108,83,91,246,153,236,232,203,94,190,166,239,
    60,230,83,210,69,182,143,162,164,121,32,131,62,235,189,171,
    121,62,78,58,62,210,47,159,172,30,154,201,230,70,222,7,
    41,141,90,26,161,102,50,13,253,40,252,86,95,37,27,50,
    39,210,81,237,201,234,252,137,107,72,150,102,2,199,144,73,
    229,94,72,216,103,1,57,115,127,47,253,208,248,104,4,208,
    131,3,199,143,46,125,242,210,87,64,79,233,138,49,251,24,
    27,186,15,46,205,150,68,209,162,29,214,22,101,220,99,29,
    123,186,82,114,166,167,74,78,105,194,230,11,189,25,60,90,
    151,157,210,212,180,56,255,221,64,36,150,173,141,197,146,248,
    47,71,191,171,119,
};

EmbeddedPython embedded_m5_internal_param_BaseXBar(
    "m5/internal/param_BaseXBar.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_BaseXBar.py",
    "m5.internal.param_BaseXBar",
    data_m5_internal_param_BaseXBar,
    2405,
    7367);

} // anonymous namespace