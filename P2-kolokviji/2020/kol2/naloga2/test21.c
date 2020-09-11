
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

#define MAX_ST_NASLOVOV 1000000

Vozlisce* izdelaj(int* t, long* naslovi, int* stNaslovov) {
    if (*t < 0) {
        return NULL;
    }
    Vozlisce* v = malloc(sizeof(Vozlisce));
    naslovi[(*stNaslovov)++] = (long) v;
    v->podatek = *t;
    v->naslednje = izdelaj(t + 1, naslovi, stNaslovov);
    return v;
}

void izpisi(Vozlisce* v) {
    printf("[");
    Vozlisce* p = v;
    while (p != NULL) {
        if (p != v) {
            printf(", ");
        }
        printf("%d", p->podatek);
        p = p->naslednje;
    }
    printf("]\n");
}

void pocisti(Vozlisce* v) {
    if (v != NULL) {
        pocisti(v->naslednje);
        free(v);
    }
}

int primerjalnik(const void* pa, const void* pb) {
    long a = *(long*) pa;
    long b = *(long*) pb;
    return (a < b) ? (-1) : ((a > b) ? 1 : 0);
}

bool preveri(Vozlisce* seznam, long* naslovi, int stNaslovov) {
    Vozlisce* p = seznam;
    while (p != NULL) {
        long naslov = (long) p;
        if (bsearch(&naslov, naslovi, stNaslovov, sizeof(long), primerjalnik) != NULL) {
            return false;
        }
        p = p->naslednje;
    }
    return true;
}

int __main__() {
    int* t[] = {
        (int[]) {375, 7481, 2371, 9890, 2707, 8081, 5131, 3351, 4067, 3041, 7893, 7074, 8025, 5659, 549, 3335, 9993, 9037, 3421, 6860, 817, 4399, 8369, 6220, 8516, 7596, 627, 4470, 5539, 1259, 8431, 1943, 6048, 1568, 1588, 6330, 6277, 4166, 9199, 8212, 4310, 4902, 420, 8585, 8108, 1984, 5630, 7442, 586, 1607, 1783, 7714, 2293, 9914, 5717, 4889, 7748, 2097, 3707, 4679, 2123, 4826, 7060, 9486, 683, 7272, 8489, 4266, 463, 494, 3416, 6940, 6718, 4795, 1644, 109, 9441, 6424, 9684, 1728, 6229, 1464, 4958, 3750, 8305, 1931, 1424, 8225, 5790, 4733, 2036, 4100, 9038, 6695, 8444, 5571, 7222, 8317, 8501, 303, 9332, 9834, 9105, 2022, 6936, 7246, 528, 2582, 5768, 9873, 4767, 1837, 8714, 8078, 918, 4824, 9996, 5779, 6602, 5552, 9963, 2913, 3479, 4348, 4253, 1624, 7197, 8283, 8930, 1413, 4518, 5273, 8789, 6591, 1058, 6679, 3615, 292, 4475, 5432, 1623, 3830, 8811, 3166, 6040, 9875, 1142, 9286, 7852, 896, 2692, 6717, 2045, 9392, 3173, 1320, 6361, 7720, 5823, 5660, 8577, 7434, 6338, 8093, 1475, 1786, 9849, 3850, 3214, 1351, 1077, 9374, 1661, 4182, 5883, 9062, 8687, 6309, 9746, 77, 7196, 5320, 8812, 3448, 6284, 3105, 6886, 1407, 3193, 6191, 6060, 3315, 6840, 6297, 8435, 4554, 7904, 7152, 5658, 5386, 3354, 7594, 6727, 8335, 7929, 7340, 1502, 3235, 7336, 7985, 8384, 3638, 6759, 8945, 1357, 1075, 1423, 8171, 9922, 7226, 9477, 1283, 2899, 9182, 3528, 8169, 7306, 3899, 3144, 3974, 7394, 261, 3408, 1496, 1159, 2820, 7740, 6197, 4446, 9079, 485, 3731, 3301, 5923, 7137, 642, 3320, 7472, 1898, 6322, 1271, 1949, 7162, 2548, 4430, 7804, 4838, 6414, 1483, 6178, 741, 2912, 5255, 6433, 893, 1662, 6225, 2636, 1449, 7806, 5359, 2459, 9454, 3959, 1295, 5719, 5143, 570, 6282, 7135, 9015, 3678, 3788, 171, 7425, 6544, 5809, 4243, 9165, 7388, 1834, 7877, 2831, 201, 481, 1606, 5566, 4162, 3873, 4115, 4568, 5035, 778, 8578, 4477, 4219, 2590, 8359, 6898, 5401, 4534, 100, 6694, 1683, 5379, 311, 8601, 2185, 3336, 5912, 477, 9821, 9099, 9273, 6047, 569, 4830, 333, 1758, 3816, 2759, 9363, 9940, 3969, 5922, 4641, 8396, 903, 5688, 9704, 5798, 2219, 2349, 4301, 1850, 1516, 8873, 2202, 7540, 6319, 3741, 3791, 3082, 2903, 7492, 5245, 9531, 7984, 8568, 5866, 8771, 3855, 1252, 2780, 2790, 8623, 8406, 8364, 2901, 2869, 1187, 558, 3732, 5509, 597, 6306, 3237, 4315, 653, 5941, 9525, 4672, 408, 6290, 5745, 3601, 7301, 3851, 8798, 9740, 3398, -1},
        (int[]) {762, 8695, 642, 1375, 2121, 959, 7688, 7760, 1094, 3080, 2855, 8023, 232, 6390, 4590, 2018, 2945, 5350, 6222, 9223, 4282, 3107, 7775, 7483, 8450, 1805, 1951, 9324, 5325, 3248, 8896, 4896, 5198, 7430, 453, 2912, 7821, 5383, 2398, 5551, 7564, 2735, 2071, 8787, 3742, 9522, 7095, 2302, 4136, 4377, 653, 7266, 8011, 2003, 9433, 8191, 5589, 8005, 2839, 699, 9734, 2421, 1894, 3475, 6834, 9965, 3593, 3177, 7300, 7813, 2527, 8441, 7532, 8192, 3372, 18, 7384, 8898, 6874, 1614, 5304, 6235, 7323, 8420, 8137, 7835, 8981, 6044, 6819, 5237, 6281, 7377, 5900, 2292, 1196, 6351, 782, 689, 2684, 7519, 3258, 1579, 8382, 9569, 5178, 6426, 1907, 1262, 9241, 7862, 3748, 9359, 5355, 2368, 3164, 8482, 337, 2967, 2113, 3245, 5095, 6246, 2000, 8149, 3778, 5401, 3007, 7131, 3709, 4177, 7965, 2458, 3419, 9083, 1908, 3048, 1446, 2917, 4151, 6616, 8325, 5522, 190, 9524, 7380, 2551, 380, 3516, 2080, 5603, 914, 7963, 3268, 241, 1838, 3375, 326, 5618, 9158, 2028, 6508, 4234, 6744, 280, 4625, 9059, 1709, 9460, 5271, 9248, 6503, 5761, 6801, 6841, 8796, 8948, 779, 2973, 5337, 5778, 1263, 8874, 1698, 5696, 48, 5636, 252, 1101, 7997, 1, 9093, 1031, 2913, 7270, 8314, 1590, 3445, 9901, 7630, 5553, 6024, 6476, 5878, 976, 3504, 6935, 8699, 9436, 4062, 5458, 8890, 501, 1743, 9882, 6117, 9138, 1563, 3374, 4384, 6322, 8285, 9379, 7782, 5501, 3675, 4936, 6984, 9295, 2468, 1208, 9394, 288, 9810, 1023, 6372, 6392, 6138, 4886, 8138, 9920, 9629, 834, 5824, 5006, 2991, 4434, 3975, 3788, 6871, 9577, 6656, 801, 7604, 2944, 2318, 3795, 7454, 3568, 4591, 9583, 5988, 183, 8960, 9387, 1273, 202, 5234, 1668, 6531, 5621, 5438, 9959, 4658, 2002, 1264, 3697, 3300, 2832, 2299, 988, 5804, 4220, 2135, 2469, 1210, 5356, 3200, 4889, 2796, 4198, 4279, 7432, 5720, 9937, 9600, 6890, 8226, 1361, 2425, 9029, 8857, 7730, 2443, 7852, 9372, 2987, 2112, 8756, 7043, 1562, 7448, 1849, 996, 889, 8711, 4244, 8494, 7490, 6872, 4759, 2965, 5881, 1355, 2154, 9, 5273, 4900, 2608, 5098, 4743, 4595, 6943, 3526, 1362, 6667, 6175, 9525, 3052, 2161, 682, 8111, 198, 899, 6225, 2979, 5586, 856, 8069, 8708, 5378, 2149, 5612, 5646, 1615, 2519, 7298, 1070, 7903, 1365, 6081, 9378, 2897, 7768, 2780, 8190, 6077, 4997, 1102, 2213, 3341, 5649, 9573, 5523, 5566, 319, 6065, 9234, 6079, 7012, 808, 2532, 9640, 3628, 6563, 3426, 4719, 2603, 1716, 5667, 5784, 4511, -1},
        (int[]) {3524, 3930, 3574, 4400, 3635, 9547, 9871, 3001, 3289, 3629, 8205, 7757, 2565, 1369, 2214, 802, 9884, 5817, 9446, 7453, 314, 2359, 6390, 6004, 4096, 3783, 7553, 6788, 2047, 126, 2730, 8687, 1248, 1247, 8021, 108, 2591, 3142, 3610, 7667, 4131, 7775, 9664, 1089, 9232, 154, 1153, 8797, 3076, 551, 4090, 5935, 5392, 8417, 2426, 2003, 6402, 8493, 6544, 1604, 3412, 8440, 6123, 8005, 1041, 3905, 1509, 4618, 1606, 3653, 330, 3268, 6366, 8737, 2198, 4008, 147, 7356, 1833, 3949, 4754, 6174, 7537, 9400, 5715, 8465, 1667, 8521, 6421, 9370, 9276, 7425, 9784, 8926, 680, 6533, 9819, 1267, 7648, 3682, 5580, 2633, 9887, 9162, 7270, 7100, 2244, 1396, 9765, 2664, 4531, 5432, 3965, 4139, 2869, 4905, 7336, 6681, 2488, 8677, 3912, 1781, 9436, 9768, 7951, 3173, 3254, 5414, 5136, 3217, 8078, 2938, 755, 2085, 3582, 5140, 6962, 2430, 9683, 493, 8272, 7470, 9747, 7205, 2845, 3258, 4957, 2950, 9008, 6215, 1156, 2320, 7994, 8531, 490, 8849, 4032, 5056, 5501, 8343, 4864, 4986, 4983, 9110, 3358, 9233, 2202, 7967, 9502, 4452, 503, 1739, 1706, 1181, 4803, 381, 81, 1093, 7706, 1636, 1511, 3720, 1840, 4249, 2794, 9974, 9354, 9880, 2128, 9325, 8978, 7468, 2694, 1302, 1817, 4511, 6238, 6768, 5482, 3724, 1936, 8558, 6922, 4022, 407, 4674, 1496, 4894, 376, 876, 6295, 9870, 3811, 7780, 6253, 9334, 4861, 3116, 1665, 2284, 3565, 446, 9185, 9291, 5173, 7309, 7640, 9922, 950, 6482, 4625, 5489, 2546, 8017, 6001, 5711, 6241, 4159, 7598, 751, 9711, 5019, 9628, 6668, 825, 421, 8632, 5640, 3408, 2574, 482, 2222, 7261, 3193, 7254, 3404, 2021, 8855, 8550, 1974, 9601, 8907, 5183, 1130, 6116, 8690, 4094, 8882, 9414, 7172, 7148, 3029, 8151, 9009, 7675, 1968, 8353, 5500, 841, 2685, 5893, 8837, 2504, 8584, 1266, 3164, 6873, 4491, 8391, 1759, 2443, 6859, 7796, 4875, 4688, 7895, 7707, 5681, 5477, 7497, 6148, 3007, 2762, 7137, 5292, 4471, 9359, 1451, 9301, 8705, 449, 5418, 6266, 801, 8125, 3942, 2172, 1770, 1800, 7864, 6498, 7709, 6478, 7239, 3725, 4707, 1825, 5909, 3395, 4368, 237, 8613, 9889, 9237, 4378, 2062, 1406, 6941, 8100, 2364, 5808, 6803, 5753, 5324, 1317, 4728, 865, 8939, 6, 3568, 1924, 1300, 8812, 5516, 2586, 9700, 6986, 8082, 7586, 2711, 6845, 4938, 4318, 58, 3215, 8793, 5084, 496, 5564, 5762, 2124, 6121, 3716, 7595, 307, 2152, 2106, 4591, 7109, 7068, 2626, 6199, 2289, 3743, 7623, 9120, 282, 9068, 954, 9268, 8154, -1},
        (int[]) {5109, 4787, 5956, 2217, 4691, 8696, 6944, 1511, 6738, 8166, 9792, 740, 6687, 8034, 9364, 4766, 5074, 6483, 3583, 351, 5106, 8570, 1334, 7250, 4383, 4390, 6516, 2863, 951, 2325, 1013, 8203, 3797, 5774, 9755, 146, 7538, 6525, 9287, 9688, 8970, 656, 3923, 1997, 4732, 6121, 7644, 9063, 6677, 6145, 4477, 3391, 478, 875, 1385, 7359, 3725, 4124, 1657, 3091, 9127, 2117, 6547, 3193, 6706, 3679, 2005, 542, 9344, 6602, 7316, 9449, 8805, 987, 5351, 1408, 6705, 1295, 7649, 8062, 3764, 4133, 352, 3527, 4448, 6548, 2368, 4786, 3510, 504, 7348, 6873, 2599, 171, 9403, 6406, 8282, 1710, 648, 9511, 2327, 4537, 6462, 6542, 7362, 4434, 5689, 8821, 6757, 7363, 6461, 3134, 8683, 9430, 5319, 5174, 7338, 4598, 468, 8143, 4100, 3470, 1317, 3021, 9593, 1082, 2576, 925, 1549, 7322, 5014, 3194, 8392, 4710, 3109, 9278, 4166, 4723, 8961, 4410, 7057, 3460, 8678, 1100, 313, 1502, 5422, 9936, 9036, 8613, 106, 9895, 1546, 3548, 138, 5757, 2437, 2456, 4442, 2939, 7614, 1419, 6849, 7203, 2268, 4474, 1405, 9499, 1766, 6083, 5821, 8242, 6329, 9004, 4638, 9306, 3197, 5529, 6685, 4970, 4142, 2589, 2387, 2729, 1325, 8094, 2657, 839, 2167, 8629, 5410, 1042, 9514, 4019, 5840, 9018, 3793, 8150, 6755, 5486, 2768, 7056, 1046, 4902, 7755, 5261, 8589, 3022, 4570, 8900, 1949, 8547, 6229, 9820, 8675, 3734, 9849, 1759, 7046, 9814, 7922, 5634, 5893, 7329, 1881, 482, 9874, 4424, 9657, 9492, 3445, 3884, 7067, 3906, 8366, 9056, 4003, 6550, 2029, 2150, 9707, 5608, 9616, 5669, 3604, 9415, 1521, 5172, 3532, 8263, 451, 4194, 5603, 9878, 4167, 9654, 4701, 1286, 1843, 702, 8349, 7965, 3661, 82, 6473, 152, 6916, 6, 3677, 7042, 5810, 3774, 2476, 3598, 8434, 1565, 7957, 8221, 40, 1255, 7999, 7440, 3535, 737, 428, 8123, 6383, 9730, 7685, 1897, 6117, 6750, 9610, 4472, 4405, 9047, 8818, 2888, 2849, 3678, 7560, 4993, 1660, 2607, 7298, 1107, 9476, 4258, 149, 863, 659, 3411, 6552, 4134, 3502, 856, 715, 6206, 7351, 3397, 1118, 4555, 4309, 739, 2308, 204, 37, 9973, 5909, 1983, 3574, 2109, 4030, 4718, 735, 4065, 2951, 2375, 901, 3362, 5365, 771, 9368, 8290, 3096, 8230, 3643, 1289, 6893, 7919, 714, 1073, 3089, 6468, 4776, 2842, 9263, 4230, 3308, 216, 5046, 1481, 743, 3845, 2328, 6648, 3861, 2343, 3133, 999, 4669, 9218, 5733, 2968, 4671, 5298, 2467, 640, 1276, 8317, 1433, 4820, 9400, 4690, 9723, 2918, 3614, 4196, 6120, 1109, 6173, -1},
        (int[]) {8743, 8426, 3157, 5862, 4861, 7467, 9375, 5475, 6809, 1385, 8474, 2163, 9393, 4639, 360, 2270, 6190, 3824, 1091, 1541, 8264, 2082, 9450, 4226, 7534, 8097, 5073, 7268, 7541, 3758, 5386, 8720, 460, 8231, 8316, 4927, 2308, 1974, 4774, 9754, 2595, 4002, 3691, 8892, 8077, 1076, 4231, 6837, 629, 6748, 919, 398, 9163, 7296, 1788, 4347, 8982, 7326, 1389, 2756, 7036, 7076, 379, 1183, 9608, 5188, 7460, 3878, 9441, 2172, 2831, 4675, 5966, 5808, 9419, 1601, 2273, 5114, 1893, 475, 2668, 1410, 981, 5882, 7729, 6417, 9240, 6900, 9632, 8757, 8494, 6404, 401, 4603, 6494, 2224, 1232, 7013, 301, 9068, 3027, 9420, 2656, 130, 3384, 9006, 4093, 8979, 128, 7161, 855, 3558, 760, 8646, 8414, 1172, 4657, 7281, 3697, 5518, 6949, 7850, 1105, 5490, 7434, 2848, 6059, 8940, 6319, 2111, 9187, 4146, 6317, 1791, 9865, 2507, 7498, 7349, 5851, 6838, 4613, 7852, 5200, 6864, 9283, 4783, 1948, 4831, 2119, 6403, 4308, 3851, 2333, 3612, 6326, 3015, 9332, 8146, 1501, 2722, 1817, 9843, 7927, 5419, 5520, 9851, 4804, 4451, 8631, 580, 5602, 4238, 6009, 9069, 6507, 1697, 1613, 8185, 4971, 7435, 6218, 8732, 4965, 710, 3212, 383, 652, 3454, 5202, 1837, 593, 1277, 5499, 8295, 7718, 8163, 5207, 4561, 4366, 9663, 6692, 9652, 1662, 1506, 3123, 390, 2804, 1780, 2871, 6490, 3259, 1825, 2744, 6090, 156, 6501, 3735, 7222, 8944, 636, 5904, 1442, 8772, 6471, 3488, 5328, 3393, 9924, 566, 2323, 3224, 5238, 6466, 5749, 8020, 1807, 5271, 8616, 9932, 6263, 6851, 7044, 1718, 5218, 8225, 7295, 8043, 2829, 5884, 6020, 7216, 2557, 4747, 648, 783, 873, 6732, 5739, 2651, 609, 6779, 2876, 457, 9413, 8322, 2796, 3338, 9030, 2763, 4775, 129, 492, 6423, 2319, 6173, 8121, 9895, 3318, 1203, 4352, 4966, 6200, 5399, 9685, 8294, 7240, 2450, 7202, 9591, 8504, 7379, 9723, 2259, 5023, 4426, 8342, 5431, 7535, 3086, 7123, 8662, 85, 6066, 264, 2121, 1785, 7156, 211, 2641, 2825, 1783, 9846, 2717, 1712, 101, 3987, 4877, 7683, 5222, 6337, 2539, 2021, 6910, 9327, 3471, 7342, 9302, 6662, 7711, 2757, 2219, 5709, 8845, 5178, 7697, 769, 3658, 8617, 4012, 9988, 4204, 9064, 1314, 2655, 3805, 6762, 4742, 2485, 54, 3080, 7891, 6006, 1434, 4689, 6947, 4073, 4756, 2287, 8602, 5139, 5934, 8712, 5735, 5481, 5704, 3283, 1248, 7874, 8996, 9096, 7710, 3572, 2658, 6994, 4189, 5986, 4086, 5634, 5907, 9928, 9653, 5128, 5325, 7989, 7325, 6894, 5937, 5323, 2102, 2271, 2736, -1},
        (int[]) {1964, 7327, 6981, 3708, 190, 9644, 3872, 5023, 6626, 8605, 591, 8932, 8157, 3699, 7701, 8000, 4446, 9012, 6191, 5017, 9985, 4162, 1886, 142, 1553, 1391, 8063, 8224, 2974, 9712, 5454, 7614, 3876, 8298, 7649, 3320, 6852, 3236, 4498, 2882, 8091, 7863, 5118, 6579, 6001, 177, 1896, 1392, 6229, 7351, 858, 8627, 5169, 1562, 4532, 1183, 4795, 8491, 3132, 6182, 1443, 9262, 22, 478, 6710, 3030, 9148, 4912, 3039, 4038, 8013, 1512, 8375, 6708, 5391, 6371, 7024, 3138, 6410, 7475, 2035, 9524, 3069, 1521, 2083, 2571, 5685, 4284, 2438, 5448, 4063, 9503, 1583, 3767, 5209, 6707, 8266, 3763, 2190, 6324, 5870, 389, 7627, 3638, 3515, 8067, 6671, 8818, 4824, 9827, 5575, 402, 7878, 2857, 9062, 6292, 548, 7800, 5728, 2955, 5290, 4722, 4882, 8546, 4376, 9346, 8045, 9886, 7167, 3445, 1430, 506, 7767, 1845, 1611, 1716, 3527, 2050, 3396, 3933, 3599, 8616, 7602, 2708, 3041, 3150, 1463, 3831, 2672, 1625, 9887, 6530, 7713, 1165, 2681, 8791, 4329, 8895, 7960, 9681, 7037, 2956, 6996, 2663, 6862, 3160, 1331, 8162, 6682, 3102, 3769, 3221, 7141, 6277, 2488, 740, 7812, 3580, 1181, 1792, 2688, 1981, 6833, 8020, 4804, 5051, 1226, 5317, 3627, 8426, 9217, 6081, 4665, 5975, 3942, 7060, 2914, 1052, 1979, 1880, 9642, 3341, 1772, 5104, 4053, 4011, 4429, 2856, 2536, 2871, 4080, 525, 6825, 2989, 7744, 3598, 2606, 6851, 2748, 6135, 4220, 2509, 1764, 4479, 7476, 2619, 4748, 3760, 7525, 3289, 1125, 9051, 3583, 632, 7226, 8502, 9178, 9594, 2517, 2408, 4378, 7012, 1336, 7680, 8405, 7085, 8613, 9049, 4059, 7458, 1592, 4413, 6054, 6174, 1747, 7766, 7417, 7027, 1863, 7064, 3094, 4632, 7177, 9420, 3783, 612, 8975, 8254, 8004, 9412, 7739, 9608, 5112, 1586, 4925, 577, 289, 2479, 6567, 337, 3971, 4621, 7870, 5530, 2212, 6108, 6295, 9121, 1216, 4932, 6073, 3097, 1406, 6040, 3228, 6043, 8314, 7459, 6826, 3235, 8034, 7905, 2552, 6911, 7756, 153, 388, 145, 2921, 1027, 8720, 1810, 5100, 5512, 475, 3624, 2385, 2554, 8763, 7320, 711, 9716, 8464, 4078, 9670, 6956, 653, 7260, 891, 5254, 7487, 5623, 1675, 8193, 3559, 3714, 4023, 2668, 5749, 3788, 7677, 2664, 1609, 293, 5455, 5581, 9875, 7898, 9254, 5426, 7238, 7650, 9909, 6254, 2420, 722, 3510, 279, 2287, 5625, 7813, 8662, 273, 5482, 658, 7261, 2209, 58, 9583, 3640, 824, 6177, 4041, 4581, 3925, 710, 15, 7424, 6290, 5881, 845, 7102, 8228, 3897, 447, 6431, 2855, 2653, 1164, 739, 4645, -1},
        (int[]) {3578, 6528, 2447, 3335, 1509, 3372, 6266, 405, 6807, 8481, 3676, 7489, 9273, 6783, 7130, 6867, 1811, 7979, 2610, 5926, 327, 3939, 7160, 9667, 7900, 4792, 9804, 976, 3409, 4549, 5912, 6631, 1364, 7606, 910, 4405, 7181, 8057, 3935, 8285, 4751, 331, 5207, 3211, 8491, 8557, 2615, 7374, 6573, 8250, 4492, 4564, 9513, 5601, 2757, 9127, 2156, 7047, 5310, 6249, 1997, 6316, 5701, 9939, 2144, 4293, 742, 2555, 7178, 3025, 7920, 5141, 4994, 4045, 24, 1103, 8039, 464, 184, 9843, 5818, 6157, 1390, 3376, 690, 691, 5934, 9573, 9833, 8352, 4318, 2206, 1411, 4238, 4892, 2259, 6540, 3991, 9867, 117, 6644, 1233, 1325, 2307, 9153, 4377, 1284, 655, 110, 5862, 7808, 5501, 9436, 2188, 1935, 6505, 7367, 2216, 7000, 68, 8805, 4716, 4759, 657, 4135, 2287, 2395, 4420, 3484, 3346, 3456, 2862, 1013, 221, 3123, 3971, 7628, 4711, 4834, 9190, 8053, 6937, 7315, 9442, 1018, 4465, 2988, 7630, 5690, 9575, 6618, 7829, 216, 2210, 8266, 6717, 8340, 4710, 1079, 3304, 3358, 214, 2381, 6635, 2558, 2398, 2813, 2753, 2835, 4214, 6439, 3642, 7580, 9323, 7879, 9208, 8100, 4559, 716, 7675, 7698, 1481, 6338, 7402, 9593, 7253, 5181, 1891, 1598, 8031, 1194, 7525, 6589, 5264, 2246, 1992, 1669, 1047, 6777, 8696, 2609, 3889, 1238, 2922, 2745, 9114, 6559, 7102, 1673, 3567, 5785, 7800, 6780, 7784, 9637, 6051, 7242, 3166, 7442, 5699, 840, 1046, 4342, 9182, 9690, 3720, 5444, 8687, 5256, 442, 1370, 8913, 4459, 3133, 2875, 6569, 7087, 3791, 1131, 4658, 923, 3151, 9656, 8453, 9142, 7571, 9054, 1880, 2895, 8645, 4080, 516, 1414, 7656, 644, 4547, 3016, 4016, 2333, 6186, 9076, 7966, 8357, 4762, 1734, 6363, 259, 7782, 536, 8242, 8625, 1910, 3262, 5739, 4062, 1987, 9407, 5223, 6462, 8038, 9884, 1630, 4667, 2443, 6405, 5043, 7538, 1158, 4157, 1664, 8912, 6257, 4117, 7455, 6861, 8095, 9905, 8055, 636, 8301, 1636, 7943, 5990, 8013, 5200, 4974, 9986, 9674, 4505, 6506, 7389, 4714, 7735, 2599, 1582, 6202, 1965, 8960, 1519, 7246, 1985, 2068, 9050, 4176, 9889, 8563, 1305, 1043, 1748, 9976, 7230, 9171, 4419, 9785, 7053, 3015, 4015, 1657, 3069, 2725, 7331, 3548, 4931, 7926, 5825, 7888, 1528, 3094, 1783, 0, 4464, 647, 2159, 8801, 9649, 4098, 4678, 272, 3527, 4757, 4148, 6251, 1078, 6501, 7779, 9877, 4743, 1989, 5428, 5276, 7252, 2202, 3592, 3001, 4509, 4311, 4881, 4949, 8869, 9564, 6298, 8607, 2011, 2104, 1564, 6368, 233, 2578, 7420, 734, 9022, -1},
    };
    int n = sizeof(t) / sizeof(int*);

    Vozlisce** seznami = malloc(n * sizeof(Vozlisce*));
    long* naslovi = malloc(MAX_ST_NASLOVOV * sizeof(long));
    int stNaslovov = 0;
    for (int i = 0;  i < n;  i++) {
        seznami[i] = izdelaj(t[i], naslovi, &stNaslovov);
    }
    qsort(naslovi, stNaslovov, sizeof(long), primerjalnik);

    Vozlisce* prepleten = prepleti(seznami, n);
    if (!preveri(prepleten, naslovi, stNaslovov)) {
        printf("NAPAKA!\n");
        printf("Vsa vozlisca prepletenega seznama morajo biti kopije vozlisc originalnih seznamov.\n");
    }
    izpisi(prepleten);
    pocisti(prepleten);

    for (int i = 0;  i < n;  i++) {
        pocisti(seznami[i]);
    }
    free(seznami);
    free(naslovi);

    exit(0);
    return 0;
}
