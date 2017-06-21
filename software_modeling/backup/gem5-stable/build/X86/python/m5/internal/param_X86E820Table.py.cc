#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86E820Table[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,73,22,
    101,89,146,109,201,18,123,113,195,122,26,49,117,227,216,51,
    86,220,58,25,103,38,153,142,156,130,238,216,97,50,69,33,
    98,73,130,2,1,14,176,178,205,12,213,31,165,167,237,11,
    244,17,250,163,111,211,55,106,207,57,11,128,208,197,211,204,
    180,34,69,174,22,139,221,179,231,242,157,203,110,7,210,79,
    9,127,191,169,3,36,127,18,0,30,126,5,4,0,67,1,
    109,1,66,10,240,110,192,113,9,226,143,193,43,193,59,128,
    182,1,210,128,41,118,76,248,214,128,112,153,215,148,33,48,
    121,68,192,184,10,210,130,118,9,94,134,107,96,201,50,28,
    87,33,254,35,8,33,66,1,175,188,5,240,22,225,29,82,
    199,78,133,9,46,2,13,86,121,176,2,222,18,15,86,193,
    91,230,206,18,140,107,32,151,161,189,66,211,218,215,144,236,
    61,36,187,202,100,255,69,100,61,124,179,1,222,53,154,142,
    124,125,67,51,45,154,201,251,173,50,149,90,198,229,26,180,
    175,103,253,245,66,255,70,161,191,81,232,111,114,31,57,184,
    14,131,45,24,220,132,193,45,232,162,82,214,242,221,110,131,
    52,97,176,13,237,109,144,248,189,13,83,212,155,119,189,176,
    98,135,87,172,231,43,238,240,138,93,104,239,130,196,239,29,
    189,162,12,173,198,38,218,194,255,55,126,26,104,11,80,203,
    216,188,150,113,226,71,161,227,135,221,200,55,232,125,153,26,
    178,92,135,154,133,212,132,159,147,9,255,9,108,63,207,72,
    77,120,10,72,88,144,44,129,1,167,220,57,53,96,220,128,
    137,128,129,5,158,9,19,220,166,68,12,244,4,76,13,248,
    206,164,9,167,216,90,168,232,93,176,148,182,223,128,21,173,
    41,45,192,105,9,38,37,104,189,154,24,52,112,92,129,248,
    31,240,253,14,19,93,100,162,6,76,176,181,96,106,193,105,
    25,94,226,36,28,26,84,72,124,241,106,130,146,226,72,171,
    97,33,183,135,5,113,73,20,207,143,67,119,40,213,58,246,
    157,145,27,187,67,231,213,163,79,158,61,186,255,209,11,247,
    40,144,141,106,54,49,74,246,71,174,234,219,188,210,36,149,
    12,71,138,41,70,161,84,75,216,233,250,161,231,12,35,239,
    36,144,106,145,200,57,93,63,144,142,195,47,191,28,142,162,
    88,61,139,227,40,182,73,171,60,24,68,110,190,130,116,218,
    9,162,68,54,104,55,222,198,38,242,138,102,119,71,76,145,
    24,96,110,105,177,39,147,78,236,143,20,26,75,83,164,217,
    68,173,65,102,226,38,177,177,105,246,163,161,108,30,203,225,
    80,198,242,126,179,39,135,15,184,249,48,81,36,97,243,232,
    196,15,188,38,10,221,28,141,85,63,10,155,248,222,15,149,
    68,189,4,205,139,26,217,199,89,215,137,246,27,191,231,248,
    44,149,211,151,193,72,198,43,52,122,155,246,21,53,177,44,
    202,194,20,13,177,130,189,18,254,76,177,99,44,137,67,159,
    228,234,144,172,132,42,171,136,35,50,174,128,99,3,226,29,
    66,201,0,191,130,204,138,88,105,209,59,131,223,253,142,20,
    162,71,7,38,217,94,15,78,24,89,8,49,156,121,64,198,
    14,129,225,81,130,65,25,52,108,16,109,26,71,241,152,90,
    156,78,100,12,36,110,65,242,119,64,5,35,96,38,144,130,
    105,106,130,8,107,160,170,228,219,56,186,137,27,254,153,241,
    216,106,16,251,135,12,10,213,247,147,232,77,200,170,167,62,
    123,80,11,53,243,245,248,249,209,64,118,84,178,135,3,223,
    68,39,245,142,27,134,145,170,187,158,87,119,149,138,253,163,
    19,37,147,186,138,234,119,147,6,89,211,94,203,112,149,211,
    27,143,50,28,145,205,17,71,250,193,243,59,10,31,24,176,
    14,91,33,145,10,49,209,143,188,4,199,137,68,79,42,155,
    152,84,164,228,136,25,97,200,56,52,149,182,199,121,215,240,
    249,105,198,9,227,178,81,206,80,148,200,160,171,170,12,72,
    55,73,28,230,132,198,25,123,68,248,181,27,156,72,166,142,
    32,82,200,16,117,53,15,87,143,190,155,36,73,38,56,75,
    19,70,161,55,70,230,252,206,7,180,239,77,198,224,50,163,
    112,3,17,184,128,109,25,255,151,197,166,209,177,82,220,149,
    51,236,81,12,84,192,150,23,169,241,17,135,83,140,55,13,
    131,3,6,11,196,254,248,99,234,209,98,123,135,154,59,212,
    236,82,179,151,201,124,165,130,175,156,23,252,33,109,102,176,
    180,44,23,153,198,204,228,242,206,248,212,173,153,79,97,80,
    108,145,111,24,228,65,51,223,176,40,128,198,79,168,197,169,
    236,117,38,36,47,40,92,147,15,49,49,114,23,4,62,245,
    102,238,192,90,178,107,36,253,98,134,100,155,224,89,196,104,
    175,128,81,155,12,196,0,181,111,101,161,208,161,25,26,154,
    246,54,145,42,93,162,230,58,53,63,154,139,174,103,32,235,
    93,0,217,99,218,183,150,130,108,133,193,85,197,95,205,232,
    152,169,1,242,4,185,126,14,92,132,44,235,18,100,253,140,
    122,230,69,145,231,9,170,84,208,47,10,160,34,222,140,162,
    60,135,216,25,111,145,24,69,56,109,97,170,127,25,110,97,
    246,54,56,123,127,196,217,155,43,0,174,137,116,112,54,57,
    62,235,78,137,244,209,53,97,51,205,202,73,5,219,81,28,
    189,29,215,163,110,93,177,192,20,75,15,238,38,251,119,147,
    199,24,37,235,79,56,62,233,56,169,35,97,44,71,20,201,
    104,233,179,183,29,201,169,144,159,28,71,7,46,135,131,152,
    147,166,88,68,214,6,105,211,200,212,204,33,60,81,49,69,
    238,171,87,116,53,87,52,241,253,21,237,84,101,45,155,98,
    11,81,84,21,204,142,163,195,53,151,90,252,22,127,159,145,
    230,73,100,9,84,36,219,45,205,44,203,65,18,217,191,56,
    131,148,171,148,194,110,34,217,223,103,8,41,207,16,66,63,
    51,67,252,95,129,43,80,1,127,1,194,0,154,58,69,124,
    238,32,100,244,117,154,254,7,96,215,184,36,243,115,140,105,
    81,182,231,25,24,122,146,135,60,85,23,2,95,193,223,10,
    126,149,165,107,51,173,49,139,233,218,202,227,19,131,231,7,
    165,100,235,108,32,35,203,244,221,132,166,233,232,52,115,213,
    89,252,207,43,67,140,206,87,138,164,69,189,135,67,236,124,
    55,195,17,37,188,109,177,110,20,208,241,75,106,238,231,192,
    16,217,216,85,113,182,7,239,79,205,142,142,255,223,210,246,
    22,51,188,186,160,182,240,63,18,249,178,245,212,249,252,249,
    111,159,31,182,156,156,94,238,2,165,204,5,238,231,46,32,
    57,107,189,227,195,7,181,6,153,125,106,8,60,17,98,185,
    70,7,48,11,100,9,218,101,114,22,174,172,69,234,75,34,
    139,100,20,247,206,164,68,214,206,161,214,91,110,121,109,84,
    106,222,94,125,132,32,187,30,4,238,240,200,115,159,4,180,
    15,109,214,201,188,203,200,56,175,21,57,39,207,16,239,99,
    158,31,31,100,18,188,190,250,232,240,9,146,205,57,103,95,
    240,162,14,135,132,23,125,89,31,202,225,17,158,46,251,254,
    168,222,13,220,30,219,196,76,37,123,158,73,166,216,168,231,
    203,139,228,30,181,81,189,19,133,24,176,79,58,42,138,235,
    158,196,19,151,244,234,31,214,57,218,215,253,164,238,30,225,
    91,183,163,52,210,207,122,42,87,176,110,220,75,184,88,61,
    126,67,221,249,216,212,193,195,180,143,53,123,8,121,102,213,
    135,188,60,120,115,53,174,29,7,147,32,158,165,212,88,7,
    44,42,53,236,125,106,126,14,115,139,241,31,147,126,136,62,
    41,170,44,182,141,138,193,71,190,226,188,175,105,101,114,209,
    71,143,126,136,143,234,251,154,212,83,203,52,83,46,208,81,
    158,218,10,69,122,186,142,41,165,215,49,52,168,175,99,202,
    60,114,141,124,122,225,127,245,105,118,139,249,56,196,201,255,
    213,149,237,135,243,103,220,126,4,105,102,127,159,27,139,162,
    84,43,218,141,7,34,59,72,20,69,226,171,138,91,151,162,
    201,233,196,210,85,82,219,103,103,30,98,114,40,208,187,190,
    157,57,231,197,178,247,105,46,209,148,43,154,241,13,54,155,
    62,65,177,217,196,203,240,54,214,191,22,215,191,7,84,255,
    78,88,124,199,208,37,240,12,140,165,92,11,116,242,12,229,
    27,231,162,38,116,149,75,204,185,163,145,12,61,251,30,20,
    11,87,126,125,245,24,120,172,209,57,171,47,76,113,3,43,
    213,139,126,71,145,181,32,33,219,175,148,123,218,92,44,201,
    128,157,102,128,109,172,66,49,188,218,7,212,112,64,205,99,
    169,253,235,220,14,187,151,163,81,134,88,20,202,132,206,69,
    255,109,10,86,59,92,35,166,207,172,57,6,185,39,3,169,
    228,37,22,86,196,77,122,54,246,36,102,173,104,140,199,21,
    62,1,224,115,224,56,115,138,245,159,106,100,67,66,25,8,
    99,189,40,99,180,223,48,42,229,138,224,212,121,238,10,88,
    51,68,101,158,174,116,199,204,23,216,171,185,50,249,158,50,
    203,97,164,119,62,145,29,186,67,125,201,196,119,40,246,79,
    32,61,243,218,31,228,70,33,117,241,241,66,31,225,208,49,
    56,173,115,22,183,127,69,227,180,237,240,193,126,38,209,126,
    42,203,51,84,250,216,121,45,169,40,224,219,210,225,3,182,
    87,113,234,25,225,121,129,218,190,116,74,203,31,234,155,59,
    181,118,238,189,23,187,216,223,56,55,154,200,216,119,3,255,
    123,125,85,151,13,43,210,199,121,130,36,86,254,196,73,86,
    253,20,222,91,254,50,52,98,217,243,19,36,201,244,242,181,
    105,140,248,52,211,201,37,192,44,46,158,15,146,116,245,170,
    79,218,79,232,70,39,249,12,27,186,130,171,172,86,16,85,
    20,61,76,60,229,174,8,203,92,174,85,172,229,165,138,85,
    89,48,249,238,100,5,79,45,85,171,178,180,44,178,191,61,
    196,95,213,216,171,85,196,127,0,57,244,165,18,
};

EmbeddedPython embedded_m5_internal_param_X86E820Table(
    "m5/internal/param_X86E820Table.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_X86E820Table.py",
    "m5.internal.param_X86E820Table",
    data_m5_internal_param_X86E820Table,
    2237,
    6712);

} // anonymous namespace