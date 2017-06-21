#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ClockedObject[] = {
    120,156,197,88,125,111,219,198,25,127,142,164,100,75,150,99,
    57,126,75,98,167,230,58,164,85,131,213,218,178,166,41,80,
    47,104,215,118,192,250,135,219,81,45,146,168,69,57,90,60,
    91,148,249,34,144,231,36,42,108,12,152,131,109,95,96,31,
    97,127,236,219,236,27,109,207,243,28,73,81,142,3,4,88,
    163,58,226,229,120,188,123,238,121,249,61,47,119,3,200,255,
    106,248,124,98,3,100,169,0,240,241,39,32,4,136,4,244,
    5,8,41,192,95,135,147,26,164,31,128,95,131,23,0,125,
    3,164,1,23,216,49,225,59,3,226,22,175,169,67,104,242,
    136,128,73,19,164,5,253,26,60,138,87,193,146,117,56,105,
    66,250,103,16,66,196,2,30,251,11,224,47,194,11,164,142,
    157,6,19,92,4,26,108,242,96,3,252,37,30,108,130,223,
    226,206,18,76,218,32,91,208,95,166,105,253,107,72,246,46,
    146,93,97,178,255,33,178,62,126,217,0,255,26,77,71,190,
    158,208,76,139,102,242,126,43,76,165,93,112,185,10,253,235,
    69,127,173,210,95,175,244,55,184,143,187,94,135,209,38,140,
    182,96,116,3,142,80,17,171,229,14,55,65,154,48,186,5,
    253,91,32,241,119,19,46,80,87,254,245,202,138,109,94,177,
    86,174,216,225,21,183,161,127,27,36,254,118,244,138,58,244,
    58,155,168,255,224,191,248,215,65,253,131,106,97,243,84,166,
    89,144,196,110,16,31,37,129,65,223,235,212,144,181,6,212,
    44,228,102,251,140,204,246,111,96,155,249,70,110,182,115,64,
    194,130,100,9,13,56,231,206,185,1,147,14,156,9,24,89,
    224,155,112,134,219,212,136,129,99,1,23,6,124,111,210,132,
    115,108,45,84,238,91,96,41,109,179,17,43,87,83,90,128,
    243,26,156,213,160,247,248,204,160,129,147,6,164,255,130,31,
    119,152,232,34,19,53,224,12,91,11,46,44,56,175,195,35,
    156,132,67,163,6,137,47,30,159,161,164,56,210,235,88,200,
    237,65,69,92,18,197,15,210,216,139,164,90,199,190,59,246,
    82,47,114,63,11,147,193,137,244,191,58,28,201,129,234,52,
    139,153,73,182,55,246,212,208,225,165,38,233,36,26,43,38,
    153,196,82,45,97,231,40,136,125,55,74,252,211,80,170,69,
    162,231,30,5,161,116,93,254,248,199,104,156,164,234,139,52,
    77,82,135,212,202,131,97,226,149,43,72,169,131,48,201,100,
    135,118,227,109,28,34,175,104,246,209,152,41,18,3,204,46,
    45,246,101,54,72,131,177,66,107,105,138,52,155,168,117,200,
    78,220,100,61,108,186,195,36,146,221,19,25,69,50,149,247,
    186,199,50,186,207,205,251,153,242,14,67,217,61,60,13,66,
    191,251,248,163,15,187,227,137,26,38,113,23,191,7,177,146,
    168,152,176,123,133,74,246,112,218,117,34,254,44,56,118,3,
    22,203,29,202,112,44,211,101,26,189,69,27,139,182,104,137,
    186,48,69,71,44,99,175,134,143,41,118,140,37,113,16,144,
    96,3,18,150,112,101,85,145,68,230,21,112,98,64,186,67,
    56,25,225,79,144,97,17,45,61,250,102,240,183,63,145,70,
    244,232,200,36,235,235,193,51,198,22,130,12,103,238,147,185,
    99,96,128,212,96,84,7,13,28,196,155,70,82,58,161,22,
    167,19,25,3,137,91,144,253,19,80,195,8,153,51,200,225,
    116,97,130,136,219,160,154,228,209,56,186,137,27,254,149,17,
    217,235,16,251,7,140,10,53,12,178,228,89,204,186,167,62,
    251,80,15,53,243,245,68,107,43,219,197,129,39,201,169,61,
    240,226,56,81,182,231,251,182,167,84,26,28,158,42,153,217,
    42,177,239,100,29,50,167,179,90,0,171,164,55,25,23,64,
    34,163,35,144,244,139,31,12,20,190,172,241,11,91,33,147,
    10,65,49,76,252,12,199,137,196,177,84,14,49,169,72,201,
    9,51,194,152,113,105,42,109,143,243,174,225,251,167,5,39,
    12,204,78,189,128,81,38,195,35,213,100,68,122,89,230,50,
    39,52,206,224,35,194,79,189,240,84,50,117,68,145,66,134,
    168,171,121,152,3,252,110,144,40,133,228,44,78,156,196,254,
    4,185,11,6,239,210,198,55,24,132,45,134,225,6,66,112,
    1,219,58,254,95,23,155,198,192,202,129,87,47,192,71,97,
    80,1,155,94,228,214,71,32,94,96,200,233,24,28,51,88,
    34,246,200,183,169,71,139,157,29,106,110,83,243,22,53,187,
    133,208,111,86,242,229,203,146,63,160,221,12,22,151,5,35,
    227,152,133,96,254,140,87,221,156,122,21,6,198,30,121,135,
    65,62,52,245,14,139,130,104,250,144,90,156,202,126,103,66,
    246,13,133,108,242,34,38,70,14,131,208,167,222,212,33,88,
    77,78,155,196,95,44,176,236,16,64,171,40,61,174,160,212,
    33,11,49,68,157,155,69,52,116,105,134,6,167,179,77,164,
    106,87,232,217,166,230,23,243,81,246,20,102,199,47,193,236,
    99,218,184,157,195,108,153,225,213,196,167,109,12,204,220,2,
    101,150,92,187,4,47,194,150,117,5,182,222,161,158,249,178,
    204,115,133,85,46,233,31,42,176,34,230,140,170,64,7,216,
    153,108,145,28,85,64,109,97,194,127,20,111,97,14,55,56,
    135,255,154,115,56,215,1,92,13,233,0,109,114,140,214,157,
    26,41,228,200,132,205,60,55,103,13,108,199,105,242,124,98,
    39,71,182,98,137,41,158,238,223,201,246,238,100,31,99,164,
    180,31,114,140,210,177,82,71,195,84,142,41,154,209,210,47,
    158,15,36,231,67,126,115,93,29,188,92,14,100,110,158,103,
    17,91,27,164,78,163,208,51,135,241,76,165,20,189,231,160,
    233,102,169,105,98,252,75,218,170,201,106,54,197,22,226,168,
    41,152,31,87,199,108,174,184,248,43,62,191,39,213,147,204,
    18,168,62,118,122,154,91,22,132,68,114,126,53,131,149,55,
    42,134,211,69,186,223,22,24,169,79,49,66,143,89,128,254,
    239,192,149,168,128,191,1,161,0,141,157,131,190,244,17,50,
    251,26,77,255,1,216,59,174,200,255,28,103,122,148,243,121,
    6,134,159,236,1,79,213,229,192,151,240,143,138,107,21,73,
    219,204,107,205,106,210,182,202,24,197,240,121,173,196,108,205,
    6,51,50,205,208,203,104,154,142,80,83,111,157,38,129,178,
    64,196,8,253,102,177,180,168,55,113,137,159,239,167,72,162,
    180,183,45,214,140,10,62,126,67,205,189,18,26,162,24,123,
    99,172,237,194,171,51,180,171,179,192,119,180,191,197,28,175,
    44,112,4,154,161,82,98,191,86,96,255,94,137,125,201,25,
    235,5,31,62,168,53,200,220,23,134,192,83,32,22,107,116,
    232,178,64,214,160,95,39,47,225,194,90,228,78,36,138,24,
    70,251,205,164,67,86,202,129,86,87,105,113,109,76,106,158,
    207,33,54,144,61,247,67,47,58,244,189,135,39,180,17,237,
    54,40,220,202,40,88,111,87,89,39,151,16,175,226,158,95,
    239,23,34,60,157,67,92,248,16,233,150,172,179,23,248,201,
    128,131,193,55,67,105,71,50,58,196,243,229,48,24,219,71,
    161,119,204,86,49,115,209,190,42,68,83,108,214,203,197,69,
    118,151,218,196,30,36,49,6,235,211,129,74,82,219,151,120,
    228,146,190,253,190,205,145,222,14,50,219,59,196,175,30,158,
    219,24,226,179,62,202,21,172,151,30,103,92,172,158,60,163,
    238,156,172,234,226,121,58,192,162,61,130,50,173,234,99,94,
    25,184,185,28,215,30,131,25,16,15,83,106,162,99,21,21,
    26,206,30,53,239,193,252,226,251,7,192,0,131,140,84,85,
    23,219,70,195,224,82,110,102,226,215,180,54,123,217,81,159,
    188,142,163,234,139,26,156,32,235,48,90,224,118,145,162,59,
    221,195,88,249,61,12,13,46,65,191,85,220,255,44,147,63,
    215,255,95,127,102,143,152,147,47,168,159,212,141,157,7,63,
    3,231,206,71,144,231,243,87,185,240,76,113,248,169,94,171,
    173,128,89,127,178,206,82,234,147,6,75,41,30,197,183,176,
    74,180,184,74,220,167,42,241,140,43,73,215,208,133,226,212,
    120,124,0,224,187,141,45,108,98,249,204,189,2,127,186,24,
    36,84,120,227,177,140,125,231,46,84,235,59,254,60,7,157,
    145,159,62,135,74,18,54,197,58,22,116,47,35,149,162,80,
    69,70,70,100,173,196,230,206,252,44,252,151,194,194,157,107,
    51,161,200,217,167,166,61,19,119,180,21,222,190,58,2,96,
    161,125,226,250,73,228,5,49,157,31,94,103,26,86,5,249,
    253,66,49,196,10,84,116,123,228,203,80,42,121,149,169,21,
    49,149,159,38,125,137,145,62,153,96,121,207,5,51,190,135,
    174,59,175,240,248,187,92,117,124,60,193,240,136,39,191,13,
    163,81,111,8,206,54,151,238,77,53,63,84,32,234,178,112,
    146,57,236,87,43,165,94,249,110,175,136,250,164,125,62,192,
    28,120,145,190,151,225,91,7,231,151,144,159,17,157,119,75,
    211,208,217,153,107,113,125,226,65,15,225,76,200,137,207,249,
    45,141,211,41,50,186,191,87,8,180,87,17,232,115,214,59,
    223,47,70,247,213,246,149,19,123,65,164,165,86,171,151,190,
    251,41,45,222,184,52,154,201,52,240,194,224,71,125,113,85,
    12,43,18,245,50,65,226,184,124,227,132,195,214,159,209,53,
    155,58,149,199,65,134,132,152,74,185,34,119,126,178,132,178,
    95,1,184,234,234,57,65,67,23,113,250,172,249,144,110,53,
    178,79,176,161,123,168,198,74,67,212,13,138,11,38,30,243,
    150,133,101,182,218,13,171,181,212,176,26,11,38,95,31,44,
    99,209,222,180,26,75,45,161,255,237,34,160,154,198,238,114,
    67,252,15,157,84,140,129,
};

EmbeddedPython embedded_m5_internal_param_ClockedObject(
    "m5/internal/param_ClockedObject.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_ClockedObject.py",
    "m5.internal.param_ClockedObject",
    data_m5_internal_param_ClockedObject,
    2167,
    6450);

} // anonymous namespace