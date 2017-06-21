#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NoncoherentXBar[] = {
    120,156,197,88,235,110,220,198,21,62,67,114,87,218,149,100,
    73,150,37,217,150,108,177,41,220,108,141,70,106,156,184,46,
    16,213,173,157,11,144,0,86,82,110,2,59,74,80,150,34,
    103,181,92,241,178,32,71,150,215,144,254,84,70,219,23,104,
    223,160,63,250,54,125,163,246,156,51,36,151,186,1,1,26,
    111,228,229,120,56,156,57,115,46,223,185,204,248,80,252,53,
    240,249,131,13,144,255,83,0,4,248,19,16,1,196,2,118,
    5,8,41,32,184,1,7,13,200,62,132,160,1,111,0,118,
    13,144,6,156,98,199,132,239,12,72,102,121,77,19,34,147,
    71,4,140,218,32,45,216,109,192,243,100,17,44,217,132,131,
    54,100,127,6,33,68,34,224,69,48,5,193,52,188,65,234,
    216,105,49,193,105,160,193,54,15,182,32,152,225,193,54,4,
    179,220,153,129,209,2,200,89,216,157,163,105,187,215,144,236,
    125,36,59,207,100,255,67,100,3,252,178,12,193,53,154,142,
    124,125,75,51,45,154,201,251,205,51,149,133,146,203,69,216,
    189,94,246,151,106,253,27,181,254,114,173,191,82,235,175,214,
    250,55,185,143,156,93,135,193,45,24,220,134,193,26,244,80,
    89,139,21,23,235,32,77,24,220,129,221,59,32,241,183,14,
    167,168,207,224,122,109,197,93,94,177,84,173,216,224,21,54,
    236,218,32,241,183,161,87,52,161,219,89,65,27,133,255,197,
    191,14,218,8,212,44,54,47,101,150,135,105,226,134,73,47,
    13,13,250,222,164,134,44,234,83,51,85,152,246,99,50,237,
    191,129,237,26,24,133,105,79,0,9,11,146,37,50,224,132,
    59,39,6,140,58,112,44,96,96,65,96,194,49,110,211,32,
    6,246,5,156,26,240,189,73,19,78,176,181,208,0,119,193,
    82,218,174,3,54,128,166,52,5,39,13,56,110,64,247,197,
    177,65,3,7,45,200,254,5,175,215,153,232,52,19,53,224,
    24,91,11,78,45,56,105,194,115,156,132,67,131,22,137,47,
    94,28,163,164,56,210,237,88,200,237,78,77,92,18,37,8,
    179,196,139,165,34,77,184,67,47,243,98,119,39,77,252,180,
    47,51,153,168,23,79,189,172,211,46,231,166,249,230,208,83,
    125,135,23,155,164,149,120,168,152,104,154,72,53,131,157,94,
    152,4,110,156,6,135,145,84,211,68,209,237,133,145,116,93,
    254,248,121,60,76,51,245,105,150,165,153,67,138,229,193,40,
    245,170,21,164,86,63,74,115,217,161,221,120,27,135,200,43,
    154,221,27,50,69,98,128,25,166,197,129,204,253,44,28,42,
    180,151,166,72,179,137,90,135,44,197,77,254,13,54,91,253,
    52,150,91,7,50,142,81,170,7,91,251,50,126,200,205,123,
    185,242,246,34,185,181,119,24,70,193,214,19,231,217,214,112,
    164,250,105,178,133,223,195,68,73,84,77,180,117,169,82,54,
    113,226,117,34,127,20,238,187,33,11,230,246,101,52,148,217,
    28,141,222,166,173,197,130,152,21,77,97,138,142,152,195,94,
    3,31,83,172,27,51,98,39,36,209,124,18,151,176,101,213,
    209,68,38,22,112,96,64,182,78,88,25,224,79,144,113,17,
    49,93,250,102,240,183,63,146,78,244,232,192,36,4,232,193,
    99,198,23,2,13,103,110,147,201,19,96,144,52,96,208,4,
    13,30,196,156,70,83,54,162,22,167,19,25,3,137,91,144,
    255,3,80,199,8,155,99,40,32,117,106,130,72,22,64,181,
    201,243,113,116,5,55,252,11,163,178,219,33,246,119,24,23,
    170,31,230,233,81,194,218,167,62,251,81,23,53,243,213,232,
    203,189,129,244,85,190,129,3,223,166,135,182,239,37,73,170,
    108,47,8,108,79,169,44,220,59,84,50,183,85,106,223,203,
    59,100,80,103,177,132,86,69,111,52,44,161,68,102,71,40,
    233,151,32,244,21,190,44,241,11,91,33,151,10,97,209,79,
    131,28,199,137,196,190,84,14,49,169,72,201,41,51,194,168,
    113,105,42,109,143,243,174,225,251,147,146,19,134,102,167,89,
    2,41,151,81,79,181,25,147,94,158,187,204,9,141,51,252,
    136,240,75,47,58,148,76,29,113,164,144,33,234,106,30,38,
    2,192,155,36,76,41,59,11,148,164,73,48,66,254,66,255,
    93,218,250,38,195,112,150,129,184,140,32,156,194,182,137,255,
    55,197,138,225,91,5,244,154,37,252,40,4,40,96,227,139,
    194,254,8,197,83,12,60,29,131,35,7,203,196,94,249,14,
    245,104,177,179,78,205,29,106,238,82,179,81,138,253,182,101,
    159,59,47,251,35,218,207,96,129,89,52,50,144,89,138,22,
    156,241,172,91,99,207,194,0,217,37,15,49,200,143,198,30,
    98,81,48,205,30,83,139,83,217,247,76,200,191,166,208,77,
    158,196,196,200,105,16,254,212,27,59,5,43,202,89,32,5,
    76,151,120,118,8,164,117,164,238,215,144,234,144,141,24,166,
    206,173,50,38,186,52,67,3,212,89,35,82,141,75,52,109,
    83,243,179,73,169,123,12,181,253,11,80,251,136,182,94,40,
    160,54,199,16,107,227,179,96,248,102,97,131,42,95,46,157,
    131,24,225,203,186,4,95,191,160,158,121,81,234,9,67,171,
    144,245,179,26,180,136,61,163,46,210,14,118,70,171,36,73,
    29,84,171,152,252,159,39,171,152,207,13,206,231,191,230,124,
    206,53,1,87,79,58,80,155,28,171,117,167,65,42,233,153,
    176,82,228,233,188,133,237,48,75,95,141,236,180,103,43,150,
    153,226,234,246,189,124,243,94,254,17,70,76,251,49,199,42,
    29,51,117,84,204,228,144,162,26,45,253,244,149,47,57,51,
    242,155,235,234,32,230,114,64,115,139,140,139,248,90,38,133,
    26,165,166,57,156,231,42,163,40,62,17,93,183,43,93,19,
    235,95,208,102,109,86,180,41,86,17,75,109,193,28,185,58,
    122,115,253,197,95,241,121,74,202,39,169,37,80,69,237,116,
    53,191,44,10,9,229,252,234,12,94,222,178,32,206,22,82,
    254,166,196,73,115,140,19,122,204,18,250,127,3,174,76,5,
    252,21,8,9,104,240,2,250,149,167,144,233,151,104,250,159,
    128,125,228,146,90,128,227,77,151,242,63,207,192,48,148,63,
    226,169,186,52,248,2,254,94,115,176,50,129,155,69,237,89,
    79,224,86,21,171,24,66,63,40,73,91,103,131,26,25,167,
    239,229,52,77,71,170,177,207,142,211,65,85,46,98,164,126,
    219,120,154,214,219,184,196,209,247,99,52,81,10,92,19,75,
    70,13,35,239,83,243,160,130,135,40,199,222,34,115,27,112,
    117,190,118,117,70,248,142,56,176,152,231,249,41,53,15,92,
    91,215,233,84,62,208,40,125,224,65,229,3,146,243,215,27,
    62,146,80,107,144,209,79,13,129,231,71,44,223,232,184,102,
    129,108,192,110,147,188,133,139,109,81,56,147,40,163,25,197,
    190,51,201,145,21,179,163,85,86,217,93,155,148,154,87,19,
    137,18,100,213,237,200,139,247,2,239,113,66,91,209,126,126,
    233,94,70,201,252,66,157,121,114,13,113,21,255,252,250,176,
    20,226,229,68,34,196,111,144,114,197,60,251,67,144,250,28,
    22,190,238,75,59,150,241,30,158,60,251,225,208,238,69,222,
    62,91,198,44,132,251,178,20,78,177,105,207,151,27,249,125,
    134,137,237,167,9,134,238,67,95,165,153,29,72,60,138,201,
    192,126,207,230,184,111,135,185,237,237,225,87,207,87,26,234,
    103,189,149,235,90,47,219,207,185,132,61,56,162,238,196,44,
    235,226,89,59,196,98,126,8,85,154,213,7,192,42,140,115,
    153,174,61,7,51,34,30,178,212,72,199,45,42,61,156,77,
    106,126,9,147,140,246,31,34,229,152,182,32,117,53,197,154,
    209,50,212,242,69,103,253,138,214,231,23,93,246,217,15,113,
    89,125,217,83,56,110,179,188,37,154,2,201,71,52,186,200,
    105,22,23,57,232,205,83,255,175,55,179,55,76,204,15,142,
    126,84,39,118,30,253,36,188,59,191,133,34,175,95,229,192,
    162,46,216,156,118,224,129,40,143,20,117,169,248,246,98,253,
    42,4,185,126,38,61,37,181,161,214,39,36,44,135,2,189,
    241,235,177,103,94,44,128,159,84,114,157,114,85,51,186,193,
    246,211,39,42,182,159,120,158,220,198,74,216,226,74,120,155,
    42,225,99,86,130,107,232,98,120,12,204,70,165,11,58,12,
    37,242,232,60,95,90,31,186,228,37,254,188,225,80,38,129,
    115,31,234,85,44,127,158,8,30,40,254,156,64,173,204,48,
    197,13,44,91,47,122,34,197,215,154,156,108,200,70,229,123,
    147,50,41,227,247,77,137,223,14,29,39,198,65,214,217,166,
    134,195,106,21,81,157,223,67,25,101,43,132,6,50,146,74,
    94,110,24,69,203,139,83,110,32,49,223,164,35,60,114,112,
    9,143,239,145,235,78,46,68,255,14,41,191,132,226,208,132,
    33,90,52,141,150,217,106,182,4,103,189,115,55,187,154,35,
    58,77,235,66,117,148,59,236,225,243,149,228,124,247,88,230,
    30,210,20,31,171,118,188,88,223,26,241,141,136,243,115,40,
    206,174,206,187,149,26,9,200,124,58,208,231,48,196,52,103,
    100,78,192,206,7,52,78,151,133,241,195,205,82,164,77,45,
    210,83,47,151,36,11,95,126,198,15,213,218,165,179,158,201,
    88,95,177,113,113,121,241,251,199,81,234,31,200,160,152,115,
    231,234,57,159,164,177,135,227,151,239,210,13,203,93,22,207,
    125,15,50,90,181,124,110,52,151,89,232,69,225,107,125,115,
    87,14,115,22,63,39,28,125,47,95,56,171,94,22,4,25,
    79,153,220,15,115,36,196,84,202,37,69,56,32,91,171,119,
    174,140,158,245,229,19,3,160,46,90,245,57,251,49,221,234,
    228,116,141,64,55,113,173,249,22,130,145,98,133,137,7,220,
    57,97,153,179,11,45,107,118,166,101,181,166,76,190,60,153,
    195,163,74,219,106,205,204,138,250,191,13,4,111,219,216,192,
    213,255,3,67,96,222,35,
};

EmbeddedPython embedded_m5_internal_param_NoncoherentXBar(
    "m5/internal/param_NoncoherentXBar.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_NoncoherentXBar.py",
    "m5.internal.param_NoncoherentXBar",
    data_m5_internal_param_NoncoherentXBar,
    2215,
    6756);

} // anonymous namespace