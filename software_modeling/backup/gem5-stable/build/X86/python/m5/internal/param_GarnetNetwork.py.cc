#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetNetwork[] = {
    120,156,197,88,235,115,219,198,17,223,3,64,74,164,36,75,
    178,44,201,15,197,162,147,58,102,220,88,242,51,206,76,92,
    183,142,107,119,146,105,148,20,76,199,142,146,41,10,17,71,
    10,20,8,112,128,147,101,102,164,15,141,60,105,167,157,201,
    151,78,191,244,123,63,244,191,233,127,212,238,46,30,60,81,
    228,140,251,48,43,147,231,229,97,177,183,143,223,238,237,93,
    19,178,191,18,126,127,86,3,72,190,55,0,60,252,8,8,
    0,186,2,182,5,8,41,192,59,7,123,37,136,239,130,87,
    130,87,0,219,6,72,3,142,145,48,225,107,3,194,89,126,
    167,12,129,201,51,2,250,85,144,22,108,151,224,89,184,8,
    150,44,195,94,21,226,223,130,16,34,20,240,220,155,2,111,
    26,94,161,116,36,42,44,112,26,104,178,202,147,21,240,102,
    120,178,10,222,44,19,51,208,95,0,57,11,219,115,196,182,
    125,6,197,94,71,177,243,44,246,31,36,214,195,39,203,224,
    157,33,118,212,235,43,226,180,136,147,215,155,103,41,11,185,
    150,139,176,125,54,167,151,52,250,156,70,47,107,244,138,70,
    175,106,244,121,141,190,160,209,23,53,250,146,70,175,105,244,
    91,26,125,89,163,215,53,186,166,209,87,52,250,109,141,126,
    71,163,127,164,209,87,53,250,93,141,190,166,209,117,141,126,
    79,163,175,107,244,143,53,250,125,166,49,18,103,161,115,3,
    58,27,208,217,132,22,130,99,177,240,250,77,144,38,116,110,
    193,246,45,144,248,185,9,199,136,31,239,172,246,198,109,126,
    99,169,120,227,14,191,113,23,182,239,130,196,207,157,244,141,
    50,52,234,43,136,73,255,159,248,87,23,72,169,89,28,94,
    200,56,241,163,208,241,195,86,228,27,244,188,76,3,33,184,
    73,195,84,6,229,199,4,229,191,3,227,216,51,50,40,31,
    1,10,22,100,75,96,192,17,19,71,6,244,235,112,40,160,
    99,129,103,194,33,46,83,34,5,218,2,142,13,248,198,36,
    134,35,28,45,4,220,101,176,84,138,227,14,3,46,149,52,
    5,71,37,56,44,65,227,249,161,65,19,123,21,136,255,6,
    223,174,177,208,105,22,106,192,33,142,22,28,91,112,84,134,
    103,200,132,83,157,10,153,47,158,31,162,165,56,211,168,91,
    168,237,150,102,46,153,226,249,113,232,118,165,58,135,180,211,
    115,99,183,235,252,194,141,67,169,182,164,58,136,226,189,122,
    53,231,140,146,141,158,171,118,109,126,213,36,159,116,123,138,
    69,70,200,62,131,68,203,15,61,167,27,121,251,129,84,211,
    36,207,105,249,129,116,28,126,248,73,183,23,197,234,73,28,
    71,177,77,110,229,201,32,114,139,55,200,169,205,32,74,100,
    157,86,227,101,108,18,175,136,187,213,99,137,164,0,171,75,
    47,123,50,105,198,126,79,97,180,82,137,196,77,210,234,20,
    39,30,146,6,14,155,187,81,87,110,238,201,110,87,198,242,
    246,102,91,118,239,241,112,35,81,238,78,32,55,119,246,253,
    192,219,124,254,225,7,155,189,190,218,141,194,77,124,238,135,
    74,162,99,130,205,17,46,217,64,182,179,36,252,192,111,59,
    62,155,229,236,202,160,39,227,57,154,189,72,11,139,5,49,
    43,202,194,20,117,49,135,84,9,191,166,88,51,102,196,150,
    79,134,53,201,88,194,149,165,35,137,194,43,96,207,128,120,
    141,112,210,193,143,160,192,34,90,26,244,204,224,103,191,34,
    143,164,179,29,147,162,159,78,30,50,182,16,100,200,249,128,
    194,29,2,3,164,4,157,50,164,192,65,188,165,72,138,251,
    52,34,59,137,49,80,184,5,201,95,0,61,140,144,57,132,
    12,78,199,38,136,112,1,84,149,170,28,206,174,224,130,223,
    49,34,27,117,82,127,139,81,161,118,253,36,58,8,217,247,
    68,115,14,53,208,51,95,244,63,223,233,200,166,74,214,113,
    226,171,104,191,214,116,195,48,82,53,215,243,106,174,82,177,
    191,179,175,100,82,83,81,237,106,82,167,112,218,139,57,176,
    10,121,253,94,14,36,10,58,2,41,253,225,249,77,133,63,
    150,248,7,71,33,145,10,65,177,27,121,9,206,147,136,182,
    84,54,41,169,200,201,17,43,194,152,113,136,149,150,71,190,
    51,248,251,81,174,9,3,179,94,206,97,148,200,160,165,170,
    140,72,55,73,28,214,132,230,25,124,36,248,133,27,236,75,
    150,142,40,82,168,16,145,169,14,19,128,223,121,50,37,183,
    156,205,9,163,208,235,163,118,126,243,26,45,124,158,65,56,
    203,48,92,70,8,78,225,88,198,255,203,98,197,104,90,25,
    240,202,57,248,168,12,42,224,208,139,44,250,8,196,99,44,
    57,117,131,107,6,91,196,25,249,54,81,244,178,189,70,195,
    91,52,92,166,97,61,55,250,205,90,62,55,108,249,125,90,
    205,96,115,217,48,10,142,153,27,230,157,200,170,11,131,172,
    194,194,216,160,236,48,40,135,6,217,97,81,17,141,31,210,
    136,172,156,119,38,36,95,82,201,166,44,98,97,148,48,8,
    125,162,6,9,193,110,178,23,200,252,233,28,203,54,1,84,
    71,105,91,67,169,77,17,98,136,218,23,242,106,232,16,71,
    10,78,251,18,137,42,141,240,115,141,134,43,147,113,246,0,
    102,237,83,48,251,136,22,94,200,96,54,199,240,170,226,119,
    193,104,154,89,4,138,93,114,105,8,94,132,45,107,4,182,
    222,37,202,60,109,243,68,97,149,89,250,84,131,21,41,103,
    232,6,109,33,209,95,37,59,116,64,173,226,134,255,44,92,
    197,61,220,224,61,252,38,239,225,220,7,112,135,152,22,104,
    147,107,116,74,148,200,33,45,19,86,178,189,57,169,224,216,
    139,163,151,253,90,212,170,41,182,152,234,233,131,171,201,198,
    213,228,35,172,148,181,135,92,163,210,90,153,86,195,88,246,
    168,154,209,171,79,94,54,37,239,135,252,203,113,210,226,229,
    112,33,115,178,125,22,177,181,76,238,52,114,63,115,25,79,
    84,76,213,123,2,158,174,22,158,38,197,63,165,165,170,236,
    102,83,172,34,142,170,130,245,113,210,154,205,29,23,63,197,
    239,199,228,122,178,89,2,157,25,236,70,170,45,27,66,38,
    217,239,159,192,202,27,53,195,222,68,185,191,206,49,82,30,
    96,132,190,102,14,250,223,3,119,162,2,190,7,66,1,6,
    59,3,125,145,35,20,246,37,98,255,13,112,118,140,216,255,
    185,206,52,104,207,103,14,44,63,201,125,102,77,219,129,79,
    225,15,90,106,229,155,182,153,245,154,250,166,109,21,53,138,
    225,243,90,27,179,117,178,152,81,104,118,221,132,216,210,10,
    53,200,214,193,38,80,52,136,88,161,223,44,150,166,211,69,
    28,210,231,155,1,146,104,219,187,36,150,12,13,31,183,104,
    184,93,64,67,228,115,111,76,181,117,24,191,67,59,233,46,
    240,53,173,111,177,198,243,83,92,129,78,72,41,176,95,202,
    177,127,187,192,190,228,29,235,21,31,62,104,52,40,220,199,
    134,192,147,49,54,107,116,16,181,64,150,96,187,76,89,194,
    141,181,200,146,72,228,53,140,214,59,177,29,178,83,182,82,
    119,21,17,79,131,73,195,203,9,212,6,138,231,131,192,237,
    238,120,238,195,239,104,33,90,173,153,167,149,145,171,190,160,
    171,78,41,33,198,105,207,63,239,229,38,188,152,64,93,248,
    0,229,22,170,115,22,120,81,147,139,193,151,187,178,214,149,
    221,29,60,95,238,250,189,90,43,112,219,28,21,51,51,237,
    243,220,52,197,97,29,110,46,146,235,52,70,181,102,20,98,
    177,222,111,170,40,174,121,18,143,92,210,171,221,168,113,165,
    175,249,73,205,221,193,167,110,83,165,16,63,153,163,220,193,
    186,113,59,225,102,117,239,128,200,9,69,213,193,243,180,143,
    77,251,43,40,182,213,244,152,87,20,110,110,199,211,140,193,
    29,16,15,83,170,159,214,42,106,52,236,13,26,222,131,201,
    213,247,187,40,247,119,180,0,185,170,44,46,25,21,131,91,
    185,19,140,95,208,187,201,233,68,61,120,157,68,77,47,175,
    178,116,45,19,167,156,162,243,60,141,21,42,243,219,213,124,
    114,134,199,89,158,156,203,239,199,206,240,228,60,223,57,149,
    121,102,145,178,125,234,191,205,118,206,151,9,101,202,159,254,
    167,73,110,223,255,63,104,110,127,8,217,110,63,46,193,133,
    110,214,92,154,224,29,145,31,48,116,155,248,22,227,226,104,
    148,57,205,88,186,74,166,33,90,155,136,161,92,38,210,101,
    127,24,228,237,233,118,248,81,97,211,49,247,57,253,115,28,
    185,244,108,197,145,19,207,194,139,216,23,91,220,23,63,160,
    190,248,144,29,224,24,105,107,60,0,100,169,240,195,42,14,
    161,60,112,70,248,34,109,127,73,59,183,215,147,161,103,95,
    7,189,163,229,199,19,192,1,85,166,63,131,214,118,152,226,
    28,182,176,167,179,143,234,174,102,35,135,176,84,228,219,100,
    130,201,168,253,107,142,218,58,93,96,13,138,175,253,128,6,
    46,183,69,165,181,127,90,132,226,157,49,144,220,217,111,181,
    100,236,36,254,183,146,206,77,175,197,135,237,16,31,118,181,
    57,117,99,204,123,225,62,101,147,19,181,156,158,223,195,87,
    149,219,150,9,175,244,239,189,65,107,146,173,35,159,114,24,
    57,235,60,25,72,37,71,1,78,145,107,178,83,188,39,113,
    135,141,250,120,172,226,131,10,254,14,28,103,82,219,210,79,
    80,238,31,33,43,143,184,45,137,50,110,76,203,98,217,168,
    148,43,130,119,250,161,59,235,84,39,110,129,184,37,239,39,
    54,87,173,249,34,184,124,175,154,239,184,132,3,62,60,110,
    185,221,244,78,140,111,124,108,138,44,159,207,237,107,5,72,
    232,222,130,207,65,233,105,19,115,149,187,16,110,58,236,59,
    57,110,186,247,54,114,163,54,82,163,62,118,19,121,194,48,
    190,225,237,222,83,107,35,217,159,186,251,129,250,44,66,55,
    243,125,132,206,240,52,136,92,229,188,144,212,12,169,149,161,
    135,159,132,197,163,75,35,5,55,252,110,122,69,169,22,135,
    158,123,177,139,244,242,208,108,34,99,223,13,8,175,111,141,
    148,103,239,239,244,115,139,214,135,56,208,102,191,249,228,165,
    250,165,31,238,229,90,93,30,231,157,130,83,213,198,46,244,
    24,15,249,113,20,4,24,181,209,110,35,166,70,63,81,178,
    59,102,33,52,191,23,200,207,100,55,138,251,99,22,122,148,
    53,147,25,211,104,55,226,195,204,141,195,70,167,207,31,7,
    81,115,79,122,25,207,104,215,49,207,207,163,46,185,125,56,
    200,153,182,169,41,195,42,72,76,105,39,85,143,32,114,202,
    23,143,60,47,182,221,176,45,115,167,95,25,102,56,97,98,
    206,53,90,75,14,141,29,225,241,120,28,164,152,131,35,55,
    18,0,8,201,215,4,64,198,121,42,46,39,156,57,78,142,
    166,103,206,66,73,158,63,231,157,117,92,42,82,42,156,154,
    229,110,248,116,99,194,245,48,150,109,63,33,143,172,142,122,
    51,219,175,169,108,177,45,163,106,182,46,101,66,117,52,61,
    105,166,23,98,15,105,55,74,66,28,232,178,188,50,95,193,
    154,74,91,185,41,170,184,153,91,230,236,66,197,154,157,169,
    88,149,41,147,239,56,231,196,146,81,181,42,51,179,226,63,
    249,183,142,117,186,106,172,47,86,196,191,0,125,124,67,111,
};

EmbeddedPython embedded_m5_internal_param_GarnetNetwork(
    "m5/internal/param_GarnetNetwork.py",
    "/home/kemmere2/gem5/gem5-stable/build/X86/python/m5/internal/param_GarnetNetwork.py",
    "m5.internal.param_GarnetNetwork",
    data_m5_internal_param_GarnetNetwork,
    2528,
    7961);

} // anonymous namespace