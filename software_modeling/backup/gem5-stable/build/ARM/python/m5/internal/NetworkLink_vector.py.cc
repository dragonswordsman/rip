#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_NetworkLink_vector[] = {
    120,156,205,92,127,104,36,87,29,255,206,236,143,220,238,37,
    151,228,114,73,238,46,233,221,246,199,181,105,181,23,173,61,
    171,182,92,173,109,45,173,246,106,39,149,107,211,234,116,178,
    243,146,76,178,59,179,157,153,220,93,106,78,169,57,173,63,
    81,241,7,42,34,34,248,135,130,8,130,32,8,130,32,8,
    130,80,16,4,65,16,20,65,16,4,193,255,4,245,251,249,
    190,153,221,217,100,87,122,221,219,137,151,236,247,222,206,190,
    125,223,247,121,223,207,251,190,247,253,206,155,212,41,249,87,
    226,215,187,107,68,209,21,131,200,229,95,131,26,68,77,131,
    150,13,50,148,65,238,49,218,44,81,120,47,185,37,186,70,
    180,108,146,50,105,151,11,5,122,222,36,127,84,190,83,166,
    70,65,174,24,180,93,37,85,164,229,18,93,244,39,169,168,
    202,180,89,165,240,69,50,12,195,55,232,89,119,132,220,67,
    116,141,91,231,66,69,26,60,68,184,88,149,139,21,114,15,
    203,197,42,185,163,82,56,76,219,19,164,70,105,121,12,213,
    150,143,112,179,119,113,179,227,210,236,107,104,214,229,79,166,
    201,61,130,234,220,175,231,80,179,136,154,162,111,92,90,153,
    32,87,90,89,101,60,147,237,138,147,164,10,180,113,148,150,
    143,146,226,223,73,218,101,200,9,156,41,90,62,150,66,155,
    206,148,103,50,229,217,76,249,120,166,124,66,202,71,83,133,
    83,109,133,39,69,225,28,45,207,145,226,223,147,90,97,153,
    150,22,102,216,10,222,127,248,223,2,91,129,226,81,22,151,
    84,24,121,129,111,123,254,106,224,153,248,188,12,1,155,213,
    33,70,18,227,61,12,227,125,159,196,114,174,153,24,239,42,
    113,195,6,58,212,48,233,170,20,174,154,180,189,64,59,6,
    109,20,201,45,208,14,171,41,161,3,107,6,237,154,244,66,
    1,21,174,178,44,242,16,159,162,98,172,45,183,33,67,172,
    91,26,161,171,37,218,41,209,210,179,59,38,46,108,86,40,
    252,30,189,60,47,141,30,146,70,77,218,97,89,164,221,34,
    93,45,211,69,174,196,151,54,42,128,111,60,187,195,72,249,
    202,210,66,145,123,123,33,3,23,80,92,47,244,157,166,138,
    167,184,108,95,80,241,229,32,220,124,191,231,111,218,151,84,
    61,14,194,133,106,90,49,136,206,182,156,120,221,146,111,22,
    48,36,205,86,44,45,6,190,138,15,115,97,213,243,93,187,
    25,184,91,13,21,31,66,115,246,170,215,80,182,45,31,62,
    222,108,5,97,252,104,24,6,161,133,81,149,139,141,192,105,
    127,3,99,90,111,4,145,90,128,54,81,99,161,249,24,181,
    87,91,210,34,58,32,189,197,151,93,21,213,67,175,21,179,
    177,116,139,168,141,214,22,96,38,17,145,197,98,113,61,104,
    170,197,77,213,108,170,80,221,179,184,166,154,231,68,220,29,
    197,206,74,67,45,174,108,121,13,119,241,33,235,201,197,214,
    118,188,30,248,139,252,185,231,199,138,199,165,177,184,127,68,
    206,114,173,163,104,251,178,183,102,123,130,202,94,87,141,150,
    10,199,112,245,36,244,26,19,198,168,81,54,10,198,130,49,
    198,165,18,191,10,198,188,121,216,184,224,1,87,29,88,193,
    170,98,150,71,48,174,65,155,38,133,243,96,201,6,255,26,
    48,43,115,101,9,159,153,242,217,211,24,16,125,117,163,0,
    219,235,139,59,194,44,166,24,215,124,0,198,246,73,232,81,
    162,141,50,105,218,48,219,52,143,194,109,72,174,142,102,76,
    110,188,72,209,87,137,7,152,9,179,67,9,153,118,11,100,
    248,19,20,87,49,171,249,234,12,43,252,184,240,113,105,1,
    221,191,32,164,136,215,189,40,184,236,203,208,163,44,51,104,
    137,71,230,3,219,79,173,108,240,120,69,167,249,194,115,193,
    86,173,238,248,126,16,215,28,215,173,57,113,28,122,43,91,
    177,138,106,113,80,59,19,45,192,154,214,100,202,171,118,123,
    219,173,148,71,176,57,243,72,191,113,189,122,204,111,132,176,
    182,88,33,82,49,115,98,61,112,35,190,142,38,214,84,108,
    161,147,49,6,57,144,142,8,101,108,84,133,122,174,119,132,
    223,63,148,246,68,120,185,80,78,89,20,169,198,106,92,21,
    66,58,81,100,75,79,112,93,184,135,134,47,57,141,45,37,
    173,51,137,98,238,16,138,186,15,195,103,223,113,32,73,129,
    11,26,63,240,221,109,238,156,87,191,3,122,143,11,7,71,
    133,133,211,204,192,17,150,101,254,191,108,204,152,245,98,194,
    187,114,202,61,248,192,152,196,242,70,98,124,230,225,46,251,
    155,5,83,28,134,0,146,249,120,11,74,248,178,53,15,113,
    19,196,41,136,211,41,230,161,2,31,219,11,252,62,40,51,
    5,173,224,130,105,10,41,46,183,107,78,157,232,204,41,118,
    138,75,152,27,38,102,80,103,110,20,225,64,195,243,144,92,
    85,102,93,129,162,103,224,174,49,135,164,49,76,23,38,62,
    74,157,233,32,163,100,77,0,253,161,148,201,22,232,153,229,
    232,90,134,163,22,12,36,4,181,78,164,174,208,70,13,77,
    77,107,14,77,149,122,12,115,13,226,230,92,198,186,67,178,
    181,125,36,187,31,122,39,18,146,141,9,185,170,252,154,48,
    235,133,196,0,237,5,114,106,15,185,192,172,98,15,102,221,
    142,82,97,63,228,60,73,149,0,125,111,134,84,232,155,153,
    197,115,129,11,219,179,128,145,165,211,44,47,245,23,253,89,
    94,189,77,89,189,223,34,171,183,236,0,100,55,164,157,115,
    65,252,179,46,148,48,30,171,5,154,73,86,229,168,194,178,
    21,6,87,182,107,193,106,45,22,192,240,165,15,156,137,206,
    158,137,238,103,47,89,59,47,254,73,251,73,237,9,67,213,
    130,39,195,87,31,189,82,87,178,20,202,59,219,214,142,203,
    22,39,102,39,75,44,51,107,26,163,105,166,195,44,46,60,
    138,67,120,238,225,15,116,181,61,208,232,247,19,208,84,149,
    81,46,24,179,204,162,170,33,221,177,181,187,150,173,150,124,
    202,175,247,96,228,1,89,17,182,199,214,146,238,172,224,0,
    34,235,205,93,76,25,38,10,107,145,155,253,96,202,144,114,
    135,33,120,21,82,198,191,74,178,3,53,232,147,4,14,176,
    169,19,198,183,39,8,140,62,133,234,31,38,153,26,61,86,
    126,241,49,75,88,237,165,6,187,158,232,62,169,170,55,2,
    79,208,167,50,243,42,93,174,11,201,30,51,187,92,23,219,
    254,73,200,243,186,150,228,98,183,35,131,101,214,157,8,213,
    180,119,234,76,213,142,255,111,239,12,217,59,15,149,73,135,
    180,14,27,221,121,161,195,35,44,120,115,198,148,153,97,199,
    91,33,238,105,19,195,72,175,13,171,103,167,169,255,210,108,
    107,255,255,60,212,23,165,195,227,35,178,11,209,251,165,199,
    185,97,135,155,105,51,191,148,50,255,207,109,230,43,89,172,
    174,73,204,1,105,194,218,187,166,193,33,32,239,210,16,113,
    21,73,149,104,185,76,106,4,161,1,2,187,82,26,216,149,
    147,192,174,19,11,142,74,185,34,229,49,137,5,9,1,92,
    18,11,142,167,177,32,71,113,99,82,152,76,194,61,14,220,
    146,0,111,10,1,30,10,199,146,0,111,121,26,17,24,10,
    51,73,4,182,60,139,88,22,133,227,8,24,81,56,65,238,
    140,20,78,146,59,43,133,57,76,106,44,57,50,159,210,151,
    120,92,248,231,174,165,91,172,120,65,219,183,205,80,77,62,
    136,43,195,247,100,224,223,3,13,167,185,226,58,231,215,160,
    7,202,234,169,23,48,211,158,79,100,123,142,25,108,244,235,
    188,188,61,151,34,184,52,124,47,246,118,110,182,221,115,153,
    179,110,80,23,215,245,204,186,170,53,85,115,133,163,224,117,
    175,85,91,109,56,107,98,147,66,130,236,169,20,89,44,44,
    220,187,13,138,238,130,12,106,245,192,231,133,101,11,250,106,
    174,226,200,80,185,181,187,107,178,42,213,188,168,230,172,240,
    167,78,61,214,51,178,219,163,200,78,219,9,215,34,217,84,
    111,94,70,49,31,155,218,28,244,123,28,91,120,212,189,3,
    232,226,35,122,231,118,104,40,0,74,109,231,50,79,121,44,
    66,48,95,179,77,188,180,123,109,226,141,105,243,108,24,233,
    70,54,203,58,9,149,143,237,115,59,182,132,52,121,130,128,
    175,12,58,35,173,35,227,246,82,154,157,68,109,44,122,25,
    220,15,103,106,63,28,207,175,135,153,157,14,190,225,15,159,
    69,32,7,52,135,25,6,221,48,72,174,202,66,178,206,231,
    97,37,65,4,197,91,3,35,154,237,129,200,227,142,249,117,
    149,65,117,46,23,84,152,237,169,242,43,3,35,235,49,155,
    212,75,91,78,35,119,88,240,67,162,249,35,61,60,216,117,
    184,135,30,228,171,7,173,237,28,189,131,240,14,58,63,122,
    195,145,248,234,74,156,55,18,232,124,101,48,36,61,166,143,
    45,88,108,59,79,52,73,66,78,244,94,187,225,136,90,161,
    186,228,5,91,81,222,136,82,189,175,14,236,11,102,246,131,
    114,220,75,123,156,92,62,174,27,65,91,162,251,51,3,227,
    154,238,69,63,245,18,147,47,111,39,87,22,6,66,245,231,
    135,131,202,87,7,134,10,170,191,56,48,170,158,174,194,227,
    56,191,11,87,62,36,76,246,213,162,252,203,67,66,22,109,
    173,28,28,50,81,254,181,97,248,13,219,62,24,147,73,26,
    78,235,254,6,209,190,92,40,112,61,214,11,215,231,122,57,
    249,158,184,246,26,236,157,57,226,18,221,223,162,253,43,87,
    87,132,183,211,137,240,164,95,185,175,176,30,215,177,237,111,
    119,250,185,32,35,213,78,119,74,230,72,167,154,90,97,208,
    82,97,188,173,83,124,72,206,91,103,33,238,236,114,115,174,
    106,168,88,217,221,182,136,39,168,125,135,194,85,28,147,7,
    219,182,157,12,20,127,193,182,37,74,179,30,132,120,8,226,
    97,136,71,33,30,131,120,28,226,125,16,79,66,60,5,241,
    52,196,18,4,242,164,214,69,136,231,32,144,249,178,94,232,
    26,195,161,6,152,247,114,179,171,104,31,227,85,54,230,204,
    138,89,54,42,70,197,172,20,70,249,167,210,239,199,148,251,
    187,186,157,236,45,241,253,153,57,215,120,29,153,57,125,44,
    35,201,207,149,211,132,220,72,154,144,147,115,24,40,84,36,
    45,167,115,117,149,52,87,167,115,114,163,105,78,110,44,205,
    201,29,73,115,114,227,105,78,110,34,205,201,77,166,57,185,
    163,105,78,110,42,205,201,29,75,115,114,211,105,78,110,38,
    205,201,205,166,57,185,227,105,78,238,4,185,199,211,44,221,
    137,36,75,231,158,148,194,60,185,115,82,184,137,220,121,41,
    156,34,247,38,41,156,38,247,148,20,106,228,158,150,194,205,
    228,214,164,112,11,185,55,75,225,86,114,111,145,194,109,228,
    222,42,133,51,228,222,38,133,219,73,221,65,27,11,180,124,
    39,185,103,228,202,93,72,13,226,246,208,64,169,193,124,86,
    113,73,204,252,128,110,100,70,208,186,47,255,142,91,239,160,
    228,70,70,191,108,224,117,238,244,231,122,206,39,241,113,240,
    66,121,123,215,84,239,15,233,127,172,2,213,182,173,118,247,
    100,251,234,148,235,130,32,46,243,71,61,186,122,29,6,56,
    213,219,0,54,110,79,188,172,194,32,223,24,82,223,239,110,
    171,254,241,96,216,250,144,203,182,87,130,160,113,16,193,177,
    214,251,147,193,80,157,236,135,170,161,252,124,65,233,221,128,
    168,253,105,6,83,246,78,166,96,154,162,238,237,160,190,43,
    185,31,217,233,126,200,214,84,28,53,188,58,162,175,206,205,
    0,67,230,43,228,198,240,161,142,82,114,16,35,233,199,207,
    246,216,240,250,183,191,125,193,70,29,176,121,239,131,53,202,
    78,7,126,62,84,171,242,54,114,159,85,173,77,136,70,142,
    104,59,189,248,197,192,54,237,235,76,89,9,47,45,205,3,
    48,233,225,20,164,214,255,203,225,97,228,201,113,160,24,219,
    250,127,53,60,140,209,1,99,108,235,255,53,13,180,134,204,
    244,6,216,10,90,121,174,31,48,10,171,252,77,6,203,27,
    75,145,156,232,13,199,105,181,148,239,30,72,194,78,171,126,
    109,48,43,29,239,13,75,53,91,113,174,119,92,228,230,17,
    148,254,118,48,60,179,189,241,68,222,203,121,222,94,214,231,
    120,89,231,239,6,230,93,63,64,151,157,86,134,117,185,196,
    105,26,21,43,254,253,80,56,183,162,214,60,63,111,206,137,
    210,63,12,197,211,193,47,228,236,233,88,229,31,7,195,210,
    199,205,133,185,27,7,30,78,107,253,211,80,60,66,152,179,
    121,48,119,160,243,47,67,153,59,245,134,114,114,205,100,232,
    7,102,88,233,95,7,195,83,235,141,103,13,7,44,27,141,
    160,158,119,134,6,61,238,82,254,183,193,240,245,201,15,240,
    150,196,94,113,234,155,185,223,106,78,244,254,125,15,170,235,
    223,191,246,219,56,132,78,164,114,223,185,202,238,1,154,255,
    177,7,87,250,56,128,224,122,164,131,139,65,233,135,227,142,
    73,154,45,125,24,3,143,230,93,244,79,82,145,167,43,142,
    210,63,136,163,244,59,114,8,218,54,245,105,250,78,58,174,
    68,217,5,192,87,151,237,253,227,161,147,170,56,16,99,225,
    108,98,38,8,197,192,200,167,195,79,225,225,166,204,63,137,
    210,147,202,227,70,193,56,102,140,189,209,13,201,124,31,70,
    111,69,235,154,210,121,239,133,229,225,133,84,251,191,134,226,
    94,87,195,192,207,245,216,14,184,37,74,255,61,24,158,62,
    139,95,222,174,7,139,31,116,26,198,13,72,246,244,139,196,
    162,200,91,243,51,51,236,124,126,20,148,112,76,244,23,141,
    65,29,107,191,29,152,146,24,38,111,207,42,219,48,81,61,
    50,44,100,158,31,169,48,62,16,100,90,117,53,131,236,141,
    249,196,62,249,114,30,56,21,94,58,152,179,87,137,238,49,
    99,24,219,151,186,211,114,234,94,190,25,2,108,95,82,189,
    19,61,80,117,157,160,248,127,56,35,63,101,36,119,52,23,
    222,68,217,195,19,214,135,32,228,184,68,231,164,4,110,235,
    201,189,54,75,65,224,241,8,11,79,2,88,56,105,111,225,
    164,186,245,18,4,26,180,112,28,218,186,12,177,77,233,246,
    226,42,196,199,32,94,129,216,133,248,4,4,78,21,90,159,
    134,248,44,4,142,173,89,95,128,248,18,132,28,216,248,10,
    4,78,17,89,95,135,248,38,4,14,169,88,56,1,98,125,
    7,226,187,93,179,56,57,206,209,99,191,99,163,222,139,93,
    99,60,212,129,118,184,89,60,191,30,225,145,190,178,49,103,
    148,77,28,177,184,174,159,145,189,71,48,42,134,44,35,123,
    254,0,131,6,35,247,133,228,57,179,109,193,68,214,120,123,
    104,244,97,206,228,60,12,172,44,123,147,11,78,83,63,226,
    45,79,48,91,183,66,224,72,129,117,71,155,2,24,83,121,
    184,79,63,64,201,123,73,121,88,69,158,77,177,222,6,113,
    111,58,27,247,28,103,194,225,153,144,163,228,136,47,196,120,
    112,181,121,238,108,58,100,103,91,78,232,52,179,230,145,63,
    103,208,60,39,247,75,246,87,124,152,67,158,77,229,234,103,
    231,251,52,38,117,30,9,154,14,95,159,235,89,99,201,107,
    38,45,76,238,249,220,13,241,173,233,61,87,217,77,121,78,
    131,23,24,177,101,191,91,57,89,156,249,80,75,63,104,165,
    31,94,61,143,212,184,196,15,120,170,189,50,94,97,154,225,
    175,42,20,140,42,111,164,139,133,209,137,74,113,244,112,165,
    88,25,41,200,227,200,99,198,148,89,45,86,14,207,188,171,
    98,84,185,102,231,103,102,179,98,252,23,107,86,227,80,
};

EmbeddedPython embedded_m5_internal_NetworkLink_vector(
    "m5/internal/NetworkLink_vector.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/NetworkLink_vector.py",
    "m5.internal.NetworkLink_vector",
    data_m5_internal_NetworkLink_vector,
    3503,
    17799);

} // anonymous namespace