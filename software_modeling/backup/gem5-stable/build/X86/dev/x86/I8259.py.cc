#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_I8259[] = {
    120,156,173,84,223,107,19,65,16,158,189,36,151,38,109,109,
    81,40,40,8,65,95,14,209,30,22,27,106,17,209,86,65,
    161,45,229,82,193,222,75,184,222,77,154,109,239,71,184,221,
    196,4,250,86,255,111,157,153,75,250,3,31,109,146,27,102,
    231,102,103,191,111,190,217,196,48,255,212,232,249,212,1,48,
    23,228,36,244,83,144,2,156,204,61,85,121,14,164,14,100,
    53,8,107,160,120,93,131,180,14,89,3,194,6,100,46,132,
    46,69,235,128,77,24,40,72,26,240,27,224,26,224,52,92,
    130,196,5,172,73,180,121,19,109,65,178,4,61,175,69,199,
    233,63,244,241,20,121,150,205,171,202,125,68,102,47,50,58,
    62,214,197,23,156,232,24,61,135,227,107,100,126,238,116,191,
    231,182,87,140,203,24,143,117,110,87,111,99,58,191,228,200,
    147,121,100,103,107,251,253,126,100,226,40,193,195,34,193,248,
    46,223,61,230,251,146,28,4,8,21,232,218,156,120,151,136,
    18,183,46,145,33,26,221,208,129,160,231,185,12,148,119,218,
    101,50,82,247,48,50,22,75,45,104,219,139,96,47,141,38,
    168,157,123,137,4,234,60,69,143,207,180,75,100,250,253,60,
    202,176,223,151,93,253,126,86,36,227,148,151,156,144,69,35,
    143,143,185,53,230,29,25,127,88,100,232,95,98,150,97,137,
    91,254,57,102,219,98,222,24,27,157,165,232,155,50,246,19,
    156,248,211,157,174,47,103,110,142,102,65,157,54,190,224,10,
    12,222,85,109,213,84,182,177,0,245,111,43,78,111,90,65,
    125,32,214,212,10,82,154,154,17,146,170,13,184,32,21,93,
    22,143,122,115,77,193,166,4,73,221,58,92,83,102,75,150,
    109,192,101,238,26,39,172,176,240,164,119,184,202,13,108,82,
    245,128,91,98,22,106,245,62,239,238,10,20,179,206,67,55,
    71,175,5,253,112,104,158,82,240,100,136,157,145,206,59,118,
    168,77,71,114,59,73,169,39,104,204,51,122,251,173,248,117,
    247,13,57,113,37,117,98,88,127,145,162,122,247,186,163,7,
    157,40,159,197,44,12,63,220,134,125,38,205,137,86,100,191,
    146,9,191,82,68,209,233,137,88,71,214,173,128,209,240,137,
    155,143,179,51,44,101,62,3,78,168,38,146,219,108,48,29,
    136,147,234,28,31,64,59,153,5,98,254,150,139,240,41,160,
    60,190,17,1,207,79,208,90,28,107,103,35,180,188,138,167,
    211,126,156,70,198,200,76,241,106,136,212,136,82,244,62,142,
    202,40,11,4,43,179,40,198,118,52,182,50,29,82,132,230,
    15,69,25,89,29,253,56,56,144,93,134,219,23,172,223,155,
    197,255,28,200,229,121,9,17,220,85,213,119,69,181,212,154,
    122,236,28,121,12,93,216,100,219,155,35,198,108,228,186,240,
    170,44,166,51,1,95,253,21,4,106,145,90,93,123,186,242,
    194,79,84,17,26,95,73,43,161,120,115,232,67,48,16,60,
    31,170,11,251,241,57,87,98,204,109,186,90,235,106,195,217,
    112,255,2,85,213,12,55,
};

EmbeddedPython embedded_m5_objects_I8259(
    "m5/objects/I8259.py",
    "/home/kemmere2/gem5/gem5-stable/src/dev/x86/I8259.py",
    "m5.objects.I8259",
    data_m5_objects_I8259,
    679,
    1360);

} // anonymous namespace