#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ExternalMaster[] = {
    120,156,197,88,255,111,219,198,21,127,71,82,178,37,203,177,
    252,61,137,157,152,237,144,86,13,86,123,75,155,101,64,189,
    108,89,155,1,43,16,183,163,90,36,85,139,113,52,121,182,
    41,83,164,64,158,147,168,176,49,96,14,186,97,216,175,251,
    19,246,195,254,155,253,71,219,123,239,72,138,254,182,5,219,
    162,90,210,249,120,188,123,247,190,124,222,151,59,31,242,191,
    26,254,126,97,3,100,127,22,0,1,126,5,68,0,3,1,
    61,1,66,10,8,150,224,176,6,233,135,16,212,224,21,64,
    207,0,105,192,41,118,76,248,218,128,184,197,107,234,16,153,
    60,34,96,212,4,105,65,175,6,79,227,121,176,100,29,14,
    155,144,254,14,132,16,177,128,103,193,20,4,211,240,10,169,
    99,167,193,4,167,129,6,155,60,216,128,96,134,7,155,16,
    180,184,51,3,163,54,200,22,244,102,105,90,239,26,146,189,
    139,100,231,152,236,63,136,108,128,111,150,33,184,70,211,145,
    175,175,104,166,69,51,121,191,57,166,210,46,184,156,135,222,
    66,209,95,172,244,151,42,253,229,74,127,165,210,95,229,62,
    114,179,0,253,235,208,191,1,253,155,176,135,10,154,47,119,
    94,3,105,66,127,29,122,235,32,241,187,6,167,168,195,96,
    161,178,226,22,175,88,44,87,220,230,21,27,208,219,0,137,
    223,219,122,69,29,186,157,21,180,75,248,79,252,235,160,93,
    64,181,176,121,46,211,44,76,98,55,140,247,146,208,160,247,
    117,106,200,138,62,53,83,185,57,63,38,115,254,29,216,150,
    129,145,155,243,4,144,176,32,89,34,3,78,184,115,98,192,
    168,3,199,2,250,22,4,38,28,227,54,53,98,96,95,192,
    169,1,223,152,52,225,4,91,11,149,126,27,44,165,109,217,
    103,165,107,74,83,112,82,131,227,26,116,159,29,27,52,112,
    216,128,244,111,240,237,58,19,157,102,162,6,28,99,107,193,
    169,5,39,117,120,138,147,112,168,223,32,241,197,179,99,148,
    20,71,186,29,11,185,221,169,136,75,162,4,97,26,123,3,
    169,150,177,239,14,189,212,27,184,143,95,42,137,131,209,19,
    47,195,78,167,89,76,77,178,205,161,167,14,28,94,107,146,
    82,6,67,197,52,147,88,170,25,236,236,133,113,224,14,146,
    224,40,146,106,154,8,186,123,97,36,93,151,95,254,122,48,
    76,82,245,56,77,147,212,33,189,242,96,148,120,229,10,210,
    170,31,37,153,236,208,110,188,141,67,228,21,205,222,27,50,
    69,98,128,249,165,197,129,204,252,52,28,42,52,151,166,72,
    179,137,90,135,12,197,77,246,5,54,91,7,201,64,110,29,
    202,193,64,166,242,222,214,190,28,220,231,230,253,76,121,187,
    145,220,218,61,10,163,96,235,145,243,100,107,56,82,7,73,
    188,133,239,195,88,43,97,235,50,157,108,226,188,5,162,254,
    34,220,119,67,150,203,61,144,209,80,166,179,52,122,147,118,
    22,109,209,18,117,97,138,142,152,197,94,13,127,166,88,55,
    102,196,78,72,146,249,36,45,33,203,170,98,137,12,44,224,
    208,128,116,157,144,210,199,175,32,211,34,94,186,244,206,224,
    119,191,33,149,232,209,190,73,246,215,131,199,140,46,132,25,
    206,220,38,131,199,192,16,169,65,191,14,26,58,136,56,141,
    165,116,68,45,78,39,50,6,18,183,32,251,43,160,138,17,
    52,199,144,3,234,212,4,17,183,65,53,201,215,113,116,5,
    55,252,3,99,178,219,33,246,119,24,22,234,32,204,146,23,
    49,43,159,250,236,69,93,212,204,231,163,207,118,251,210,87,
    217,6,14,124,149,28,217,190,23,199,137,178,189,32,176,61,
    165,210,112,247,72,201,204,86,137,125,39,235,144,61,157,249,
    2,89,37,189,209,176,64,18,89,29,145,164,31,130,208,87,
    248,176,200,15,108,133,76,42,68,197,65,18,100,56,78,36,
    246,165,114,136,73,69,74,78,152,17,6,141,75,83,105,123,
    156,119,13,159,31,21,156,48,50,59,245,2,71,153,140,246,
    84,147,33,233,101,153,203,156,208,56,163,143,8,63,247,162,
    35,201,212,17,70,10,25,162,174,230,97,18,248,187,78,178,
    20,162,179,60,113,18,7,35,100,47,244,223,165,157,175,51,
    10,91,140,195,101,196,224,20,182,117,252,95,23,43,134,111,
    229,200,171,23,232,163,72,168,128,109,47,114,243,35,18,79,
    49,234,116,12,14,27,44,18,251,228,219,212,163,197,206,58,
    53,183,168,185,77,205,70,33,245,27,22,125,246,188,232,15,
    104,59,131,229,101,201,200,60,102,33,89,112,198,175,110,140,
    253,10,131,99,151,252,195,32,47,26,251,135,69,129,52,125,
    72,45,78,101,207,51,73,24,165,253,136,137,145,203,32,248,
    169,55,118,9,214,147,211,38,249,167,11,52,59,4,209,42,
    78,247,43,56,117,200,68,12,82,231,70,17,16,93,154,161,
    225,233,172,17,169,218,37,138,182,169,121,107,66,218,30,3,
    109,255,2,208,62,162,157,219,57,208,102,25,96,77,252,181,
    13,223,204,77,80,166,202,197,115,0,35,116,89,151,160,235,
    29,234,153,23,133,158,44,176,114,81,127,85,1,22,113,103,
    84,37,218,193,206,104,149,4,169,66,106,21,211,254,211,120,
    21,51,185,193,153,252,71,156,201,185,26,224,90,73,7,105,
    147,227,180,238,212,72,35,123,38,172,228,25,58,107,96,59,
    76,147,151,35,59,217,179,21,139,76,49,117,251,78,182,121,
    39,251,8,163,165,253,144,227,148,142,151,58,34,166,114,72,
    17,141,150,62,126,233,75,78,138,252,228,186,58,128,185,28,
    204,220,60,217,34,186,40,227,179,246,89,209,28,202,51,149,
    82,4,159,132,170,155,165,170,137,243,79,105,175,38,235,217,
    20,171,136,164,166,96,134,92,29,184,185,240,226,183,248,251,
    37,233,158,132,150,64,229,179,211,213,236,178,36,36,147,243,
    195,51,104,121,179,114,56,91,72,248,203,2,37,245,49,74,
    232,103,22,184,255,35,112,69,42,224,59,32,28,160,185,115,
    220,151,110,66,134,95,164,233,191,5,118,144,75,170,0,142,
    53,93,202,252,60,3,67,80,246,128,167,234,162,224,83,248,
    83,197,187,138,212,109,230,53,103,53,117,91,101,156,98,0,
    189,86,122,182,206,6,52,178,205,129,151,209,52,29,165,198,
    14,59,206,4,101,157,136,81,250,13,163,105,90,239,226,18,
    67,223,140,177,68,201,111,77,44,26,21,132,252,152,154,123,
    37,56,68,49,246,230,120,219,128,171,19,181,171,115,193,215,
    196,128,197,44,207,77,113,85,114,150,76,137,255,90,129,255,
    123,37,254,37,39,174,87,124,14,161,214,32,139,159,26,2,
    15,138,88,181,209,185,204,2,89,131,94,157,60,133,75,108,
    145,59,146,40,2,25,133,189,51,89,145,213,178,163,21,86,
    26,93,219,147,154,151,147,8,16,100,210,237,200,27,236,6,
    222,195,1,237,68,219,249,133,107,25,5,239,237,42,239,228,
    22,226,42,246,249,241,126,33,195,243,73,4,135,159,32,225,
    146,119,118,133,32,241,57,34,124,113,32,237,129,28,236,226,
    97,243,32,28,218,123,145,183,207,118,49,115,217,62,43,100,
    83,108,216,243,85,70,118,151,218,196,246,147,24,99,246,145,
    175,146,212,14,36,30,191,100,96,191,111,115,192,183,195,204,
    246,118,241,173,231,43,13,243,179,142,202,197,172,151,238,103,
    92,183,30,190,160,238,164,236,234,226,233,58,196,2,62,129,
    50,189,234,51,95,25,191,217,9,180,215,96,38,196,131,149,
    26,233,136,69,21,135,179,73,205,123,48,193,48,255,33,18,
    142,104,7,82,86,93,172,25,13,67,45,93,240,211,207,105,
    117,118,209,91,255,242,58,222,170,47,116,114,159,173,211,76,
    57,69,231,123,106,27,20,238,123,205,98,112,134,219,22,15,
    206,22,131,215,184,157,227,193,118,113,145,52,207,131,11,208,
    91,164,219,21,26,89,162,56,48,245,191,198,1,118,164,73,
    185,208,243,255,171,251,59,15,190,15,214,157,159,66,94,12,
    92,229,250,162,42,215,172,118,253,190,40,206,32,85,161,248,
    174,99,237,10,244,185,126,42,61,37,181,149,214,39,35,42,
    135,16,189,239,104,236,210,23,43,230,71,165,84,167,92,8,
    141,150,216,120,250,0,198,198,19,79,227,155,88,58,91,92,
    58,111,83,233,124,204,42,112,13,93,61,143,65,89,43,53,
    65,7,148,88,190,112,47,211,134,46,145,137,61,111,56,148,
    113,224,220,133,106,213,203,175,39,129,5,10,91,191,135,74,
    97,98,138,37,44,115,47,250,32,69,229,138,148,108,197,90,
    233,117,19,178,39,67,247,187,2,186,29,142,202,101,104,118,
    182,169,225,96,92,198,97,231,231,165,53,222,190,10,151,124,
    75,22,120,202,163,195,213,235,76,195,114,137,79,48,229,200,
    127,88,68,87,52,175,65,155,167,157,161,205,119,59,31,252,
    219,69,220,96,182,141,241,52,66,183,195,126,114,20,43,222,
    236,191,89,71,187,223,44,118,191,116,10,3,134,125,60,144,
    145,84,242,82,112,43,50,66,126,175,16,72,76,245,201,8,
    143,121,124,110,194,231,200,117,39,150,30,127,134,132,143,104,
    7,186,21,197,244,40,234,152,32,151,5,126,140,70,189,33,
    184,234,56,119,153,174,217,178,161,56,35,140,50,135,227,228,
    92,137,36,190,239,45,146,63,129,142,45,182,227,13,244,85,
    29,223,67,57,63,128,252,206,192,121,183,68,36,93,166,240,
    193,76,31,128,49,54,112,69,196,5,144,243,65,161,216,193,
    253,205,66,174,77,45,215,19,57,208,55,150,124,227,60,184,
    207,165,251,197,105,31,71,137,127,40,131,124,234,173,171,231,
    124,146,12,60,28,191,124,179,110,88,108,54,127,238,125,144,
    210,170,229,115,163,153,76,67,47,10,191,213,247,161,197,176,
    34,117,157,231,158,164,46,159,184,116,185,36,91,48,108,82,
    185,31,210,3,147,41,151,228,161,147,140,170,222,186,10,222,
    213,229,147,194,153,62,20,232,27,140,135,116,91,150,125,130,
    13,93,112,54,230,26,136,57,10,171,166,104,98,96,181,204,
    86,187,97,181,102,26,86,99,202,228,91,169,89,60,7,54,
    173,198,76,75,140,63,27,136,205,166,177,177,208,16,255,2,
    187,209,80,21,
};

EmbeddedPython embedded_m5_internal_param_ExternalMaster(
    "m5/internal/param_ExternalMaster.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_ExternalMaster.py",
    "m5.internal.param_ExternalMaster",
    data_m5_internal_param_ExternalMaster,
    2292,
    7082);

} // anonymous namespace