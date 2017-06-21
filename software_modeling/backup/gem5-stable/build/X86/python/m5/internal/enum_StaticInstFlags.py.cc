#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_StaticInstFlags[] = {
    120,156,189,89,91,127,211,216,17,31,73,182,19,59,9,73,
    8,36,92,2,24,182,44,94,186,75,118,89,46,219,146,210,
    133,0,45,20,2,200,208,128,160,171,85,164,99,91,65,150,
    92,233,36,224,253,37,47,13,191,182,31,160,125,234,115,31,
    250,85,250,212,111,212,206,204,145,108,57,40,219,62,148,36,
    246,201,156,209,232,156,185,252,103,206,37,46,164,63,101,252,
    126,91,7,72,102,52,0,15,63,26,4,0,93,13,44,13,
    52,161,129,119,24,222,148,33,190,2,94,25,222,3,88,58,
    8,29,118,145,48,224,149,14,225,36,191,83,129,192,96,142,
    6,253,26,136,18,88,101,88,11,103,161,36,42,240,166,6,
    241,247,160,105,90,168,193,11,111,12,188,113,120,143,163,35,
    81,229,1,199,129,152,53,102,86,193,155,96,102,13,188,73,
    38,38,160,63,3,98,18,172,41,18,179,14,225,176,23,113,
    216,105,30,246,95,52,172,135,79,230,192,59,68,226,168,215,
    75,146,44,145,36,207,55,205,163,204,128,199,163,180,208,158,
    217,129,224,44,8,3,54,14,131,117,24,4,126,102,97,151,
    76,70,214,28,88,115,100,84,179,113,4,189,227,255,27,127,
    26,232,29,144,147,216,108,137,56,241,163,208,246,195,86,228,
    235,244,188,66,13,249,210,165,102,44,117,234,10,57,245,31,
    192,30,245,244,212,169,59,0,26,245,1,2,29,118,152,216,
    209,161,223,128,109,13,54,74,224,25,176,141,211,148,73,147,
    182,6,187,58,188,54,72,96,7,219,18,154,126,26,74,82,
    121,116,131,77,87,35,141,193,78,25,182,203,208,124,177,173,
    19,227,77,21,226,191,195,15,139,60,232,56,15,170,195,54,
    182,37,216,45,193,78,5,214,80,8,89,27,85,242,131,246,
    98,27,45,69,78,179,81,66,109,87,115,230,146,41,158,31,
    135,78,87,200,163,72,219,34,220,236,218,77,233,72,223,189,
    31,38,242,94,224,180,147,70,45,19,141,146,75,61,71,118,
    76,126,215,32,167,116,123,146,199,140,66,33,39,144,104,249,
    161,103,119,35,111,51,16,114,156,6,180,91,126,32,108,155,
    31,222,239,246,162,88,222,141,227,40,54,201,175,204,12,34,
    103,240,6,121,213,13,162,68,52,104,54,158,198,164,225,37,
    73,183,122,60,34,41,192,250,210,203,158,72,220,216,239,73,
    12,151,26,145,164,105,180,6,5,138,155,228,25,54,75,157,
    168,43,150,222,136,110,87,196,226,242,82,91,116,175,114,243,
    69,34,157,245,64,44,173,111,250,129,183,244,226,155,107,75,
    189,190,236,68,225,18,62,247,67,41,208,51,193,82,145,79,
    46,161,220,97,26,253,173,223,182,125,182,203,238,136,160,39,
    226,41,226,158,160,153,181,25,109,82,171,104,134,214,208,166,
    144,42,227,215,208,22,245,9,109,213,39,203,92,178,150,144,
    85,202,99,137,2,172,193,27,29,226,69,66,202,6,126,52,
    10,45,226,165,73,207,116,126,246,148,92,162,184,27,6,197,
    95,49,183,25,93,8,51,148,92,166,128,135,192,16,41,195,
    70,5,20,116,16,113,10,75,113,159,90,20,167,97,116,28,
    188,4,201,95,1,93,140,160,217,134,20,80,187,6,104,225,
    12,200,26,101,28,114,231,113,194,63,48,38,155,13,82,127,
    149,97,33,59,126,18,189,13,217,249,68,115,22,53,209,51,
    79,250,143,215,55,132,43,147,51,200,120,25,109,214,93,39,
    12,35,89,119,60,175,238,72,25,251,235,155,82,36,117,25,
    213,207,39,13,138,167,57,155,33,107,48,94,191,151,33,137,
    162,142,72,82,29,207,119,37,118,230,184,195,81,72,132,68,
    84,116,34,47,65,62,13,209,22,210,36,37,37,57,57,98,
    69,24,52,54,137,210,244,40,119,8,251,183,50,77,24,153,
    141,74,134,163,68,4,45,89,99,72,58,73,98,179,38,196,
    103,244,209,192,91,78,176,41,120,244,132,209,193,164,210,225,
    32,240,119,140,108,201,76,103,123,194,40,244,250,168,158,239,
    94,160,153,143,49,10,39,25,135,71,17,131,99,216,86,240,
    111,69,155,215,221,82,138,188,74,134,190,121,178,27,56,246,
    90,26,126,68,226,46,86,157,134,206,101,131,77,226,156,60,
    71,20,189,108,46,82,115,138,154,211,212,156,201,172,254,200,
    166,79,237,53,253,58,77,167,179,189,108,25,133,199,200,44,
    243,70,242,234,248,48,175,176,56,54,41,63,116,202,162,97,
    126,148,168,144,198,55,169,69,81,206,60,131,140,145,42,143,
    120,48,74,25,4,63,81,195,148,96,63,153,51,100,255,120,
    134,102,147,32,154,199,105,59,135,83,147,66,196,32,53,143,
    103,5,209,38,9,5,79,243,36,13,85,46,112,116,157,154,
    179,7,228,237,33,208,218,31,0,237,6,205,60,147,2,109,
    138,1,86,195,239,140,238,26,105,8,6,75,229,220,30,128,
    17,186,74,5,232,250,148,40,227,67,163,15,22,88,169,169,
    247,114,192,34,237,244,188,69,171,72,244,23,200,144,60,164,
    22,112,217,95,11,23,112,37,215,121,37,255,146,87,114,222,
    13,240,142,69,21,105,131,235,180,34,202,228,145,150,1,243,
    233,10,157,84,177,237,197,209,187,126,61,106,213,37,155,76,
    53,117,249,124,114,233,124,114,3,171,101,253,38,215,41,85,
    47,85,69,140,69,143,42,26,189,122,247,157,43,120,81,228,
    158,109,171,2,102,115,49,179,211,197,22,209,69,43,62,123,
    159,29,205,165,60,145,49,85,240,131,112,117,109,224,106,210,
    252,1,205,85,99,63,27,218,2,34,169,166,177,66,182,42,
    220,188,241,226,167,248,189,77,190,39,163,5,208,38,214,108,
    42,117,217,18,178,201,252,124,4,45,31,215,14,115,9,7,
    126,158,161,164,50,68,9,125,141,12,247,127,2,222,154,106,
    240,71,32,28,96,184,83,220,15,210,132,2,63,71,226,223,
    1,39,72,193,46,128,107,77,147,86,126,150,192,18,148,92,
    103,81,181,41,120,0,127,206,101,87,182,116,27,233,158,51,
    191,116,151,6,117,138,1,244,63,45,207,165,209,130,70,177,
    233,56,9,137,169,42,53,76,216,225,74,48,216,39,98,149,
    254,200,104,26,87,179,216,164,208,235,33,150,104,241,59,169,
    205,233,57,132,124,69,205,229,1,56,180,140,247,241,116,59,
    3,251,47,212,182,90,11,94,145,2,37,86,121,122,76,78,
    227,223,61,227,12,18,160,156,37,192,63,181,44,1,4,175,
    92,239,249,32,66,173,78,33,223,213,53,60,175,169,147,26,
    30,210,54,198,232,32,70,68,149,14,95,68,76,128,53,201,
    196,20,29,166,136,152,166,131,20,17,179,124,100,170,240,65,
    233,8,19,71,193,154,103,98,1,172,99,76,28,7,235,4,
    19,39,193,90,100,226,20,88,167,153,56,3,86,157,137,179,
    96,157,99,226,19,176,126,194,196,121,176,62,101,226,2,88,
    13,38,62,3,235,34,19,63,5,235,115,38,190,0,235,18,
    19,75,96,125,201,196,87,96,93,102,226,107,176,174,48,113,
    21,172,107,76,92,7,235,27,38,126,6,214,207,153,184,1,
    214,50,19,191,0,235,38,19,191,4,235,91,38,110,129,117,
    155,137,21,176,238,48,113,23,172,123,76,252,10,172,95,51,
    113,31,172,7,76,252,6,172,135,76,60,2,107,149,137,199,
    96,61,97,226,41,88,38,19,77,176,158,49,241,28,172,223,
    50,177,6,214,11,138,8,209,47,185,181,40,83,173,87,180,
    133,166,163,234,107,102,254,14,172,239,178,19,183,77,37,140,
    202,57,215,142,236,203,43,12,173,71,35,219,21,198,235,170,
    66,242,32,27,85,162,81,243,238,32,42,55,229,218,114,224,
    116,215,61,231,102,155,102,162,233,220,172,230,233,153,238,51,
    121,221,169,94,105,251,169,207,221,171,153,13,91,7,81,181,
    175,225,192,3,221,185,70,121,145,203,165,250,89,71,212,187,
    162,187,46,226,164,227,247,234,45,124,227,195,149,255,22,240,
    94,70,5,5,11,122,255,8,155,170,54,146,108,170,182,22,
    158,192,45,64,137,183,0,203,180,5,216,230,109,130,173,171,
    93,192,48,150,188,191,227,211,43,77,31,138,183,123,245,85,
    171,60,1,196,233,245,68,232,153,23,33,191,112,243,227,131,
    138,187,109,251,161,143,39,175,191,228,107,172,161,29,193,21,
    251,67,244,82,65,203,25,202,165,182,60,40,186,139,7,163,
    54,135,250,111,89,168,27,223,67,126,151,192,7,64,85,155,
    113,191,133,199,119,217,87,235,226,37,106,62,27,68,230,232,
    135,21,217,190,159,172,70,61,62,8,42,234,120,161,204,125,
    84,175,141,227,86,89,46,235,157,40,148,189,23,68,200,10,
    219,188,55,202,117,143,20,74,175,172,240,113,148,137,99,133,
    18,143,68,215,20,45,142,219,160,51,95,40,249,48,114,60,
    70,88,74,46,20,74,53,101,20,11,94,250,51,250,220,254,
    114,43,184,198,249,180,9,117,2,190,42,41,96,239,231,49,
    79,188,19,222,192,99,170,119,122,31,217,68,62,137,69,75,
    72,183,195,177,220,195,42,126,235,142,35,157,61,111,141,176,
    138,245,66,205,101,28,5,169,94,89,239,76,241,12,126,140,
    187,214,76,102,90,77,49,194,59,187,159,237,35,82,179,153,
    15,70,184,167,246,211,207,203,36,166,50,29,189,31,215,243,
    121,232,230,100,148,158,163,188,98,188,172,56,65,144,226,133,
    201,98,252,153,66,110,198,97,138,191,180,83,172,7,105,122,
    71,4,78,191,25,68,50,213,99,148,183,88,248,222,179,78,
    44,28,175,217,15,93,190,116,26,97,20,123,169,41,98,223,
    9,252,31,40,175,148,151,242,156,226,168,100,18,226,182,104,
    17,234,103,71,222,203,184,245,31,127,247,86,11,235,148,156,
    25,125,85,49,139,109,195,132,189,237,196,177,143,2,147,89,
    6,103,140,98,92,175,197,190,20,153,136,194,245,8,171,216,
    35,38,58,44,147,152,74,67,53,228,20,199,255,174,121,247,
    89,26,127,38,139,109,95,141,194,102,79,184,155,1,62,216,
    18,169,237,123,152,197,185,246,116,211,23,137,43,210,92,203,
    122,39,139,115,166,23,223,114,93,145,36,234,146,57,215,47,
    246,210,243,112,11,221,223,242,105,69,73,189,52,194,42,214,
    168,217,79,92,66,186,210,40,235,21,203,62,114,220,56,194,
    21,65,201,102,189,125,100,253,17,217,180,183,79,85,161,108,
    16,152,154,221,174,159,101,201,40,175,56,194,15,157,68,102,
    35,171,8,231,57,197,94,186,231,199,67,17,229,165,17,86,
    241,76,252,244,118,236,132,88,69,167,134,22,165,156,226,85,
    229,78,210,123,220,75,87,21,69,239,147,185,191,223,116,146,
    142,202,152,52,115,115,156,34,239,174,226,134,128,41,246,238,
    176,87,132,86,110,155,120,232,13,177,211,22,242,191,11,225,
    97,142,19,51,207,52,233,62,140,115,198,19,8,37,177,119,
    63,194,57,144,94,4,122,34,193,10,219,183,109,117,209,129,
    253,192,182,15,236,218,226,10,14,220,130,244,190,161,130,135,
    228,138,86,253,191,255,30,213,171,149,170,198,119,3,123,254,
    147,166,76,164,141,141,186,32,232,39,38,113,204,233,193,150,
    139,255,217,147,237,201,150,137,195,65,116,186,234,158,158,47,
    161,205,79,32,189,48,52,47,12,118,109,132,4,190,149,81,
    183,95,184,161,230,251,47,190,166,48,191,166,134,108,47,44,
    186,20,151,88,180,253,132,16,69,155,43,119,203,137,15,42,
    36,234,92,165,110,231,110,82,41,75,72,79,186,188,175,78,
    87,181,138,78,251,108,67,171,225,78,187,100,76,206,84,75,
    147,19,213,82,117,204,224,27,215,41,109,78,175,149,170,19,
    243,215,170,216,251,15,117,199,85,97,
};

EmbeddedPython embedded_m5_internal_enum_StaticInstFlags(
    "m5/internal/enum_StaticInstFlags.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/enum_StaticInstFlags.py",
    "m5.internal.enum_StaticInstFlags",
    data_m5_internal_enum_StaticInstFlags,
    2618,
    7676);

} // anonymous namespace