
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
        (int[]) {1186, 8087, 597, 8393, 5118, 757, 3377, 3687, 6825, 4945, 9736, 1761, 7963, 8113, 4976, 8205, 9228, 4832, 3967, 6103, 4510, 3545, 2802, 2378, 2578, 1003, 5576, 8592, 9498, 2623, 8818, 1765, 5405, 8158, 4115, 7576, 4209, 1948, 8230, 2950, 2771, 3155, 2740, 8840, 773, 6578, 891, 4532, 8501, 7599, 620, 9291, 2683, 4371, 2598, 6523, 9218, 2658, 2589, 7590, 70, 9366, 8186, 3877, 5724, 7284, 1951, 7962, 2119, 6501, 5849, 6008, 7705, 9308, 1072, 6414, 560, 2967, 3118, 8498, 7471, 375, 706, 4251, 3885, 2277, 5242, 6926, 8680, 9101, 2966, 6109, 432, 4602, 9548, 3401, 6441, 1035, 442, 3923, 8361, 2996, 7043, 569, 1828, 3083, 1569, 7549, 3373, 4310, 2918, 9904, 7294, 2183, 586, 3352, 4530, 2053, 2611, 3639, 9209, 9980, 9298, 9730, 3841, 4430, 2223, 1625, 6344, 9963, 412, 2235, 1979, 2484, 800, 6757, 4890, 5892, 9634, 6139, 4178, 1542, 6919, 4792, 9961, 5041, 4079, 4020, 77, 4120, 9340, 1646, 551, 8521, 2916, 8148, 4032, 8781, 9752, 2384, 9487, 1018, 4290, 2086, 1767, 8823, 9211, 5557, 6731, 9290, 5082, 8930, 7830, 8783, 2692, 126, 2962, 2699, 6924, 1320, 1026, 1974, 9820, 6522, 7650, 2420, 8167, 3380, 6654, 2719, 2748, 3433, 5870, 2326, 5247, 3085, 3821, 5883, 7518, 7742, 2620, 6892, 1472, 917, 1299, 1759, 9985, 2460, 5274, 5173, 650, 4038, 6891, 8095, 3668, 4995, 90, 4955, 4033, 4657, 8923, 862, 3391, 5790, 7653, 313, 1931, 9216, 2612, 1755, 5142, 1306, 6590, 7657, 8216, 1344, 3972, 5804, 1265, 8853, 6953, 1427, 8875, 1167, 6242, 4536, 1487, 3714, 8492, 8289, 6324, 149, 4047, 4834, 4638, 2072, 723, 9428, 8905, 4904, 5680, 6659, 8794, 7878, 3835, 3713, 4646, 7606, 5453, 3855, 8155, 2213, 8529, 4422, 3263, 6496, 8959, 1083, 8, 5811, 1079, 9124, 1807, 2657, 8439, 2866, 4745, 4674, 6597, 2234, 7218, 3538, 9719, 438, 2565, 7282, 3997, 5607, 1645, 7799, 9067, 1384, -1},
        (int[]) {8558, 8501, 1538, 1553, 2373, 7421, 3913, 9913, 4503, 3985, 7333, 4862, 2913, 1532, 442, 427, 4505, 4957, 1303, 8209, 7453, 7773, 9004, 6759, 5329, 4134, 5342, 5015, 6184, 4245, 9866, 6624, 4388, 2861, 2315, 518, 4083, 1920, 7698, 5146, 2076, 2840, 3513, 5874, 2575, 2764, 6510, 1499, 6665, 5628, 8072, 3263, 9026, 8274, 9897, 8547, 1836, 5648, 3928, 4739, 4687, 5082, 7404, 817, 4265, 2187, 5610, 1928, 9149, 5165, 1186, 6992, 3655, 8331, 2397, 872, 2360, 1813, 7502, 9692, 4682, 7455, 8519, 820, 1620, 7941, 595, 9951, 7036, 7514, 7675, 7610, 7169, 5068, 7739, 6043, 897, 6121, 4086, 9598, 3335, 2469, 8442, 8581, 9063, 8833, 5358, 8449, 8358, 9039, 8225, 8941, 5018, 4930, 819, 6232, 6382, 5356, 9195, 7203, 3870, 5764, 5463, 1570, 9284, 6647, 2351, 7118, 6169, 8683, 2817, 6507, 8362, 2354, 8986, 7394, 768, 7089, 1451, 4434, 1216, 2151, 6809, 4081, 6847, 6592, 9141, 8637, 5327, 1544, 8995, 5642, 6700, 8622, 3314, 8644, 2666, 6181, 1685, 6173, 8602, 4844, 4, 5842, 7976, 3817, 1634, 5309, 7799, 2925, 5509, 6646, 4267, 2641, 472, 5884, 6086, 1000, 5972, 2800, 9708, 6, 7534, 1886, 1212, 8509, 8877, 4229, 8574, 9524, 5725, 7496, 3053, 5067, 8123, 2838, 1016, 2075, 7087, 2184, 1832, 6814, 2690, 1473, 4923, 8462, 3753, 8661, 7601, 318, 7504, 3266, 5180, 5271, 528, 7747, 372, 6101, 3003, 1342, 2204, 5443, 176, 610, 8940, 3712, 1479, 650, 5492, 1477, 9649, 5472, 9920, 9237, 3857, 2642, 4180, 2611, 3160, 2272, 9889, 1454, 3158, 7254, 3363, 7505, 312, 7302, 4865, 5781, 1595, 2455, 714, 7684, 16, 4773, 9557, 3754, 3046, 9043, 3982, 8733, 685, 4506, 2430, 7645, 291, 8838, 3312, 2801, 6618, 1023, 2195, 1774, 1175, 7255, 6817, 3247, 6502, 2625, 4170, 782, 5261, 6262, 3338, 9117, 9888, 7100, 8791, 4741, 6753, 6108, 1689, 4824, 3403, 4657, 1745, 908, 7907, 5111, 2591, 7542, -1},
        (int[]) {6280, 7585, 6717, 7742, 7419, 3806, 1650, 5004, 9531, 6052, 2944, 2646, 8728, 7784, 9169, 9499, 2973, 8517, 2141, 1488, 1599, 2698, 9917, 7338, 6813, 2722, 5965, 7958, 9436, 6964, 2061, 1172, 9253, 1691, 2955, 400, 7373, 9315, 1109, 621, 7873, 9045, 2647, 5638, 362, 1354, 5884, 3643, 5763, 6422, 6208, 3238, 6477, 5966, 5070, 3993, 4543, 5333, 2427, 165, 7346, 9972, 1570, 7358, 8821, 5469, 4998, 1895, 7975, 9887, 8583, 1823, 9977, 1394, 1164, 9053, 9588, 7148, 5160, 3138, 9677, 1294, 7476, 6076, 8393, 3388, 816, 3949, 2991, 2886, 1726, 8384, 5826, 1930, 5873, 2587, 3150, 5278, 8172, 8162, 2102, 7923, 9668, 7442, 2807, 1859, 1298, 1417, 4399, 944, 2090, 6877, 2810, 8390, 7777, 4814, 1445, 2642, 5393, 3831, 5241, 323, 8294, 4197, 3952, 6391, 9809, 9487, 6960, 948, 2923, 4827, 6287, 8430, 4461, 1489, 257, 8838, 8266, 6045, 9066, 1060, 2098, 5864, 8935, 9076, 7061, 6323, 9851, 6169, 7332, 8899, 219, 5379, 4038, 8497, 1167, 6962, 8934, 1839, 3871, 4140, 9781, 3145, 5920, 9827, 6762, 646, 8775, 3898, 7870, 2177, 5800, 4236, 5075, 7386, 9693, 3439, 1738, 5300, 3626, 1803, 7971, 6619, 4369, 7275, 2488, 2834, 85, 3359, 5359, 7864, 2351, 4194, 9958, 6310, 2825, 2860, 4657, 2080, 7046, 2436, 4969, 7657, 4649, 5947, 966, 271, 5696, 3432, 8419, 9217, 9403, 2907, 4542, 3292, 7374, 4101, 8476, 4838, 6111, 6950, 5456, 9084, 5720, 1103, 3033, 2013, 5599, 294, 6407, 4875, 8199, 41, 3580, 8440, 6043, 6384, 3107, 4713, 3592, 3835, 9529, 2773, 2256, 4026, 3720, 2048, 5739, 4950, 9127, 587, 9812, 6378, 7818, 8011, 3031, 1680, 9644, 4078, 3469, 4747, 5373, 6282, 6691, 9461, 2957, 8089, 1408, 19, 968, 3171, 4259, 9520, 8184, 3067, 164, 7852, 5736, 3967, 755, 5639, 8918, 7079, 1381, 627, 6382, 5365, 8840, 1996, 7180, 5187, 3492, 2359, 8988, 2692, 8033, 3940, 6620, 9850, 2348, 2366, -1},
        (int[]) {7460, 5650, 7015, 604, 9145, 1085, 7354, 5558, 8552, 2231, 8714, 9876, 5015, 8509, 8792, 5205, 7140, 5050, 9026, 4170, 32, 2450, 6623, 2316, 9072, 4800, 9233, 6438, 2325, 6272, 2879, 6212, 8604, 2719, 5038, 6079, 4784, 2606, 2234, 7543, 2643, 6096, 7993, 8443, 2284, 1120, 3290, 799, 9461, 823, 9826, 7877, 2806, 5423, 8574, 9228, 3380, 4216, 7922, 4354, 4484, 7967, 1836, 797, 5920, 1252, 444, 2802, 5042, 6576, 9666, 7810, 7317, 9816, 7485, 8858, 1611, 1878, 2439, 1340, 5106, 7627, 756, 895, 1080, 3383, 2372, 1224, 6621, 3945, 6643, 7837, 6098, 1532, 9457, 5655, 6945, 4469, 8888, 2649, 1844, 2512, 1734, 6187, 8067, 550, 7316, 9680, 5474, 6915, 8599, 9050, 5529, 8013, 4976, 9897, 4130, 2038, 2524, 9102, 8536, 78, 8944, 9783, 1576, 4695, 4927, 8220, 4726, 7715, 2035, 4978, 272, 2807, 7568, 8353, 6944, 3263, 7985, 6930, 4863, 7825, 5928, 92, 2610, 5271, 372, 3766, 4347, 7693, 8451, 2044, 5694, 6448, 4754, 2047, 5795, 3733, 7318, 4078, 944, 9, 7308, 6701, 8986, 2159, 3077, 8245, 9896, 9537, 8167, 199, 787, 3444, 3970, 4647, 4983, 8157, 5220, 3449, 1281, 214, 8667, 5344, 5800, 2907, 1915, 4148, 6801, 3189, 5381, 4019, 1288, 3958, 1934, 9831, 2344, 7778, 2737, 321, 1693, 5878, 5677, 7034, 9811, 505, 1670, 6204, 9820, 4337, 629, 7176, 4682, 1977, 1152, 1912, 8581, 381, 8253, 5288, 52, 8681, 9196, 4090, 5446, 8732, 8468, 151, 3280, 7745, 8495, 1061, 8057, 4361, 8856, 9516, 7032, 2970, 9244, 2023, 1412, 3697, 9952, 2440, 9210, 2097, 9212, 3268, 2241, 5228, 961, 9773, 6980, 9316, 207, 7997, 6517, 9308, 2059, 9967, 1738, 5823, 7803, 3890, 755, 3767, 9444, 9181, 2438, 2280, 3603, 9005, 6653, 5388, 204, 5426, 9498, 5380, 8484, 2654, 3978, 1564, 5891, 1886, 7559, 680, 7043, 5780, 288, 8974, 5590, 7682, 2290, 2177, 8973, 9596, 5935, 9623, 7802, 9452, 8083, 4973, -1},
        (int[]) {7375, 2584, 104, 4966, 422, 4042, 6558, 2957, 5640, 1109, 2794, 7260, 4412, 2229, 7815, 7048, 7183, 8546, 5245, 8119, 9350, 7472, 2977, 8071, 8453, 5294, 3807, 4341, 5211, 3510, 4470, 6816, 2170, 967, 7256, 1901, 4002, 9599, 498, 2021, 4723, 7104, 2468, 8102, 3699, 3467, 4376, 3537, 1885, 8791, 7588, 5992, 2222, 4905, 3825, 5316, 6385, 3931, 7828, 8917, 5668, 8688, 4169, 9668, 7316, 2146, 8797, 529, 3622, 1133, 8452, 9135, 3007, 1634, 6335, 9340, 5205, 5334, 2561, 3567, 9695, 4814, 9865, 768, 238, 3806, 3432, 666, 6356, 4240, 5118, 4303, 9635, 1113, 6709, 3599, 4456, 4387, 4155, 160, 5708, 8792, 8287, 2641, 7617, 3108, 7513, 8462, 241, 3485, 9293, 6124, 9443, 507, 2429, 425, 5484, 4600, 8919, 6346, 9401, 3416, 2653, 1861, 2101, 3345, 8780, 4218, 7822, 6563, 9486, 171, 426, 5514, 3680, 2725, 6026, 7943, 8013, 2228, 2927, 3229, 6080, 536, 2995, 9112, 9250, 8948, 6402, 1749, 526, 1696, 2194, 8818, 2907, 1702, 9315, 9051, 6605, 7614, 8250, 8715, 4924, 5880, 570, 7143, 5247, 7042, 5644, 2563, 874, 4931, 4858, 7152, 9101, 7663, 1983, 4508, 3223, 9653, 2088, 8893, 6922, 9607, 7748, 9969, 4202, 2480, 7618, 7516, 4314, 3179, 92, 6224, 2350, 8900, 7867, 1020, 9613, 4482, 4877, 4071, 2277, 4950, 4368, 3653, 5895, 8606, 421, 1763, 1902, 2738, 2801, 1447, 6716, 5814, 8212, 1698, 2388, 8513, 3540, 4349, 4726, 3033, 7443, 3155, 8128, 5022, 7502, 6217, 5189, 5518, 8350, 6597, 4538, 7812, 5691, 2409, 5377, 5547, 7909, 5293, 1952, 1993, 8827, 6140, 6892, 8781, 9349, 8324, 7005, 5633, 5364, 9183, 7269, 8140, 8109, 9379, 355, 5007, 3018, 6893, 9023, 524, 9327, 7858, 7464, 1250, 4281, 39, 9824, 329, 7420, 2684, 4812, 2737, 1783, 7369, 9739, 4590, 782, 7547, 7461, 7333, 343, 1245, 9123, 2266, 1300, 8248, 3972, 9642, 1058, 3794, 4957, 1707, 137, 6465, 4014, 2037, 7128, 5559, -1},
        (int[]) {6236, 5301, 3869, 3898, 5538, 1938, 5706, 5003, 1673, 9222, 2348, 9256, 3231, 5867, 4470, 3348, 5923, 8171, 9691, 4049, 9572, 8911, 2025, 9973, 2222, 9115, 2690, 7436, 8339, 4737, 7189, 7856, 4138, 6661, 1262, 9078, 9968, 8368, 6081, 3949, 6263, 4172, 5030, 9646, 3643, 8106, 3049, 7770, 1578, 3843, 4219, 9148, 8281, 9575, 5856, 364, 1906, 6001, 2022, 4910, 5926, 9283, 4790, 5238, 1393, 2857, 7954, 925, 4998, 9500, 9693, 2930, 9159, 5480, 8596, 4092, 2460, 2379, 4422, 824, 3995, 6838, 3467, 2785, 1424, 1161, 6048, 5593, 5469, 581, 7973, 2477, 6954, 3829, 9642, 8206, 2516, 409, 1104, 8600, 6535, 177, 3502, 5916, 8645, 6714, 5395, 2894, 2522, 3880, 3368, 7082, 8053, 5938, 5598, 2784, 7754, 3982, 5203, 4051, 705, 1014, 2352, 983, 8566, 2958, 4848, 8235, 8544, 4699, 2778, 312, 5017, 6579, 6455, 9170, 1774, 828, 2959, 1997, 4845, 6829, 4596, 7095, 9395, 4025, 5836, 9704, 4919, 1757, 9665, 7916, 6421, 5610, 6137, 819, 8060, 2809, 5488, 1352, 2415, 7122, 7333, 7187, 1326, 6274, 6636, 2788, 3148, 2725, 6682, 2482, 1645, 8728, 5211, 9999, 9710, 23, 6578, 8854, 3146, 8351, 6555, 6018, 4248, 9880, 7256, 5633, 1132, 7939, 4398, 7723, 5785, 3873, 9087, 3996, 5424, 1607, 6255, 4212, 1257, 2934, 9023, 9528, 459, 4793, 4081, 3451, 1933, 9, 5195, 8018, 5164, 650, 3132, 1572, 5367, 3624, 5756, 8554, 7017, 726, 3908, 1625, 404, 922, 620, 8127, 7349, 5353, 8046, 8111, 3175, 3959, 1653, 7952, 8326, 3484, 5661, 2988, 3588, 4454, 9429, 1395, 3203, 6352, 8277, 6816, 1314, 9541, 2962, 5840, 4643, 7019, 1844, 6699, 5430, 2799, 9343, 5981, 9819, 2814, 4902, 7377, 7215, 1849, 7937, 5542, 2303, 6085, 8393, 8773, 3584, 2553, 4060, 6660, 8775, 2174, 1362, 8091, 8154, 5437, 5759, 1750, 6632, 183, 3676, 4664, 8110, 9468, 3696, 6590, 5290, 7174, 5806, 4799, 1339, 7574, 482, 2090, 9610, 3778, -1},
        (int[]) {7257, 4193, 8084, 3195, 4798, 1113, 3072, 1615, 8040, 4119, 297, 3882, 3927, 6022, 8489, 6538, 7231, 6199, 5382, 4098, 7260, 4318, 6099, 4469, 8575, 7893, 4875, 9766, 6489, 2553, 7633, 4450, 2945, 780, 1455, 2702, 5640, 9605, 9058, 3641, 5659, 8367, 4560, 6557, 1002, 5598, 9935, 6258, 3535, 4350, 9085, 2842, 2464, 1252, 1902, 6167, 4319, 903, 3273, 356, 5650, 5789, 541, 2866, 1845, 7831, 4957, 7432, 7845, 6964, 8511, 9098, 6501, 1694, 2514, 5457, 3923, 9837, 8154, 8679, 2631, 3217, 4823, 4230, 754, 7131, 4031, 9009, 4103, 1905, 4756, 8677, 9273, 3388, 1948, 6190, 2861, 1597, 3165, 9860, 9933, 4606, 5022, 980, 5967, 9191, 7458, 8480, 9192, 805, 8013, 6216, 6149, 9412, 1300, 3361, 7761, 7666, 8133, 3584, 3496, 2663, 3311, 1581, 4871, 256, 7960, 6403, 6105, 4089, 175, 7061, 3892, 6949, 5886, 3026, 9712, 9407, 2242, 8388, 7852, 1425, 2575, 9593, 7991, 5907, 3405, 1206, 5242, 7335, 3477, 9140, 8847, 4802, 8046, 9039, 7875, 1782, 3916, 16, 9625, 2109, 4170, 2327, 5143, 763, 4274, 4627, 6252, 7922, 5724, 4186, 4787, 6210, 9795, 309, 5447, 8606, 3956, 4034, 6867, 3370, 2873, 7133, 9850, 9730, 2660, 2482, 1051, 1900, 7890, 6496, 7569, 443, 7918, 7197, 7695, 2520, 2764, 3625, 8223, 3706, 3891, 7780, 5725, 1095, 8327, 7057, 105, 321, 4914, 3707, 2003, 2994, 4808, 4288, 1236, 3272, 2541, 7170, 8620, 5300, 91, 3278, 2093, 4803, 3483, 7607, 6613, 4353, 8094, 1987, 7206, 4576, 8118, 3006, 2479, 853, 9231, 3363, 9887, 8155, 9682, 6759, 2561, 8744, 7779, 1186, 8313, 3865, 9676, 2895, 8834, 3063, 9926, 3744, 8363, 4200, 6033, 7839, 2540, 3815, 7140, 9512, 7684, 2053, 8865, 7248, 3220, 3053, 4959, 5563, 5797, 3172, 7768, 6712, 1644, 5399, 7763, 5578, 3753, 7501, 8785, 5643, 7185, 9217, 4332, 4351, 4799, 4093, 194, 1734, 5747, 5811, 2794, 7065, 5319, 5669, 2679, 6705, 2231, 8804, -1},
        (int[]) {945, 8057, 6195, 8853, 363, 6878, 9914, 4610, 6140, 4320, 3270, 1413, 2324, 179, 1912, 1717, 963, 4749, 2844, 7237, 9175, 2011, 1377, 3595, 5170, 8397, 7084, 6293, 5191, 6805, 4721, 6658, 2181, 1972, 9961, 6731, 7666, 8265, 1157, 1806, 3190, 9656, 8705, 6681, 7220, 3681, 6761, 2311, 1164, 2623, 5793, 3184, 7499, 2411, 642, 8239, 5027, 6392, 8407, 6517, 3485, 9633, 8062, 6093, 4137, 1153, 3839, 210, 1481, 1995, 4646, 5283, 5974, 4880, 7136, 2885, 8369, 2824, 1637, 9133, 9117, 1514, 9526, 499, 2416, 2233, 2429, 3685, 7184, 6230, 1048, 8652, 4931, 5229, 7051, 6653, 3884, 1593, 3616, 7028, 2864, 2976, 2161, 1471, 6568, 4559, 5324, 634, 1755, 5269, 5589, 4502, 8188, 2666, 5926, 5487, 7715, 2981, 1846, 6091, 7644, 1417, 1767, 3299, 6162, 8193, 8321, 3250, 9757, 5418, 8340, 5579, 3450, 8919, 275, 6359, 2728, 457, 3348, 5389, 2275, 7859, 6301, 6203, 7980, 3191, 771, 3838, 2918, 7320, 9703, 4601, 2212, 832, 6532, 6648, 2559, 2928, 7104, 1899, 380, 4662, 4183, 2049, 951, 6227, 7738, 7332, 8378, 3233, 6452, 6865, 9842, 4303, 7304, 1079, 8354, 7975, 9564, 9020, 2921, 328, 557, 3667, 5970, 9130, 6651, 7463, 2092, 6370, 4569, 5008, 262, 9733, 3751, 1662, 1372, 3479, 8523, 3767, 5678, 682, 495, 3395, 8736, 5715, 7409, 7327, 226, 2051, 7472, 3612, 4219, 7543, 1217, 1487, 5768, 5714, 1830, 1969, 5253, 1915, 6317, 2250, 279, 2665, 7508, 6894, 3160, 7483, 1374, 4573, 2515, 2683, 5596, 7243, 1155, 8750, 2245, 2543, 6410, 6746, 7240, 1661, 8740, 511, 7509, 3064, 9244, 203, 9587, 3407, 9737, 6643, 7307, 2220, 5758, 7383, 3310, 257, 6287, 4778, 1479, 2314, 6448, 1292, 487, 4036, 7261, 49, 959, 4091, 9940, 5850, 8042, 660, 913, 4182, 7295, 558, 7524, 7469, 1828, 1083, 9416, 9370, 6771, 3761, 9093, 5757, 6394, 9825, 2155, 36, 1563, 8053, 312, 6261, 8563, 8700, 3464, 8573, -1},
        (int[]) {9338, 5810, 5526, 377, 8027, 367, 1512, 2779, 5541, 3332, 4271, 3126, 1898, 3249, 9644, 9900, 7591, 3990, 9664, 4067, 641, 6507, 853, 3425, 7544, 4886, 130, 4768, 8839, 9558, 6347, 7708, 8, 3934, 8231, 2691, 3066, 5736, 2618, 4444, 3030, 2837, 5727, 4294, 6554, 8672, 1627, 7530, 4869, 1783, 3270, 3224, 6785, 1574, 4545, 8458, 4121, 7796, 8047, 9227, 8811, 2899, 1585, 9665, 6682, 1239, 3660, 2822, 7330, 1429, 5257, 2906, 6799, 1206, 3940, 3034, 524, 6361, 8034, 1145, 8120, 8573, 6284, 9034, 9355, 9295, 847, 863, 3345, 9989, 4336, 3915, 1573, 8077, 2832, 3973, 2740, 2466, 1069, 3463, 4376, 8965, 6093, 382, 8372, 1071, 2619, 3682, 4246, 1733, 1171, 7069, 1998, 4421, 8996, 7377, 5158, 2255, 998, 1242, 7793, 3272, 8863, 907, 7155, 5695, 934, 4889, 4472, 1104, 4977, 4216, 7529, 4375, 2170, 7545, 3032, 7759, 5802, 6282, 7369, 6463, 9971, 896, 368, 4350, 4332, 11, 6672, 1652, 9389, 7583, 154, 9088, 1127, 3774, 8623, 837, 2628, 4095, 9241, 9826, 4877, 9945, 77, 5970, 8269, 6705, 1283, 4177, 4082, 7220, 4054, 1646, 192, 6862, 1252, 5424, 1390, 601, 1693, 6240, 9744, 4318, 6558, 9712, 5528, 6170, 8640, 9755, 8683, 1087, 5630, 9906, 4559, 1480, 7074, 5603, 296, 146, 7690, 8678, 8602, 824, 8855, 9554, 3178, 2971, 7967, 683, 7180, 9361, 8581, 6701, 3686, 8480, 4069, 2905, 6188, 8454, 6082, 1135, 8493, 9327, 490, 9233, 581, 6853, 4025, 6916, 1860, 900, 7660, 4576, 623, 5187, 6331, 9435, 4739, 1554, 2138, 332, 9486, 9675, 2643, 1255, 5108, 9162, 9886, 3535, 8587, 4663, 1430, 7448, 9915, 5948, 2392, 3884, 9274, 5378, 5644, 4791, 9427, 5899, 3532, 495, 6326, 4182, 9704, 8747, 8513, 6036, 8386, 8781, 8242, 3043, 4371, 3526, 5324, 8989, 8658, 2772, 2983, 13, 1044, 3571, 4473, 9573, 8325, 3465, 6531, 6307, 8405, 8334, 9314, 5697, 4752, 6557, 1093, 2442, 5185, 6677, -1},
        (int[]) {2667, 2769, 9827, 9338, 9894, 1566, 9713, 2281, 1668, 9345, 567, 5030, 118, 4157, 6120, 5716, 8047, 2456, 4209, 3134, 3873, 6378, 7301, 5065, 5388, 9737, 2520, 2689, 2672, 9665, 6583, 1522, 9580, 2219, 1634, 6698, 628, 7716, 5755, 3974, 2382, 8789, 6950, 1840, 1480, 7485, 110, 2264, 9646, 6250, 908, 8318, 7964, 9135, 2678, 672, 3355, 9100, 8892, 1728, 272, 447, 57, 6956, 1136, 1754, 9516, 8551, 8332, 5979, 8127, 3083, 2250, 4222, 1472, 7353, 555, 3356, 9400, 9859, 1343, 3897, 1010, 6540, 8687, 61, 5910, 219, 3856, 6754, 7969, 2665, 4768, 7369, 1609, 940, 7884, 8813, 3220, 8259, 5270, 7935, 6247, 5435, 1187, 0, 7096, 73, 2967, 4659, 6484, 6799, 8731, 5472, 680, 1715, 7486, 1626, 6446, 2230, 7148, 6007, 6422, 3280, 270, 34, 6407, 6459, 1152, 551, 7739, 2726, 8311, 543, 5531, 3668, 3858, 9784, 7052, 9320, 5738, 2226, 2858, 5774, 4624, 6713, 4233, 689, 7114, 9980, 3523, 1958, 9158, 2480, 8901, 5689, 1523, 3763, 5512, 1605, 7633, 2592, 5654, 4191, 7245, 9635, 3576, 3808, 7121, 1927, 8592, 524, 4851, 906, 5502, 4075, 4140, 7586, 4510, 5129, 3250, 4786, 4780, 7677, 2745, 280, 8251, 6639, 4565, 902, 6839, 9302, 6049, 7124, 736, 9849, 9475, 2210, 4847, 6063, 79, 9867, 9447, 1820, 8840, 515, 7575, 1389, 391, 9211, 8582, 6768, 2540, 7329, 8882, 6059, 5712, 9096, 5720, 7010, 4265, 5312, 1791, 262, 6314, 6156, 7429, 5834, 1423, 7116, 249, 62, 2867, 896, 7819, 134, 9127, 5234, 3533, 4924, 9926, 3332, 1032, 4197, 9485, 3598, 529, 9318, 8698, 9555, 7164, 8954, 1722, 6729, 2804, 9332, 8575, 7117, 993, 9247, 4618, 5732, 4029, 4018, 9971, 3837, 33, 2636, 7625, 1419, 7448, 3314, 2196, 8897, 9668, 9870, 1564, 2653, 2886, 8135, 1204, 3135, 7443, 7084, 1750, 655, 1090, 9151, 4658, 4225, 8514, 433, 14, 2361, 2333, 5814, 2691, 4217, 7473, 6577, 617, 9291, -1},
        (int[]) {6871, 2038, 9074, 7734, 9362, 1305, 37, 4080, 7486, 4619, 2979, 6045, 9483, 417, 3724, 8601, 7189, 3342, 6138, 6543, 6501, 583, 7496, 4779, 3704, 8116, 7426, 4563, 7923, 4384, 3510, 3749, 8270, 3205, 8923, 2667, 1865, 408, 982, 2408, 3818, 179, 2975, 3566, 5243, 7719, 5849, 3542, 2802, 1373, 5501, 6633, 1057, 9724, 7989, 3258, 6351, 5878, 9256, 3148, 7314, 3584, 4676, 7444, 5134, 8610, 7315, 352, 3828, 7238, 4648, 259, 1736, 2920, 1705, 6758, 108, 6297, 9036, 2163, 8326, 9957, 5235, 6706, 1006, 257, 8263, 8629, 8020, 7558, 7299, 2516, 7457, 2451, 8620, 6094, 1350, 6237, 7072, 6695, 1983, 397, 9849, 5576, 3052, 6740, 4115, 959, 6629, 3636, 5110, 2623, 3119, 3988, 7416, 888, 7661, 5411, 5577, 4334, 7461, 4096, 9682, 4592, 8303, 9261, 5015, 4375, 3392, 4980, 8282, 7803, 8984, 7548, 5376, 9336, 2566, 1154, 3807, 776, 7399, 881, 128, 6533, 1568, 3849, 797, 708, 1458, 5084, 9981, 1497, 5318, 4032, 9363, 176, 6905, 5852, 5098, 7168, 5350, 4265, 3944, 4749, 3623, 9169, 2784, 4071, 7027, 8204, 5830, 1565, 2800, 5898, 6799, 721, 5648, 1498, 2730, 803, 4789, 8956, 3875, 9806, 4260, 2507, 2359, 7753, 6577, 2694, 3098, 5752, 1170, 9287, 3975, 9308, 8055, 6992, 8525, 329, 7474, 7222, 5547, 6703, 2227, 3734, 4408, 8854, 163, 8587, 6621, 5934, 3213, 5174, 3557, 6841, 8427, 729, 174, 7578, 933, 3176, 9657, 4794, 8434, 8449, 5538, 3282, 7537, 1906, 5137, 5931, 5800, 6693, 6663, 5720, 3675, 620, 6173, 2186, 5684, 7405, 5265, 4843, 8142, 9448, 8362, 8038, 1677, 3903, 7827, 2832, 6388, 1466, 8619, 5775, 4481, 2165, 3046, 8223, 2236, 2047, 7750, 6025, 1992, 9845, 2415, 5253, 8879, 7755, 9283, 4981, 8524, 3199, 4445, 4547, 1276, 2222, 1537, 642, 7924, 6939, 7707, 3415, 5915, 8158, 3211, 7166, 6495, 1125, 7559, 9187, 3352, 9101, 1775, 2397, 507, 4623, 8353, 5122, 4050, 2601, -1},
        (int[]) {2619, 3208, 9713, 4982, 6112, 6993, 6108, 1978, 4504, 333, 9215, 4273, 5649, 6752, 7458, 7937, 7768, 2744, 5080, 7684, 4745, 9939, 1703, 3096, 5379, 1135, 7818, 3056, 4117, 7091, 7589, 8017, 3719, 8160, 956, 7197, 9513, 7743, 89, 974, 711, 2145, 9686, 2109, 2684, 5860, 5066, 8272, 9804, 4255, 2927, 1354, 417, 108, 8085, 8141, 2416, 6278, 2858, 3368, 2146, 6420, 3170, 1130, 9738, 3768, 4030, 7245, 7093, 3021, 7320, 3725, 7038, 4201, 5453, 8265, 6276, 281, 8216, 4197, 6370, 4544, 4572, 8229, 2994, 2780, 8249, 5467, 9839, 3363, 6607, 4349, 1670, 626, 4976, 6009, 3913, 4942, 5319, 2997, 889, 4595, 4047, 838, 2584, 7237, 8196, 8836, 5923, 8053, 6066, 3775, 9404, 3001, 9425, 8798, 5255, 3618, 4227, 7789, 8456, 1543, 1234, 1179, 9074, 6917, 1722, 7916, 6509, 6546, 2633, 6876, 9783, 9101, 6615, 5919, 707, 9302, 3812, 1905, 1916, 366, 5232, 3374, 7643, 6814, 3939, 2878, 7709, 6560, 5460, 4574, 8458, 7652, 7288, 3367, 220, 4914, 623, 4799, 5578, 2099, 3722, 6703, 2776, 1875, 9523, 6541, 938, 2587, 3963, 985, 1632, 1419, 7329, 185, 5371, 5977, 40, 9654, 2211, 2470, 5204, 9519, 4387, 3919, 2048, 6626, 1081, 7944, 7048, 148, 8584, 2240, 6691, 4203, 7145, 7, 2393, 2004, 2142, 2176, 653, 8008, 9095, 4160, 4193, 5030, 302, 8501, 9293, 9540, 1190, 8595, 1721, 5332, 2987, 3605, 2624, 8018, 4056, 3309, 4797, 3000, 1465, 3879, 4132, 8786, 110, 1834, 453, 1764, 1950, 5759, 8758, 9489, 501, 7987, 8543, 2357, 5359, 4320, 3521, 4126, 6374, 5324, 6693, 2403, 2250, 5016, 656, 3073, 4639, 3393, 4645, 6779, 2622, 8360, 2667, 1383, 7670, 7676, 8969, 3891, 1660, 4949, 593, 3965, 6730, 7563, 1322, 6129, 276, 370, 7479, 8493, 2526, 8900, 465, 6291, 3040, 5788, 6994, 5198, 7784, 8984, 2302, 2456, 6938, 6777, 6915, 1427, 8032, 4455, 4379, 2723, 9479, 6549, 176, 234, 3511, 9204, -1},
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