#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Uart[] = {
    120,156,165,82,77,111,212,64,12,245,36,217,143,110,11,236,
    1,184,33,133,91,132,196,6,85,90,137,3,66,168,234,25,
    85,105,56,144,75,52,77,188,36,37,179,137,102,102,171,221,
    115,249,223,173,61,73,150,194,17,242,97,217,142,99,191,231,
    55,5,12,151,79,239,151,16,192,164,228,148,244,8,104,0,
    210,193,19,189,231,65,227,129,242,33,243,65,148,62,160,15,
    27,1,101,0,191,0,238,1,190,103,1,148,19,192,192,101,
    167,199,236,4,202,25,92,71,115,106,92,63,208,21,9,242,
    44,155,119,189,251,156,204,133,52,117,113,85,183,151,120,87,
    23,104,3,74,125,147,218,22,79,241,93,48,190,75,114,16,
    32,19,140,50,243,24,4,207,21,64,115,112,10,183,51,192,
    57,220,158,48,216,123,15,178,133,75,158,142,73,223,37,207,
    32,185,142,120,68,226,145,49,167,76,25,239,226,29,13,92,
    85,149,161,49,112,213,72,187,105,181,10,109,85,155,176,116,
    168,66,242,58,170,9,219,205,202,156,81,81,90,97,104,81,
    171,122,43,155,232,25,83,97,146,121,190,149,10,243,220,46,
    92,160,218,114,215,112,200,3,237,161,235,201,165,122,135,174,
    90,222,24,171,101,97,93,117,177,223,231,21,202,18,181,157,
    48,8,169,165,114,85,35,28,59,237,211,184,181,150,87,34,
    183,7,247,189,27,191,115,144,14,144,92,112,196,199,91,252,
    109,76,76,38,174,90,133,241,79,84,10,53,158,199,63,80,
    173,157,121,111,172,188,105,48,54,186,136,121,49,172,196,170,
    59,184,109,189,229,159,25,235,84,244,247,43,225,230,112,205,
    199,243,245,135,163,98,98,84,236,229,95,138,177,86,62,43,
    192,237,146,37,247,123,241,68,1,110,66,42,244,250,48,199,
    196,121,188,143,100,254,7,135,127,39,178,28,254,54,193,64,
    228,107,196,139,181,39,100,212,122,213,241,222,141,163,197,145,
    110,247,7,183,248,254,112,38,98,60,57,199,62,255,137,199,
    77,250,212,31,148,207,111,184,9,39,22,98,33,150,222,235,
    217,35,59,51,191,44,
};

EmbeddedPython embedded_m5_objects_Uart(
    "m5/objects/Uart.py",
    "/home/kemmere2/gem5/gem5-stable/src/dev/Uart.py",
    "m5.objects.Uart",
    data_m5_objects_Uart,
    470,
    932);

} // anonymous namespace