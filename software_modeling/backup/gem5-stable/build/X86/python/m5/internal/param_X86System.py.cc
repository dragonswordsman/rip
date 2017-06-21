#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86System[] = {
    120,156,189,88,235,111,27,199,17,159,61,62,36,82,146,37,
    89,47,63,20,139,118,98,155,113,108,41,86,227,56,64,92,
    183,126,5,112,0,203,234,209,133,29,37,232,245,196,91,81,
    71,145,119,196,221,202,54,3,9,45,34,163,77,129,126,43,
    242,165,223,250,161,31,250,223,244,63,106,103,102,239,142,43,
    138,182,220,7,101,145,235,225,238,236,236,204,236,111,102,103,
    183,14,201,191,2,126,127,89,1,136,3,11,192,195,143,128,
    22,64,91,192,134,0,33,5,120,179,176,83,128,232,51,240,
    10,240,6,96,195,2,105,193,1,18,57,248,214,130,96,156,
    231,20,161,149,227,30,1,221,50,200,60,108,20,224,121,48,
    13,121,89,132,157,50,68,191,5,33,68,32,224,133,55,2,
    222,40,188,65,233,72,148,88,224,40,80,103,153,59,75,224,
    141,113,103,25,188,113,38,198,160,59,5,114,28,54,38,136,
    109,227,20,138,189,134,98,39,89,236,63,73,172,135,35,115,
    224,157,34,118,212,235,27,226,204,19,39,175,55,201,82,166,
    82,45,167,97,227,116,74,207,24,244,172,65,207,25,244,188,
    65,47,24,244,25,131,62,107,208,231,12,250,188,65,47,26,
    244,7,6,125,193,160,151,12,186,98,208,23,13,250,146,65,
    127,104,208,31,25,244,101,131,190,98,208,87,13,186,106,208,
    31,27,244,53,166,209,227,167,161,249,9,52,175,67,243,6,
    108,33,8,166,51,239,46,131,204,65,115,5,54,86,64,226,
    103,25,14,16,39,222,105,99,198,167,60,99,38,155,113,147,
    103,172,194,198,42,72,252,220,212,51,138,80,171,206,35,246,
    252,127,225,191,170,64,74,141,99,243,82,70,177,31,6,142,
    31,108,133,190,69,227,69,106,8,169,117,106,70,18,200,62,
    32,200,254,3,24,175,158,149,64,118,31,80,176,32,91,90,
    22,236,51,177,111,65,183,10,123,2,154,121,240,114,176,135,
    203,20,72,129,134,128,3,11,190,203,17,195,62,182,121,4,
    214,5,200,43,141,215,38,3,75,75,26,129,253,2,236,21,
    160,246,98,207,162,142,157,18,68,127,135,239,23,89,232,40,
    11,181,96,15,219,60,28,228,97,191,8,207,145,9,187,154,
    37,50,95,188,216,67,75,177,167,86,205,163,182,107,134,185,
    100,138,231,71,129,219,150,106,10,105,167,227,70,110,219,121,
    241,197,231,181,110,172,100,187,90,78,185,194,120,185,227,170,
    109,155,167,229,200,31,237,142,98,113,97,32,213,24,18,91,
    126,224,57,237,208,219,109,73,53,74,178,156,45,191,37,29,
    135,7,31,183,59,97,164,30,69,81,24,217,228,82,238,108,
    133,110,54,131,28,90,111,133,177,172,210,106,188,140,77,226,
    21,113,111,117,88,34,41,192,170,210,100,79,198,245,200,239,
    40,220,41,45,145,184,73,90,149,246,136,155,248,41,54,43,
    219,97,91,174,236,200,118,91,70,114,117,165,33,219,183,184,
    185,17,43,119,179,37,87,54,119,253,150,183,130,22,175,116,
    186,106,59,12,86,112,220,15,148,68,167,180,86,250,220,177,
    140,44,167,73,240,43,191,225,248,108,146,179,45,91,29,25,
    77,80,239,57,90,84,76,137,113,81,20,57,81,21,19,72,
    21,240,155,19,139,214,152,88,243,201,168,58,25,74,120,202,
    155,8,162,109,21,176,99,65,180,72,248,104,226,71,208,134,
    34,74,106,52,102,241,216,175,200,27,186,183,153,163,93,215,
    157,123,140,41,4,23,114,222,161,109,14,128,129,81,128,102,
    17,52,96,16,103,26,65,81,151,90,100,39,49,22,10,207,
    67,252,19,160,119,17,42,123,144,192,232,32,7,34,152,2,
    85,166,44,134,189,243,184,224,15,140,196,90,149,212,95,99,
    68,168,109,63,14,95,5,236,119,162,57,118,106,232,153,245,
    238,211,205,166,172,171,120,9,59,190,9,119,43,117,55,8,
    66,85,113,61,175,226,42,21,249,155,187,74,198,21,21,86,
    46,199,85,218,74,123,58,5,85,38,175,219,73,65,68,27,
    142,32,210,63,60,191,174,240,199,12,255,224,93,136,165,66,
    64,108,135,94,140,253,36,162,33,149,77,74,42,114,114,200,
    138,48,94,28,98,165,229,145,239,20,254,190,151,106,194,160,
    172,22,83,8,197,178,181,165,202,140,70,55,142,29,214,132,
    250,25,120,36,248,165,219,218,149,44,29,17,164,80,33,34,
    181,14,67,134,222,25,50,35,181,154,77,9,194,192,235,162,
    102,126,253,42,45,122,134,1,56,206,16,156,67,248,141,96,
    91,196,255,139,98,222,170,231,19,208,21,83,224,81,234,83,
    192,219,46,146,157,71,16,30,96,154,169,90,156,39,216,26,
    142,196,75,68,209,100,123,145,154,15,168,185,64,205,82,106,
    240,240,172,158,232,183,250,54,173,100,177,169,108,20,109,74,
    46,53,202,59,20,77,103,123,209,132,137,176,70,81,97,81,
    236,244,162,34,79,73,51,186,75,45,178,114,188,229,32,126,
    70,41,154,162,135,133,81,160,32,228,137,234,5,2,187,200,
    166,164,89,29,77,49,108,19,48,77,116,54,12,116,218,180,
    59,12,77,251,108,154,1,29,226,208,160,180,207,147,168,194,
    0,31,87,168,185,56,124,71,247,224,213,56,2,175,47,105,
    209,169,4,94,19,12,171,50,126,167,172,122,46,241,126,118,
    34,206,244,193,138,48,149,31,128,169,43,68,229,142,218,123,
    98,112,74,172,252,202,128,19,41,102,153,198,172,33,209,93,
    32,27,76,32,45,224,193,254,60,88,192,179,218,226,179,250,
    83,62,171,249,188,231,138,79,39,228,28,231,100,77,20,200,
    25,91,57,152,79,206,224,184,132,109,39,10,95,119,43,225,
    86,69,177,181,148,63,239,92,142,151,47,199,95,98,102,172,
    220,229,156,164,115,163,206,126,145,236,80,246,162,169,143,94,
    215,37,159,125,252,203,113,116,178,114,56,113,57,201,153,138,
    152,154,35,87,90,169,143,57,109,199,42,162,108,61,100,47,
    151,51,47,147,210,95,211,50,101,118,113,78,44,32,126,202,
    130,117,113,116,126,230,170,138,71,241,123,159,220,78,246,74,
    160,250,223,174,105,77,217,8,50,199,190,126,8,35,67,51,
    193,94,65,153,191,78,177,81,236,97,131,190,185,20,232,127,
    4,174,52,5,252,1,104,247,113,147,19,160,103,113,65,219,
    61,67,236,191,1,142,136,1,231,60,231,149,26,157,237,204,
    129,233,38,190,205,172,250,216,255,26,126,52,194,41,61,156,
    115,73,45,105,30,206,249,44,39,49,108,222,235,0,206,31,
    78,94,180,45,219,110,76,108,58,35,245,34,180,151,240,179,
    34,16,51,242,240,48,52,170,23,112,72,151,239,122,8,162,
    227,237,188,152,177,12,92,220,164,102,53,131,132,72,251,134,
    162,214,18,188,253,20,118,116,182,255,150,214,206,179,182,147,
    35,28,161,153,132,12,235,133,20,235,171,25,214,37,159,74,
    111,248,66,65,173,69,91,124,96,9,188,213,98,33,70,151,
    200,60,200,2,108,20,41,42,184,96,22,73,208,136,52,95,
    81,118,59,116,228,177,51,214,180,155,178,93,214,27,72,205,
    235,33,231,1,218,195,59,45,183,189,233,185,119,127,79,139,
    208,74,245,52,140,172,84,237,41,83,109,10,1,241,54,205,
    249,231,173,84,253,151,67,206,1,159,163,204,76,109,70,188,
    23,214,57,240,159,109,203,74,91,182,55,241,174,184,237,119,
    42,91,45,183,193,187,145,75,204,122,154,154,165,120,59,251,
    11,135,248,26,181,97,165,30,6,152,144,119,235,42,140,42,
    158,196,43,148,244,42,55,42,156,205,43,126,92,113,55,113,
    212,173,43,13,233,195,241,200,85,169,27,53,98,46,64,119,
    94,17,121,2,187,233,224,189,216,199,34,252,7,200,142,77,
    125,101,203,146,51,151,215,58,66,240,132,195,203,145,234,234,
    156,68,69,132,189,76,205,199,112,50,57,252,51,148,249,59,
    18,78,46,42,138,243,86,201,82,147,102,56,174,211,156,248,
    104,80,254,237,125,130,82,63,50,37,161,89,36,78,57,66,
    247,113,106,75,148,198,55,202,105,231,24,183,227,220,57,145,
    118,158,226,118,146,59,167,210,206,105,110,79,115,231,76,250,
    226,53,203,157,115,176,49,79,79,36,212,179,64,57,96,228,
    127,205,1,28,73,39,16,67,127,250,191,134,190,125,251,132,
    181,182,191,128,228,188,127,91,216,11,211,164,9,29,246,77,
    145,94,41,76,123,248,173,98,254,40,6,157,122,36,93,37,
    245,182,44,14,221,64,78,26,122,201,63,247,34,249,104,1,
    124,47,179,229,128,43,156,238,44,239,150,190,69,241,110,137,
    231,193,57,172,132,243,92,9,223,161,74,120,143,13,119,44,
    93,12,247,0,88,200,236,39,87,6,242,149,211,231,3,93,
    236,146,102,110,167,35,3,207,190,6,102,253,202,195,67,222,
    119,202,81,127,1,163,216,200,137,89,44,88,143,70,25,101,
    95,195,54,222,182,66,22,87,195,223,64,70,232,95,83,132,
    86,249,114,153,165,96,251,14,53,156,116,179,124,107,255,34,
    115,255,234,0,248,185,245,142,239,24,143,106,14,107,229,116,
    66,214,129,46,75,255,205,52,44,145,20,213,141,239,102,83,
    31,13,144,76,35,45,167,221,57,164,194,123,49,210,162,100,
    123,255,128,186,244,174,217,90,35,90,228,61,216,104,137,83,
    230,18,220,173,42,3,102,198,237,77,63,140,13,241,199,50,
    145,112,186,12,154,157,12,76,206,27,158,196,133,100,127,232,
    232,231,91,125,234,162,159,85,20,118,241,58,200,151,44,252,
    221,114,156,147,56,110,127,142,50,127,36,225,179,192,199,173,
    40,226,129,59,39,248,207,42,21,75,130,171,151,190,55,117,
    173,211,207,32,189,82,116,99,155,115,238,100,6,87,126,251,
    77,43,9,66,54,151,212,107,110,91,191,221,241,235,148,253,
    33,36,111,10,246,213,12,246,244,206,194,247,56,125,75,198,
    140,195,149,21,23,82,54,175,72,175,14,237,91,203,169,81,
    203,153,81,247,30,172,63,182,107,15,215,249,253,185,125,235,
    88,198,103,234,74,31,71,50,134,222,121,136,184,127,198,59,
    251,82,82,165,167,46,191,75,152,57,65,157,31,200,89,243,
    219,250,137,85,77,247,141,123,145,139,244,92,95,111,44,35,
    223,109,249,223,203,119,155,241,130,204,248,228,109,28,143,9,
    234,79,214,191,106,133,174,242,131,198,122,18,83,87,143,225,
    127,16,6,91,126,67,91,115,253,168,139,18,174,251,110,44,
    53,231,163,64,69,221,212,81,199,41,211,55,237,8,127,143,
    243,209,107,53,64,254,181,99,228,31,158,117,100,139,123,33,
    240,228,62,70,170,110,181,169,3,52,49,153,106,92,244,239,
    70,242,88,77,6,206,226,183,186,1,184,224,72,60,2,26,
    25,236,182,157,39,178,29,70,221,39,161,39,213,98,223,248,
    61,207,139,108,55,104,100,202,92,236,103,72,174,33,90,70,
    202,85,25,168,195,97,222,183,0,24,7,19,0,47,13,28,
    127,208,10,235,59,210,75,120,6,131,150,121,30,134,109,2,
    252,104,146,138,105,152,83,231,33,127,80,170,209,36,95,8,
    14,87,95,156,50,35,217,240,99,66,243,120,198,154,84,36,
    148,210,216,97,71,50,182,49,237,4,114,171,190,73,235,135,
    189,187,244,116,28,99,197,12,244,208,95,154,44,97,158,165,
    66,37,39,202,88,170,228,115,227,83,165,252,248,88,41,95,
    26,201,241,59,237,132,152,177,202,249,210,216,184,248,79,255,
    150,48,103,151,173,165,153,146,248,55,189,187,93,117,
};

EmbeddedPython embedded_m5_internal_param_X86System(
    "m5/internal/param_X86System.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_X86System.py",
    "m5.internal.param_X86System",
    data_m5_internal_param_X86System,
    2574,
    8109);

} // anonymous namespace