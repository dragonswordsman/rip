#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_StackDistCalc[] = {
    120,156,197,89,253,114,219,198,17,223,3,64,74,164,40,139,
    250,150,37,213,98,218,113,195,120,18,169,117,227,186,51,81,
    213,186,105,58,211,204,68,73,193,116,236,48,153,162,16,112,
    162,64,129,0,7,56,201,102,70,234,31,149,251,241,2,125,
    132,254,209,23,232,115,244,141,210,221,61,0,132,190,38,234,
    180,102,37,242,116,88,220,237,237,199,111,247,246,78,30,100,
    63,21,252,254,188,5,144,30,10,0,31,63,2,66,128,129,
    128,174,0,33,5,248,75,112,92,129,228,125,240,43,240,26,
    160,107,128,52,224,2,59,38,124,105,64,212,224,57,85,8,
    77,166,8,24,213,65,90,208,173,192,243,104,30,44,89,133,
    227,58,36,191,7,33,68,36,224,133,63,5,254,52,188,70,
    238,216,169,49,195,105,32,98,157,137,53,240,103,152,88,7,
    191,193,157,25,24,53,65,54,160,59,75,195,186,247,144,237,
    35,100,59,199,108,255,69,108,125,124,179,12,254,61,26,142,
    114,125,65,35,45,26,201,235,205,49,151,102,46,229,60,116,
    23,242,254,98,169,191,196,125,92,105,1,250,203,208,95,129,
    254,42,160,65,252,249,130,235,26,72,19,250,247,161,123,31,
    36,126,214,224,2,237,227,47,148,102,172,243,140,197,98,198,
    6,207,216,132,238,38,72,252,108,232,25,85,232,180,87,208,
    230,193,55,248,211,70,155,131,106,96,115,42,147,52,136,35,
    39,136,14,227,192,160,247,85,106,200,67,30,53,83,153,171,
    62,36,87,253,3,216,79,190,145,185,234,28,144,177,32,93,
    66,3,206,185,115,110,192,168,13,103,2,250,22,248,38,156,
    225,50,21,18,160,39,224,194,128,175,76,26,112,142,173,133,
    6,125,0,150,210,126,234,179,65,53,167,41,56,175,192,89,
    5,58,47,206,12,34,28,215,32,249,59,124,189,201,76,167,
    153,169,1,103,216,90,112,97,193,121,21,158,227,32,36,245,
    107,164,190,120,113,134,154,34,165,211,182,80,218,253,146,186,
    164,138,31,36,145,59,144,106,9,251,206,208,77,220,129,211,
    81,174,119,252,203,32,85,31,186,161,215,174,231,35,227,116,
    123,232,170,35,155,167,154,100,147,193,80,49,203,56,146,106,
    6,59,135,65,228,59,131,216,63,9,165,154,38,126,206,97,
    16,74,199,225,151,191,30,12,227,68,125,148,36,113,98,147,
    89,153,24,198,110,49,131,140,234,133,113,42,219,180,26,47,
    99,19,123,69,163,15,135,204,145,4,96,113,105,178,47,83,
    47,9,134,10,189,165,57,210,104,226,214,38,63,113,147,118,
    176,217,57,138,7,114,231,88,14,6,50,145,143,119,122,114,
    240,132,155,247,82,229,30,132,114,231,224,36,8,253,157,103,
    246,39,59,195,145,58,138,163,29,124,31,68,74,162,97,194,
    157,27,76,178,141,195,22,136,249,203,160,231,4,172,150,115,
    36,195,161,76,102,137,186,78,11,139,166,104,136,170,48,69,
    91,204,98,175,130,95,83,108,26,51,98,63,32,197,60,82,
    150,112,101,149,145,68,238,21,112,108,64,178,73,56,233,227,
    71,144,99,17,45,29,122,103,240,187,223,144,69,52,181,111,
    146,247,53,241,140,177,133,32,195,145,187,228,238,8,24,32,
    21,232,87,65,3,7,241,166,145,148,140,168,197,225,196,198,
    64,230,22,164,127,3,180,48,66,230,12,50,56,93,152,32,
    162,38,168,58,69,49,82,87,112,193,63,50,34,59,109,18,
    127,159,81,161,142,130,52,126,25,177,237,169,207,49,212,65,
    203,124,54,250,244,160,47,61,149,110,33,225,139,248,164,229,
    185,81,20,171,150,235,251,45,87,169,36,56,56,81,50,109,
    169,184,245,48,109,147,59,237,249,28,88,5,191,209,48,7,
    18,57,29,129,164,31,252,192,83,248,176,200,15,236,133,84,
    42,4,197,81,236,167,72,39,22,61,169,108,18,82,145,145,
    99,22,132,49,227,208,80,90,30,199,221,195,231,103,185,36,
    12,204,118,53,135,81,42,195,67,85,103,68,186,105,234,176,
    36,68,103,240,17,227,83,55,60,145,204,29,81,164,80,32,
    234,106,25,38,0,191,53,82,37,215,156,213,137,226,200,31,
    161,116,129,247,54,45,188,198,32,108,48,12,151,17,130,83,
    216,86,241,111,85,172,24,158,149,1,175,154,131,143,210,160,
    2,118,189,200,188,143,64,188,192,148,211,54,56,103,176,70,
    28,145,223,165,30,77,182,55,169,249,14,53,15,168,217,202,
    149,126,179,154,207,94,213,252,41,173,102,176,186,172,24,57,
    199,204,21,243,47,69,213,253,113,84,97,98,236,80,116,24,
    20,67,227,232,176,40,137,38,123,212,226,80,142,59,19,210,
    207,41,101,83,20,49,51,10,24,132,62,245,198,1,193,102,
    178,155,164,254,116,142,101,155,0,90,70,105,175,132,82,155,
    60,196,16,181,239,231,217,208,161,17,26,156,246,6,177,170,
    220,96,231,22,53,111,77,198,216,99,152,245,174,193,236,3,
    90,184,153,193,108,150,225,85,199,111,211,240,204,204,3,197,
    46,185,120,5,94,132,45,235,6,108,125,159,122,230,117,157,
    39,10,171,76,211,95,149,96,69,194,25,101,133,246,177,51,
    90,37,61,202,128,90,197,13,255,121,180,138,123,184,193,123,
    248,15,120,15,231,58,128,43,32,157,160,77,206,209,186,83,
    33,131,28,154,176,146,237,205,105,13,219,97,18,191,26,181,
    226,195,150,98,141,41,159,238,62,76,183,31,166,31,96,166,
    108,237,113,142,210,185,82,103,195,68,14,41,155,209,212,143,
    94,121,146,247,67,126,114,28,157,188,28,78,100,78,182,207,
    34,182,150,201,156,70,110,103,78,227,169,74,40,123,79,192,
    210,245,194,210,36,248,199,180,84,157,205,108,138,85,196,81,
    93,176,60,142,206,217,92,113,241,91,252,254,130,76,79,58,
    75,160,154,216,238,104,105,89,17,82,201,126,247,18,86,222,
    168,26,246,14,242,253,109,142,145,234,24,35,244,53,115,208,
    255,5,184,18,21,240,103,32,20,160,179,51,208,23,49,66,
    110,95,164,225,191,3,142,142,27,246,127,206,51,29,218,243,
    121,4,166,159,244,41,15,213,229,192,199,240,215,82,104,229,
    155,182,153,213,154,229,77,219,42,114,20,195,231,78,27,179,
    117,57,153,145,107,142,220,148,134,233,12,53,142,214,241,38,
    80,20,136,152,161,223,44,150,166,245,34,14,201,243,213,24,
    73,180,237,109,136,69,163,132,143,31,82,243,184,128,134,200,
    105,111,76,180,45,184,125,135,118,244,46,240,37,173,111,177,
    196,115,83,156,129,46,113,41,176,95,201,177,255,184,192,190,
    228,29,235,53,31,62,168,53,200,221,23,134,192,147,31,22,
    107,116,208,178,64,86,160,91,165,40,225,194,90,100,65,36,
    242,28,70,235,93,218,14,217,40,251,218,92,133,199,181,51,
    169,121,53,129,220,64,254,220,13,221,193,129,239,238,245,105,
    33,90,205,203,195,202,200,69,111,150,69,167,144,16,183,73,
    207,143,79,114,21,78,39,144,23,126,12,44,152,22,157,163,
    192,143,61,78,6,159,31,201,214,64,14,14,240,124,121,20,
    12,91,135,161,219,99,175,152,153,106,159,230,170,41,118,235,
    213,226,34,125,68,109,220,242,226,8,147,245,137,167,226,164,
    229,75,60,114,73,191,245,94,139,51,125,43,72,91,238,1,
    190,117,61,165,33,126,57,70,185,130,117,147,94,202,197,234,
    241,75,234,78,200,171,14,158,167,3,44,218,67,40,182,85,
    125,204,43,18,55,151,227,58,98,112,7,196,195,148,26,233,
    92,69,133,134,189,77,205,59,48,185,252,254,62,232,67,127,
    74,166,170,138,13,163,102,112,41,119,105,224,103,52,55,189,
    30,168,255,188,75,160,234,203,153,44,92,171,52,82,78,209,
    121,158,218,26,165,249,110,61,39,206,112,219,96,226,108,78,
    188,199,237,28,19,155,57,113,158,219,5,38,46,230,196,37,
    110,151,153,184,146,95,31,173,50,113,141,174,81,252,42,83,
    214,41,89,76,253,183,201,130,195,109,66,129,150,254,79,115,
    132,253,244,255,32,185,253,19,200,138,133,219,242,131,40,171,
    53,171,243,67,95,228,231,147,178,78,124,9,178,126,51,72,
    29,47,145,174,146,218,69,155,19,81,148,179,140,94,246,116,
    28,246,215,171,233,103,133,78,23,92,38,141,150,216,115,250,
    104,198,158,19,207,163,117,44,171,45,46,171,119,169,172,62,
    99,3,56,134,174,172,199,128,172,20,118,88,197,38,146,47,
    157,27,108,161,171,103,146,206,29,14,101,228,219,143,160,92,
    16,243,235,9,224,128,18,219,31,160,84,181,152,98,9,43,
    224,235,209,71,105,187,164,35,187,176,82,196,219,100,156,201,
    168,253,83,142,218,54,109,44,227,220,109,239,82,195,217,186,
    72,212,246,207,10,87,188,123,11,36,253,32,37,113,156,16,
    55,49,55,113,232,246,40,165,243,215,127,54,1,235,43,190,
    189,188,233,165,122,231,219,56,197,189,210,186,119,31,77,139,
    206,151,23,205,223,112,197,123,19,143,146,88,206,65,16,233,
    5,239,60,152,214,35,251,94,125,161,30,222,198,33,19,104,
    188,214,221,70,210,66,148,100,46,81,213,131,91,230,158,202,
    36,56,28,49,251,111,25,66,124,41,226,244,35,99,159,83,
    149,47,67,169,228,77,81,202,250,102,55,39,190,196,170,38,
    30,225,81,150,15,135,248,28,58,206,164,74,129,159,34,223,
    4,178,107,50,44,5,68,21,139,129,101,145,253,26,181,106,
    77,112,141,117,229,191,5,90,50,186,196,208,135,161,81,106,
    115,194,159,43,226,130,111,180,243,90,135,66,136,143,237,251,
    238,64,223,70,242,93,155,253,61,200,110,70,236,183,139,248,
    162,27,35,62,129,234,115,62,166,57,174,255,184,220,179,127,
    68,116,234,13,158,108,231,170,109,103,170,5,3,125,41,203,
    119,234,131,39,12,225,242,48,63,113,177,191,124,133,154,162,
    207,220,48,248,90,95,198,230,100,69,138,92,229,75,242,20,
    79,92,68,93,223,144,216,165,137,236,225,35,106,62,87,158,
    145,229,103,178,184,106,221,2,168,242,236,9,65,64,31,76,
    244,253,201,30,221,212,165,123,216,208,221,106,109,174,134,112,
    160,212,109,138,58,38,111,203,108,52,107,86,99,166,102,213,
    166,76,190,18,155,197,131,104,221,170,205,52,4,253,110,33,
    88,234,198,214,82,77,252,27,93,23,97,15,
};

EmbeddedPython embedded_m5_internal_param_StackDistCalc(
    "m5/internal/param_StackDistCalc.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_StackDistCalc.py",
    "m5.internal.param_StackDistCalc",
    data_m5_internal_param_StackDistCalc,
    2316,
    7160);

} // anonymous namespace