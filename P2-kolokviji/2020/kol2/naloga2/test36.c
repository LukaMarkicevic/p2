
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
        (int[]) {9647, 7858, 9539, 5567, 6831, 4847, 6588, 2075, 6284, 3852, 4828, 1004, 488, 8421, 5685, 4272, 8461, 6036, 5518, 8778, 6738, 2425, 2109, 3405, 5106, 475, 8277, 6069, 5916, 5969, 9875, 363, 7857, 5816, 8762, 2015, 7846, 9934, 1222, 7658, 7623, 9644, 3735, 5853, 681, 6281, 2521, 1257, 6037, 6128, 1860, 8735, 7549, 611, 2305, 166, 4486, 7185, 7817, 1370, 2368, 3807, 9886, 5652, 1408, 2999, 7719, 8210, 1266, 1577, 1000, 6434, 9895, 3216, 9730, 200, 5152, 5087, 6585, 9756, 3983, 6608, 6419, 5606, 1658, 5357, 1374, 9484, 2990, 198, 7646, 7269, 8724, 7245, 7246, 1068, 2513, 9282, 530, 1734, 6638, 7195, 7192, 9218, 1113, 9412, 7381, -1},
        (int[]) {6166, 5836, 9260, 4262, 4936, 2005, 9830, 7351, 9267, 8021, 6027, 3573, 2837, 108, 6784, 5988, 7798, 8400, 5187, 7981, 4094, 8338, 1635, 9892, 990, 5812, 5820, 3211, 3109, 1420, 7517, 8080, 4477, 9619, 6817, 1236, 1922, 6316, 9798, 167, 874, 6895, 9287, 4501, 2582, 9224, 4699, 5963, 5092, 6308, 4467, 9198, 851, 8194, 500, 3173, 5607, 672, 9920, 4377, 3810, 2804, 4780, 1759, 5240, 4204, 1015, 2964, 1756, 2922, 4507, 1626, 7768, 5977, 5814, 5338, 1444, 1232, 4921, 4045, 6795, 6265, 658, 6635, 165, 8514, 6364, 5593, 4561, 847, 9005, 5025, 9356, 390, 7277, 649, 1290, 8888, 7933, 6092, 7596, 8668, 1517, 7020, 2610, 6366, 7703, 5405, 106, 938, 9278, 5522, 9579, 477, 3679, 7338, 8577, 8156, 6829, 5068, 3905, 8653, 8585, 2294, 195, 9395, 4868, 3435, 3782, 8300, 6168, 59, 4021, 5551, 1945, 7962, 3213, 4601, 1538, 1571, 5653, 5303, 160, 4286, 2032, 21, 2826, 8519, 613, 2107, 954, 11, 1480, 7491, 6413, 8212, 4955, 5234, 8107, 924, 6049, 5687, 2424, 6668, 3209, 8250, 6633, 8863, 4030, 9083, 3596, 1354, 7220, 2472, 8017, 1323, 281, 7713, 9325, 7520, 389, 1022, 3030, 2765, 8934, 1302, 9109, 426, 2199, 6761, 4180, 3678, 3214, 6826, 7529, 9079, 5186, 8042, 7735, 5059, 3102, 7723, 9576, 4258, 7844, 9085, 5949, 46, 3272, 5567, 391, 1164, 4807, 5569, 9563, 8436, 8899, 5966, 5438, 5393, 7684, 2596, 7185, 8841, 4929, 4962, 8270, 6887, 2051, 5523, 7740, 1764, 3990, 5743, 3823, 8641, 7719, 6278, 4421, 7631, 5531, 6121, 784, 3935, 6970, 4787, 9292, 7385, 7717, 610, 3638, 4672, 9620, 9631, 804, 8466, 2437, 2935, 9321, 9751, 6755, 6320, 1913, 3029, 4797, 744, 5230, 7905, 2881, 9905, 1331, 2270, 6906, 7875, 4993, 7976, 3860, 1828, 7605, 2799, 2973, 8168, 6326, 7073, 5718, 6948, 7324, 1085, 7883, 3822, 1166, 5970, 2278, 4915, 4733, 4508, 2577, 1568, 7943, 6871, 9988, 4923, 209, 95, 334, 5885, 1675, 7366, 1961, 8179, 56, 2697, 6717, 8898, 3046, 8521, 8445, 2275, 2898, 1388, 1607, 4536, 7769, 6333, 5834, 3585, 461, 9610, 6233, 6322, 9639, 4708, 8442, 1395, 969, 880, 4408, 5679, 4899, 6356, 9015, 5792, 3266, 9800, 8725, 9327, 3143, 541, 5223, 2521, 717, 6846, 989, 2616, 1376, 182, 2258, 6660, 9115, 642, 7475, 3144, 6290, 9782, 8474, 4103, 1158, 4537, 7000, 7134, 1020, 6048, 3357, 1859, 7718, 4418, 8744, 3311, 8536, 5031, 6809, 1470, 1651, 4287, 4078, 7165, 5378, 4336, 7660, 6336, 4034, 8529, 5052, 1321, 3837, 8377, 9764, 3579, 7882, 2653, 5293, 9759, 4652, 9153, 5094, 7765, 1627, 9103, 4290, 9779, 333, 9358, 9672, 3487, 7971, 5667, 3918, 4223, 762, 2795, 8309, 9850, 2217, 6865, 4423, 8967, 8102, 1893, 7269, 6658, 2450, 4832, 7203, 4271, 9238, 2317, 2937, 3423, 3388, 6620, 4661, 2124, 6876, 7076, 9505, 2597, 794, 9309, 5005, 145, 8649, 5991, 7949, 2786, 2031, 484, 2009, 2113, 8233, 2506, 1083, 4951, 6841, 8486, 8686, 6177, 3944, 5344, 2965, 1386, 9418, 2019, 7483, 7174, 7052, 7077, 3034, 6883, 5449, 9762, 4255, 3762, 3286, 7435, 2903, 2235, 3651, 20, 4706, 3205, 2552, 8927, 1028, 7568, 6652, 5906, 422, 5701, 3853, 3891, 2164, 2920, 6708, 9591, 3060, 1308, 9841, 8138, 6665, 5468, 7720, 5968, 6804, 3764, 5975, 2644, 8748, 1669, 8214, 8318, 2453, 2584, 2383, 3467, 6014, 2873, 6505, 4307, 1463, 4784, 7587, 8026, 1332, 2509, 8554, 2680, 6676, 726, 2157, 4668, 8031, 9655, 6701, 8426, 6625, 2838, 8048, 8454, 5822, 9286, 5909, 8599, 5188, 5276, 6550, 8800, 312, 6540, 240, 6267, 1361, 2128, 3665, 5839, 8883, 1401, 9999, 580, 381, 1912, 3821, 8051, 1576, 3053, 3043, 8696, 3081, 8329, 6962, 7225, 3239, 4073, 634, 5989, 1584, 6863, 9393, 9948, 7816, 4644, 7477, 6984, 1572, 9799, 3396, 5703, 8862, 7126, 8775, 5620, 6252, 260, 2524, 2923, 8385, 4324, 1809, 6667, 8303, 6548, 6719, 5462, 6637, 3872, 5713, 7004, 1268, 4017, 3025, 6368, 3805, 9065, 5047, 4400, 104, 3134, 1439, 1638, 7989, 6403, 3816, 5087, 2759, 7956, 5888, 8532, 8342, 742, 4973, 8005, 7321, 7235, 6533, 6087, 1889, 5081, 820, 4173, 9597, 1317, 2106, 8143, 2539, 7774, 7935, 123, 2108, 5260, 4098, 3290, 3535, 9258, 319, 2500, 8805, 6572, 350, 4577, 7195, 1260, 1211, 2951, 5448, 3391, 4925, 2704, 7846, 2858, 187, 5268, 2915, 8181, 2156, 6310, 9894, 5526, 7863, 4177, 7791, 4351, 5492, 2631, 4872, 1016, 5987, 4862, 8301, 9063, 5655, 1009, 769, 8917, 7474, 6306, 8128, 6935, 5578, 6341, 3830, 8144, 2084, 8290, 8572, 1490, 7518, 1134, 3161, 5470, 6013, 5104, 9150, 6375, 3182, 3813, 3966, 6423, 9289, 8046, 2861, 3111, 1459, 741, 3886, 855, 3542, 1118, 9801, 3643, 6464, 7089, 1737, 4793, 6412, 2885, 4327, 1715, 4447, 4825, 9739, 5173, 1052, 1681, 6192, 5916, 7868, 3634, 5911, 6541, 5755, 2880, 2629, 9642, 7709, 3045, 1390, 7211, 3846, 410, 5124, 478, 7509, 3865, 7672, 7320, 8030, 9913, 906, 4860, 2078, 2391, 5717, 5481, 2010, 2081, 6251, 483, 5369, 348, 3204, 5180, 4088, 3230, 4431, 8780, 8197, 3712, 470, 4419, 8907, 2224, 4972, 4309, 7510, 7548, 8282, 5630, 8779, 5899, 7462, 5177, 3505, 6446, 7500, 1640, 2253, 1418, 1325, 6518, 4387, 1534, 7678, 3227, 8575, 2209, 4805, 9038, 1881, -1},
        (int[]) {1723, 380, 2230, 7473, 3011, 1024, 3999, 6987, 8126, 5006, 127, 8872, 9492, 808, 6607, 3538, 6385, 6497, 4009, 5016, 7896, 7905, 1247, 1707, 1886, 5544, 2, 2429, 1816, 3323, 7482, 2064, 1447, 2124, 8793, 4587, 5462, 2235, 2103, 4784, 1329, 1402, 6854, 2870, 2028, 4920, 3863, 6890, 7011, 9948, 9484, 4045, 7402, 5225, 5348, 2097, 2410, 6977, 6304, 7475, 1350, 8753, 7446, 4753, 8572, 3967, 7038, 5475, 9188, 9720, 9608, 8251, 4116, 972, 1843, 3396, 6655, 1712, 5959, 2642, 7958, 5939, 4390, 9576, 7965, 5828, 2820, 3848, 8917, 8551, 1913, 6837, 3482, 675, 9066, 6670, 2582, 9736, 2614, 1408, 2433, 7086, 8077, 8056, 6571, 5982, 2792, 4096, 6056, 5895, 4960, 2660, 9478, 6046, 6616, 9371, 8907, 8752, 5666, 7651, 6431, 3162, 1299, 9923, 44, 2984, 2172, 6863, 873, -1},
        (int[]) {7260, 8813, 2732, 6543, 8811, 4953, 2852, 4964, 6834, 8884, 7452, 6074, 6741, 4089, 4454, 4231, 3628, 5159, 5364, 7847, 9659, 4518, 5290, 8952, 5124, 8584, 4644, 1822, 1354, 1363, 541, 7797, 3502, 2401, 6893, 2342, 4721, 9897, 2872, 3036, 5673, 5758, 6419, 4628, 6631, 1615, 9722, 6138, 1405, 3306, 3361, 2648, 3290, 4076, 8344, 9899, 8340, 59, 2167, 1039, 4536, 5347, 4320, 3376, 7509, 440, 3201, 7061, 2289, 3697, 2348, 7284, 4784, 1469, 418, 921, 5558, 2400, 3736, 7421, 4623, 9906, 3753, 5041, 962, 5301, 2293, 5423, 2080, 961, 5149, 6785, 8855, 6286, 1976, 9142, 4448, 7139, 3205, 4560, 5907, 2316, 3198, 5081, 8775, 1626, 7822, 3903, 4216, 73, 8316, 8946, 7209, 7310, 132, 1102, 665, 8460, 9828, 7353, 6688, 2221, 1768, 9479, 5374, 8486, 8615, 3982, 6827, 711, 5204, 3602, 2241, 6403, 4586, 7538, 3997, 5636, 1311, 3687, 3679, 1037, 8117, 6846, 6633, 5414, 4870, 8626, 5929, 9040, 5175, 6934, 3899, 4160, 4556, 9320, 1409, 8534, 2218, 2644, 508, 1479, 2922, 366, 1658, 3508, 4986, 7176, 9891, 4609, 469, 2757, 1556, 4129, 9404, 772, 720, 3665, 1696, 2474, 1407, 7375, 5495, 235, 3139, 8850, 8290, 6677, 9690, 4750, 9505, 4930, 9312, 4119, 4019, 4477, 2198, 8473, 9473, 9871, 6026, 4319, 9509, 4313, 6385, 5866, 3677, 2050, 1764, 3288, 7763, 6258, 4071, 6326, 1699, 9229, 2743, 535, 9038, 8604, 5049, 6867, 5510, 8219, 9791, 9970, 5548, 9462, 9526, 4268, 9243, 4516, 2700, 8723, 5268, 2285, 408, 3730, 3525, 5531, 3618, 5574, 7956, 8821, 644, 2253, 2609, 6761, 7703, 5443, 1588, 9319, 420, 5837, 7404, 1390, 7038, 5088, 4390, 7572, 701, 8146, 7440, 4675, 50, 8003, 5281, 4958, 100, 4382, 7978, 7073, 7888, 55, 9314, 3316, 9525, 8655, 4326, 2550, 9251, 4481, 8001, 2042, 4581, 3343, 6811, 8533, 649, 4577, 2376, 195, 6237, 8186, 6163, 2390, 8706, 7514, 6088, 582, 8670, 4012, 6500, 749, 8794, 7905, 354, 3921, 6963, 3783, 1025, 6718, 2432, 3801, 149, 336, 3914, 8830, 8856, 9382, 4860, 6715, 7857, 8480, 6770, 6104, 6331, 2103, 3422, 152, 3049, 1867, 8633, 4763, 2713, 7677, 8475, 260, 9706, 8570, 8816, 6289, 1293, 1452, 8265, 7035, 8374, 9686, 9036, 5100, 5600, 6960, 9866, 7162, 8654, 4169, 7079, 9050, 4562, 1646, 7837, 1825, 4889, 4842, 7257, 1637, 6313, 4583, 3320, 3980, 5533, 3555, 8878, 8719, 6310, 8241, 1111, 9761, 2974, 2834, 4959, 5791, 3880, 6617, 4584, 427, 1459, 8748, 384, 1513, 6799, 9035, 6705, 2340, 3764, 7573, 280, 4693, 3825, 1662, 4338, 7523, 7696, 660, 8789, 8208, 5964, 4302, 3511, 932, 1359, 7126, 4152, 7301, 2520, 5389, 1198, 5180, 6525, 4646, 5493, 8308, 9510, 9240, 7302, 9070, 8406, 1800, 8421, 9418, 1724, 4781, 2043, 9843, 6270, 3445, 3441, 8198, 6495, 3858, 2037, 601, 1073, 9516, 9720, 9332, 8817, 5806, 1587, 7500, 8444, 3296, 30, 3260, 509, 2068, 2073, 2213, 9895, 6703, 6142, 9107, 1087, 9989, 5523, 8836, 9190, 3042, 6732, 9133, 9790, 4464, 2181, 6684, 6148, 3518, 1026, 8913, 2570, 6473, 9322, 3187, 7776, 2690, 6558, 5440, 8672, 1734, 1818, 9504, 1439, 5660, 8099, 2479, 7270, 6108, 6396, 236, 2182, 5699, 966, 6733, 8535, 3587, 1361, 7463, 485, 1078, 466, 5963, 8826, 3094, -1},
        (int[]) {8471, 866, 971, 4341, 3241, 2282, 3057, 3420, 9464, 1479, 5162, 4316, 7639, 6182, 2465, 3474, 5759, 22, 8062, 4940, 1709, 5346, 6032, 4952, 8368, 178, 4550, 6590, 299, 4471, 2267, 3672, 9855, 7916, 8980, 5935, 9284, 8900, 9068, 1094, 7392, 4798, 2823, 7700, 6200, 5894, 6177, 2321, 7240, 913, 5725, 1749, 807, 9326, 5071, 4837, 3154, 5942, 3324, 7250, 8564, 1805, 8775, 9941, 9038, 5693, 9272, 3542, 8098, 7775, 8337, 5700, 6959, 7069, 8249, 5606, 5572, 9141, 958, 1265, 2403, 4254, 7575, 2760, -1},
        (int[]) {5562, 8476, 5062, 7185, 8213, 4417, 1721, 3061, 4542, 756, 7917, 5418, 1892, 5768, 8607, 4742, 2965, 3738, 2201, 9666, 6281, 6680, 9304, 128, 8140, 2434, 4785, 6941, 9288, 676, 13, 766, 7176, 4137, 6328, 1730, 7963, 3992, 1714, 2806, 4670, 6447, 318, 5894, 1384, 5770, 7383, 4521, 6397, 7985, 1066, 5018, 9459, 6581, 7657, 9807, 2930, 2856, 8631, 7914, 9959, 7949, 5505, 5169, 2031, 5537, 5004, 2267, 5992, 3440, 6204, 7279, 2845, 6042, 9409, 3777, 4851, 5527, 559, 7595, 4623, 4317, 7516, 9428, 2743, 8297, 7541, 8266, 8097, 9576, 2634, 1262, 9847, 3168, 1842, 6050, 701, 6285, 7676, 6747, 6578, 2954, 6480, 1517, 9363, 2742, 6206, 2872, 1599, 7393, 2726, 8011, 3237, 5010, 1622, 6047, 8199, 2671, 8546, 445, 5814, 826, 2403, 5221, 5593, 8928, 3687, 8093, 9233, 4301, 9860, 1927, 252, 3929, 1035, 8083, 6667, 2503, 3289, 6564, 3994, 3565, 1597, 9331, 2619, 1280, 4573, 7965, 8299, 8481, 7915, 5643, 8672, 2304, 710, 7844, 532, 9347, 99, 3119, 1501, 3995, 7637, 302, 8674, 8076, 1592, 3730, 5428, 9195, 4163, 6174, 4092, 3590, 3951, 7253, 3265, 2258, 9051, 4349, 9472, 7972, 9469, 4490, 3350, 6435, 2987, 6367, 5838, 5383, 2223, 1019, 8644, 5472, 890, 1750, 6342, 203, 900, 9643, 6321, 4881, 2317, 1566, 9294, 7223, 5207, 1320, 1226, 4369, 3071, 3928, 7390, 5482, 1846, 8710, 8009, 6876, 4270, 3446, 3238, 5917, 3853, 570, 1422, 3652, 1043, 2065, 6907, 1758, 7796, 185, 3827, 1784, 2395, 4941, 4852, 7175, 4038, 2113, 3303, 852, 9973, 7754, 4856, 8635, 7493, 6343, 1235, 8960, 4190, 1789, 188, 4265, 3039, 4784, 7437, 8839, 3279, 334, 1871, 2197, 2493, 1878, 5476, 4341, 6954, 2869, 5344, 8988, 849, 7404, 5568, 8731, 1685, 6911, 1504, 8505, 1567, 9727, 6141, 3026, 2675, 531, 326, 3331, 435, 1450, 7905, 2528, 5829, 6454, 7560, 7501, 9115, 1913, 7694, 8994, 7300, 5784, 5986, 2645, 9568, 5460, 1338, 7884, 4978, 6304, 6229, 5960, 6490, 1459, 2613, 6472, 4107, 8764, 643, 2343, 3301, 5914, 7955, 7093, 2705, 8659, 8065, 7157, 5980, 6058, 4304, 1574, 574, 1498, 8516, 1823, 8565, 9679, 2432, 2287, 4643, 8912, 2164, 9605, 2167, 9248, 579, 4156, 4123, 3207, 4570, 7423, 4933, 8060, 4373, 5157, 689, 8539, 3009, 6357, 7690, 3825, 250, 9802, 77, 9, 8705, 5219, 2348, 3351, 2017, 4605, 5342, 2429, -1},
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