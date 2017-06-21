#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyPortProxy[] = {
    120,156,197,88,253,110,220,198,17,159,37,121,39,221,73,178,
    36,235,203,182,100,139,142,99,251,106,52,82,235,198,113,128,
    168,110,221,52,5,18,192,138,203,115,97,71,9,202,82,199,
    213,137,39,126,28,200,149,229,11,164,2,173,140,182,64,255,
    238,35,244,143,190,77,158,163,47,209,206,204,146,60,74,58,
    1,1,82,95,229,187,245,220,114,56,59,31,191,153,157,221,
    14,228,127,53,252,254,210,6,200,254,45,0,124,252,8,8,
    1,34,1,59,2,132,20,224,47,194,65,13,210,15,193,175,
    193,91,128,29,3,164,1,167,72,152,240,181,1,241,52,191,
    83,135,208,228,25,1,131,38,72,11,118,106,240,50,158,7,
    75,214,225,160,9,233,31,64,8,17,11,120,229,79,128,63,
    9,111,81,58,18,13,22,56,9,52,217,228,201,6,248,83,
    60,217,4,127,154,137,41,24,204,129,156,134,157,25,98,219,
    185,130,98,31,160,216,89,22,251,29,137,245,241,201,18,248,
    87,136,29,245,250,138,56,45,226,228,245,102,89,202,92,161,
    229,60,236,92,45,232,133,10,189,88,161,151,42,244,114,133,
    94,169,208,215,42,244,245,10,125,163,66,175,86,232,181,10,
    125,179,66,223,170,208,235,76,163,181,87,161,103,67,239,54,
    244,222,131,61,12,192,124,105,217,29,144,38,244,222,135,157,
    247,65,226,231,14,156,98,140,252,171,149,55,238,242,27,11,
    229,27,247,248,141,251,176,115,31,36,126,238,233,55,234,208,
    110,45,99,220,131,255,224,95,11,227,14,106,26,135,215,50,
    205,130,36,118,131,120,47,9,12,122,94,167,129,80,210,161,
    97,34,135,203,167,4,151,127,1,99,197,55,114,184,156,0,
    10,22,100,75,104,192,9,19,39,6,12,90,112,44,160,103,
    129,111,194,49,46,83,35,5,186,2,78,13,248,198,36,134,
    19,28,45,12,234,45,176,148,198,74,143,131,170,37,77,192,
    73,13,142,107,208,126,117,108,208,196,65,3,210,127,194,183,
    107,44,116,146,133,26,112,140,163,5,167,22,156,212,225,37,
    50,225,84,175,65,230,139,87,199,104,41,206,180,91,22,106,
    187,93,49,151,76,241,131,52,246,34,169,22,145,118,251,94,
    234,69,174,115,184,59,120,158,164,234,121,154,188,25,180,154,
    5,103,146,109,244,61,181,239,240,171,38,249,36,234,43,22,
    153,196,82,77,33,177,23,196,190,27,37,254,97,40,213,36,
    201,115,247,130,80,186,46,63,252,60,234,163,204,207,210,52,
    73,29,114,43,79,134,137,87,190,65,78,237,132,73,38,91,
    180,26,47,227,144,120,69,220,123,125,150,72,10,176,186,244,
    178,47,179,78,26,244,21,70,75,75,36,110,146,214,162,56,
    241,144,181,113,216,220,79,34,185,121,32,163,72,166,242,225,
    102,87,70,143,120,248,32,83,222,110,40,55,119,15,131,208,
    223,124,245,241,71,155,253,129,218,79,226,77,124,30,196,74,
    162,99,194,205,17,46,217,64,182,171,36,252,40,232,186,1,
    155,229,238,203,176,47,211,25,154,189,65,11,139,57,49,45,
    234,194,20,45,49,131,84,13,191,166,88,51,166,196,118,64,
    134,117,200,88,194,149,85,69,18,133,87,192,129,1,233,26,
    225,164,135,31,65,129,69,180,180,233,153,193,207,126,75,30,
    209,179,61,147,162,175,39,143,25,91,8,50,228,220,162,112,
    199,192,0,169,65,175,14,26,56,136,55,141,164,116,64,35,
    178,147,24,3,133,91,144,253,3,208,195,8,153,99,200,225,
    116,106,130,136,231,64,53,169,146,224,236,50,46,248,103,70,
    100,187,69,234,111,51,42,212,126,144,37,71,49,251,158,104,
    206,161,54,122,230,249,224,203,221,158,236,168,108,29,39,190,
    74,14,237,142,23,199,137,178,61,223,183,61,165,210,96,247,
    80,201,204,86,137,125,55,107,81,56,157,249,2,88,165,188,
    65,191,0,18,5,29,129,164,127,248,65,71,225,143,5,254,
    193,81,200,164,66,80,236,39,126,134,243,36,162,43,149,67,
    74,42,114,114,194,138,48,102,92,98,165,229,145,239,10,254,
    126,90,104,194,192,108,213,11,24,101,50,220,83,77,70,164,
    151,101,46,107,66,243,12,62,18,252,218,11,15,37,75,71,
    20,41,84,136,72,173,195,24,224,119,141,76,41,44,103,115,
    226,36,246,7,168,93,208,185,79,11,95,99,16,78,51,12,
    151,16,130,19,56,214,241,255,186,88,54,58,86,14,188,122,
    1,62,42,131,10,56,244,34,143,62,2,241,20,75,78,203,
    224,154,193,22,113,70,190,71,20,189,236,172,209,112,147,134,
    91,52,172,23,70,191,91,203,103,206,91,254,152,86,51,216,
    92,54,140,130,99,22,134,249,103,178,234,250,48,171,176,48,
    182,41,59,12,202,161,97,118,88,84,68,211,39,52,34,43,
    231,157,9,217,11,42,217,148,69,44,140,18,6,161,79,212,
    48,33,216,77,206,28,153,63,89,96,217,33,128,86,81,218,
    173,160,212,161,8,49,68,157,235,69,53,116,137,67,131,211,
    89,37,81,181,17,126,182,105,184,61,30,103,15,97,214,189,
    0,179,79,104,225,185,28,102,51,12,175,38,126,231,140,142,
    153,71,160,220,37,23,206,193,139,176,101,141,192,214,61,162,
    204,139,54,143,21,86,185,165,191,169,192,138,148,51,170,6,
    109,35,49,88,33,59,170,128,90,193,13,255,101,188,130,123,
    184,193,123,248,79,120,15,231,62,128,187,48,93,160,77,174,
    209,154,168,145,67,246,76,88,206,247,230,172,129,99,159,116,
    178,147,61,91,177,197,84,79,183,238,102,27,119,179,79,176,
    82,218,79,184,70,233,90,169,171,97,42,251,84,205,232,213,
    207,222,116,36,239,135,252,203,117,117,241,114,185,144,185,249,
    62,139,216,90,34,119,26,133,159,185,140,103,42,165,234,61,
    6,79,55,75,79,147,226,95,208,82,77,118,179,41,86,16,
    71,77,193,250,184,186,102,115,199,197,79,241,251,43,114,61,
    217,44,129,250,114,167,173,181,101,67,200,36,231,199,103,176,
    242,78,205,112,54,81,238,239,10,140,212,135,24,161,175,89,
    128,254,175,192,157,168,128,191,0,161,0,131,157,131,190,204,
    17,10,251,2,177,255,30,56,59,70,236,255,92,103,218,180,
    231,51,7,150,159,236,49,179,234,118,224,11,248,91,37,181,
    138,77,219,204,123,205,234,166,109,149,53,138,225,243,189,54,
    102,235,108,49,163,208,236,123,25,177,233,10,53,204,214,225,
    38,80,54,136,88,161,223,45,150,38,245,34,46,233,243,205,
    16,73,180,237,173,138,5,163,130,143,159,210,240,176,132,134,
    40,230,222,153,106,235,112,249,14,237,234,93,224,107,90,223,
    98,141,103,39,184,2,157,145,82,98,191,86,96,255,97,137,
    125,201,59,214,91,62,124,208,104,80,184,79,13,129,167,79,
    108,214,232,176,103,129,172,193,78,157,178,132,27,107,145,39,
    145,40,106,24,173,119,102,59,100,167,108,107,119,149,17,215,
    193,164,225,205,24,106,3,197,115,43,244,162,93,223,123,114,
    72,11,209,106,157,34,173,140,66,245,185,170,234,148,18,226,
    50,237,249,231,163,194,132,215,99,168,11,31,161,220,82,117,
    206,2,63,233,112,49,120,177,47,237,72,70,187,120,190,220,
    15,250,246,94,232,117,57,42,102,110,218,151,133,105,138,195,
    122,190,185,200,30,208,152,216,157,36,198,98,125,216,81,73,
    106,251,18,143,92,210,183,63,176,185,210,219,65,102,123,187,
    248,212,235,40,13,241,179,57,202,29,172,151,118,51,110,86,
    15,142,136,28,83,84,93,60,79,7,216,180,31,65,185,173,
    234,99,94,89,184,185,29,215,25,131,59,32,30,166,212,64,
    215,42,106,52,156,13,26,126,4,227,171,239,31,234,64,64,
    70,174,170,139,85,163,97,112,43,119,134,241,57,189,155,93,
    76,212,103,223,39,81,245,5,81,158,174,245,226,102,105,2,
    36,31,195,232,242,167,158,95,254,96,14,79,252,208,28,230,
    44,24,19,254,255,248,63,77,93,231,241,255,65,115,231,99,
    200,247,240,203,210,86,84,205,154,209,104,233,137,226,216,80,
    181,137,239,38,110,140,198,142,219,73,165,167,164,14,209,218,
    88,12,229,228,215,203,254,105,152,141,23,155,220,167,165,77,
    167,220,189,12,22,57,114,250,196,196,145,19,47,227,27,216,
    237,90,220,237,110,81,183,123,204,14,112,13,221,240,14,1,
    89,43,253,176,130,67,44,143,220,17,190,208,77,45,105,231,
    245,251,50,246,157,7,80,237,83,249,241,24,112,64,245,230,
    45,84,154,9,83,44,98,99,122,49,251,168,154,86,108,228,
    16,214,202,124,27,79,48,25,181,127,47,80,219,162,195,194,
    176,164,58,91,52,112,17,45,235,167,243,11,40,106,106,137,
    75,95,134,82,201,81,33,81,244,114,126,122,245,37,238,44,
    201,0,143,19,220,160,227,239,208,117,199,85,142,127,142,114,
    79,32,63,14,97,57,22,117,163,97,54,234,13,193,187,219,
    185,123,90,173,15,141,186,13,29,100,14,231,244,108,105,53,
    223,37,22,187,12,121,137,15,76,219,94,164,239,129,248,150,
    195,185,3,249,153,212,185,95,186,144,206,234,220,251,235,19,
    22,34,153,119,94,222,104,157,159,21,14,141,30,109,20,6,
    109,156,53,136,47,51,163,71,106,237,82,174,246,32,83,50,
    82,183,70,50,180,131,168,31,202,103,50,74,210,129,178,71,
    178,60,205,27,128,156,105,117,36,19,62,212,183,115,220,167,
    94,124,254,105,152,116,14,164,159,243,220,188,156,231,215,73,
    228,225,252,232,85,80,219,92,194,252,185,231,126,74,111,45,
    157,155,205,100,26,120,97,240,173,228,139,135,17,242,180,107,
    206,47,38,227,67,182,8,205,125,150,248,242,130,111,159,250,
    126,234,120,113,87,186,175,37,181,77,234,246,121,134,51,46,
    43,184,8,35,5,11,55,39,231,34,57,89,169,232,186,93,
    184,80,227,57,113,82,217,13,80,239,148,101,148,143,117,197,
    35,88,115,28,71,109,13,213,151,199,148,103,186,3,215,23,
    5,79,232,74,42,123,129,3,93,34,54,102,27,152,115,84,
    12,77,60,163,207,8,203,156,158,107,88,211,83,13,171,49,
    97,242,221,207,12,158,184,154,86,99,106,90,92,254,111,29,
    51,182,105,172,163,172,255,2,105,15,46,236,
};

EmbeddedPython embedded_m5_internal_param_RubyPortProxy(
    "m5/internal/param_RubyPortProxy.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_RubyPortProxy.py",
    "m5.internal.param_RubyPortProxy",
    data_m5_internal_param_RubyPortProxy,
    2300,
    7035);

} // anonymous namespace