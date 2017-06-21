#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Sp804[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,36,235,
    93,242,139,108,209,73,109,211,110,35,89,174,93,103,38,174,
    91,199,73,58,73,199,138,11,166,99,135,201,20,133,128,19,
    5,138,4,56,192,73,54,61,210,76,91,121,218,126,232,183,
    76,127,66,63,244,15,244,119,244,31,53,187,123,0,8,81,
    84,155,153,134,177,200,243,113,111,177,183,123,251,236,203,193,
    131,244,95,9,191,191,172,1,36,23,12,0,31,63,2,58,
    0,93,1,77,1,66,10,240,151,96,191,4,241,125,240,75,
    240,22,160,105,128,52,224,4,39,38,124,101,64,56,205,207,
    148,161,99,50,69,64,191,10,210,130,102,9,94,132,243,96,
    201,50,236,87,33,254,61,8,33,66,1,47,253,9,240,39,
    225,45,74,199,73,133,5,78,2,17,171,76,172,128,63,197,
    196,42,248,211,60,153,130,254,28,200,105,104,206,16,91,243,
    2,138,189,131,98,103,89,236,191,73,172,143,43,203,224,95,
    32,118,212,235,75,226,180,136,147,247,155,101,41,115,153,150,
    243,208,92,200,230,139,133,249,82,97,190,92,152,175,20,230,
    171,133,249,197,194,252,82,97,126,185,48,191,82,152,175,21,
    230,87,11,243,107,133,249,122,97,94,43,204,175,23,230,239,
    240,28,79,100,1,218,239,66,251,71,208,190,1,187,232,164,
    249,220,250,155,32,77,104,223,130,230,45,144,248,185,9,39,
    232,71,127,161,240,68,157,159,88,204,159,184,205,79,220,129,
    230,29,144,248,185,173,159,40,67,163,190,130,216,8,254,131,
    255,234,2,103,106,26,135,67,25,39,65,20,58,65,184,27,
    5,6,173,151,105,32,36,121,52,76,164,144,122,74,144,250,
    39,48,158,124,35,133,212,49,160,96,65,182,116,12,56,230,
    201,177,1,253,58,28,9,104,91,224,155,112,132,219,148,72,
    129,150,128,19,3,190,54,137,225,24,71,11,29,127,13,44,
    165,241,212,102,199,107,73,19,112,92,130,163,18,52,94,30,
    25,68,216,175,64,252,15,120,179,198,66,39,89,168,1,71,
    56,90,112,98,193,113,25,94,32,19,146,218,21,50,95,188,
    60,66,75,145,210,168,91,168,237,118,193,92,50,197,15,226,
    208,237,74,54,221,233,185,177,219,117,26,189,247,239,222,175,
    87,51,142,40,217,232,185,106,207,230,71,76,58,139,110,79,
    177,168,40,148,106,10,39,187,65,232,59,221,200,63,232,72,
    53,73,114,156,221,160,35,29,135,23,63,237,246,162,88,125,
    28,199,81,108,211,113,50,177,19,185,249,19,116,152,94,39,
    74,100,157,118,227,109,108,18,175,136,123,183,199,18,73,1,
    86,147,30,246,101,226,197,65,79,161,151,180,68,226,38,105,
    117,242,15,15,201,175,113,216,220,139,186,114,115,95,118,187,
    50,150,247,54,91,178,251,128,135,247,18,229,238,116,228,230,
    206,65,208,241,55,159,216,207,54,123,125,181,23,133,155,184,
    30,132,74,226,129,116,54,11,71,177,129,203,11,36,244,85,
    208,114,2,54,199,217,147,157,158,140,103,136,122,153,54,20,
    115,98,90,148,133,41,234,98,6,103,37,252,154,98,205,152,
    18,219,1,25,228,145,145,132,35,171,136,28,114,167,128,125,
    3,226,53,194,69,27,63,130,28,137,232,104,208,154,193,107,
    191,161,147,208,212,182,73,222,214,196,35,198,18,130,10,57,
    31,145,123,67,96,64,148,160,93,6,13,20,196,151,70,78,
    220,167,17,217,73,140,129,194,45,72,254,14,120,178,8,145,
    35,72,225,115,98,130,8,231,64,85,41,187,32,117,5,55,
    252,19,35,176,81,39,245,183,25,13,106,47,72,162,87,33,
    159,57,205,25,56,13,60,153,231,253,207,119,218,210,83,201,
    58,18,190,140,14,106,158,27,134,145,170,185,190,95,115,149,
    138,131,157,3,37,147,154,138,106,55,146,58,185,209,158,207,
    0,149,203,235,247,50,0,145,179,17,64,250,135,31,120,10,
    127,44,242,15,246,66,34,21,130,97,47,242,19,164,147,136,
    150,84,54,41,169,232,144,35,86,132,177,226,16,43,109,143,
    124,23,240,247,147,76,19,6,100,189,156,193,39,145,157,93,
    85,101,36,186,73,226,176,38,68,103,208,145,224,67,183,115,
    32,89,58,162,71,161,66,52,213,58,140,17,118,23,201,132,
    204,98,54,35,140,66,191,143,90,5,222,45,218,240,34,131,
    111,154,225,183,140,208,155,192,177,140,255,151,197,138,225,89,
    41,224,202,25,232,40,221,41,96,151,139,212,235,8,192,19,
    76,45,117,131,115,3,91,194,17,248,14,205,232,97,123,141,
    134,171,52,92,163,97,61,51,118,60,22,207,12,91,252,144,
    118,49,216,76,54,136,156,97,102,6,249,167,162,232,210,32,
    138,48,241,53,40,26,12,138,153,65,52,88,148,36,227,199,
    52,34,43,199,153,9,201,23,148,146,41,106,88,24,5,8,
    66,157,102,131,0,224,227,177,231,200,236,201,12,187,54,1,
    178,136,202,86,1,149,54,121,134,33,105,95,202,178,158,67,
    28,26,140,246,21,18,85,26,113,190,53,26,174,143,247,144,
    7,176,106,157,129,213,7,180,225,92,10,171,25,134,83,21,
    191,115,134,103,166,39,159,87,191,197,33,56,17,150,172,17,
    88,186,73,51,243,172,173,63,8,140,82,11,63,41,192,136,
    148,50,138,134,108,227,164,191,74,250,23,1,180,138,5,252,
    69,184,138,53,217,224,154,124,151,107,50,215,117,238,188,116,
    2,54,57,7,235,73,137,14,98,215,132,149,180,214,38,21,
    28,123,113,244,186,95,139,118,107,138,45,165,124,249,232,70,
    178,113,35,249,0,51,97,237,49,231,32,157,11,117,182,139,
    101,143,178,21,61,250,241,107,79,114,157,227,95,142,163,147,
    147,195,137,202,73,235,39,98,105,153,142,209,200,206,151,211,
    116,162,98,202,206,99,60,225,106,126,194,164,240,103,180,69,
    149,143,215,20,171,136,155,170,96,61,28,157,139,185,115,226,
    85,252,126,72,71,78,182,74,160,30,220,110,104,45,217,0,
    50,197,254,201,41,108,140,69,125,123,19,229,253,54,195,68,
    121,128,9,250,154,25,184,255,2,220,73,10,248,51,144,215,
    209,185,41,184,243,88,32,55,47,18,251,239,128,163,96,68,
    61,231,60,210,160,26,206,28,152,94,146,135,204,170,203,251,
    103,240,215,66,8,101,69,216,76,123,197,98,17,182,242,28,
    196,112,249,78,133,214,58,157,172,200,37,123,110,66,108,58,
    3,13,162,114,144,220,243,70,15,51,240,120,176,51,169,133,
    59,164,199,215,3,228,80,25,187,34,22,141,2,30,182,104,
    184,151,67,65,100,180,239,93,165,117,56,191,210,58,58,171,
    127,69,251,90,172,233,236,4,55,5,252,116,142,237,82,134,
    237,123,57,182,37,87,158,183,124,73,160,209,32,183,158,24,
    2,111,146,216,100,209,197,205,2,89,130,102,153,162,128,27,
    97,145,6,137,200,114,19,101,178,83,101,141,15,97,91,31,
    79,238,89,237,52,26,94,143,49,230,201,111,143,58,110,119,
    199,119,31,191,166,13,104,23,47,11,27,35,83,121,174,168,
    50,65,94,156,167,53,255,124,144,169,126,56,198,120,255,25,
    29,77,166,50,163,219,143,60,14,242,47,246,100,173,43,187,
    59,120,239,219,11,122,181,221,142,219,98,47,152,169,73,159,
    103,38,41,118,227,112,83,144,220,161,49,170,121,81,136,73,
    247,192,83,81,92,243,37,94,137,164,95,123,175,198,25,187,
    22,36,53,119,7,87,93,79,105,8,159,142,61,238,52,221,
    184,149,112,83,185,255,138,166,99,246,162,131,247,219,0,155,
    234,55,144,151,69,125,253,202,19,48,183,203,58,34,176,130,
    225,101,71,245,117,238,161,6,193,222,160,225,54,140,63,79,
    223,71,121,175,72,48,29,77,89,92,49,42,6,247,82,204,
    240,156,120,147,179,1,248,175,239,18,128,250,37,78,26,134,
    101,226,148,19,116,159,166,177,66,105,186,89,205,136,83,60,
    78,51,113,38,35,94,224,113,150,137,115,25,113,158,199,5,
    38,46,102,196,37,30,151,153,184,146,189,102,90,101,226,69,
    104,94,162,247,30,68,185,76,73,96,226,255,77,2,28,78,
    99,14,164,63,126,175,177,111,63,252,1,53,182,223,135,180,
    184,159,23,247,162,104,206,140,142,251,182,200,238,11,69,91,
    248,229,195,194,105,48,58,94,44,93,37,181,43,214,198,106,
    24,103,11,189,221,219,65,24,159,237,110,159,228,54,156,112,
    27,211,95,98,15,233,171,17,123,72,188,8,47,99,155,107,
    113,155,251,136,218,220,35,54,216,49,116,167,59,0,92,41,
    183,123,22,135,80,190,114,10,182,235,46,150,180,114,123,61,
    25,250,246,29,40,54,166,188,60,70,63,83,98,250,27,20,
    186,9,83,44,97,39,122,54,154,40,221,22,108,98,87,149,
    242,248,25,175,211,24,141,223,100,104,172,83,33,24,228,92,
    251,17,13,156,101,243,4,107,255,34,63,242,149,97,168,117,
    34,111,255,46,221,112,206,91,194,94,70,163,132,127,142,230,
    218,58,95,192,214,105,1,91,124,217,45,114,181,176,57,162,
    167,71,209,233,81,126,53,19,120,124,225,44,174,227,225,56,
    225,65,87,235,126,238,34,73,160,98,149,17,206,227,220,250,
    111,98,182,134,197,108,49,80,56,110,125,217,145,74,22,33,
    172,232,240,211,235,188,47,177,100,71,125,188,111,241,77,6,
    127,119,28,103,220,245,238,231,40,239,15,144,190,171,193,122,
    39,202,88,241,150,69,250,103,84,202,21,193,141,195,208,171,
    105,173,209,143,33,235,220,251,137,205,217,110,54,7,15,191,
    70,205,10,57,225,140,239,148,219,110,87,191,10,227,23,62,
    246,187,144,94,215,237,91,57,8,233,245,5,95,151,244,37,
    20,99,158,155,26,238,97,236,159,18,157,56,186,15,54,50,
    147,54,180,73,31,186,137,252,21,250,222,224,85,117,121,36,
    211,243,142,171,118,163,184,171,174,142,92,254,52,84,241,83,
    188,254,198,81,135,253,123,150,163,209,79,148,236,170,43,67,
    139,18,29,237,60,147,221,40,238,63,139,124,169,214,134,214,
    159,248,126,108,187,97,75,58,135,146,90,54,117,125,152,33,
    237,215,180,140,140,171,54,82,135,211,188,103,116,209,76,184,
    168,95,144,242,85,227,236,250,83,138,48,233,167,60,163,143,
    131,121,62,138,186,46,210,71,239,210,8,178,93,230,135,214,
    253,152,158,90,30,162,38,50,14,220,78,240,70,158,35,239,
    121,16,125,36,15,3,79,158,163,245,147,238,142,59,224,25,
    125,60,8,132,192,27,48,165,161,200,28,156,56,70,73,162,
    186,123,138,194,141,224,160,216,114,132,198,178,21,160,247,99,
    150,114,138,59,173,71,20,76,103,242,66,241,201,49,71,179,
    190,48,233,247,52,143,169,107,77,154,56,208,187,218,202,108,
    5,35,155,74,148,41,170,88,164,44,115,122,174,98,77,79,
    85,172,202,132,201,175,220,102,240,34,92,181,42,83,211,226,
    127,253,173,99,78,168,26,235,75,21,241,45,53,59,97,31,
};

EmbeddedPython embedded_m5_internal_param_Sp804(
    "m5/internal/param_Sp804.py",
    "/home/kemmere2/gem5/gem5-stable/build/ARM/python/m5/internal/param_Sp804.py",
    "m5.internal.param_Sp804",
    data_m5_internal_param_Sp804,
    2464,
    7412);

} // anonymous namespace