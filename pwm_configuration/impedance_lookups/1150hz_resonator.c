/*
 * 1150hz_resonator.c
 *
 *  Created on: 12.06.2021
 *      Author: dvarx
 */

#include "1150hz_resonator.h"

const float maxfreq_cfctrl=2000.000000;
const uint32_t maxfreqmhz_cfctrl=2000000;
const float minfreq_cfctrl=1150.000000;
const uint32_t minfreqmhz_cfctrl=1150000;
unsigned int num_entries=100;

//auto generated code for frequencies
const float lookup_freqs[]={
1200.0,
1208.0,
1216.0,
1224.0,
1232.0,
1240.0,
1248.0,
1256.0,
1264.0,
1272.0,
1280.0,
1288.0,
1296.0,
1304.0,
1312.0,
1320.0,
1328.0,
1336.0,
1344.0,
1352.0,
1360.0,
1368.0,
1376.0,
1384.0,
1392.0,
1400.0,
1408.0,
1416.0,
1424.0,
1432.0,
1440.0,
1448.0,
1456.0,
1464.0,
1472.0,
1480.0,
1488.0,
1496.0,
1504.0,
1512.0,
1520.0,
1528.0,
1536.0,
1544.0,
1552.0,
1560.0,
1568.0,
1576.0,
1584.0,
1592.0,
1600.0,
1608.0,
1616.0,
1624.0,
1632.0,
1640.0,
1648.0,
1656.0,
1664.0,
1672.0,
1680.0,
1688.0,
1696.0,
1704.0,
1712.0,
1720.0,
1728.0,
1736.0,
1744.0,
1752.0,
1760.0,
1768.0,
1776.0,
1784.0,
1792.0,
1800.0,
1808.0,
1816.0,
1824.0,
1832.0,
1840.0,
1848.0,
1856.0,
1864.0,
1872.0,
1880.0,
1888.0,
1896.0,
1904.0,
1912.0,
1920.0,
1928.0,
1936.0,
1944.0,
1952.0,
1960.0,
1968.0,
1976.0,
1984.0,
1992.0};


const float lookup_currents[]={
7731.0,
6873.0,
6214.0,
5650.0,
5191.0,
4791.0,
4450.0,
4156.0,
3897.0,
3674.0,
3474.0,
3286.0,
3133.0,
2980.0,
2851.0,
2733.0,
2627.0,
2521.0,
2427.0,
2333.0,
2263.0,
2180.0,
2121.0,
2051.0,
1992.0,
1933.0,
1874.0,
1827.0,
1780.0,
1733.0,
1686.0,
1651.0,
1604.0,
1580.0,
1545.0,
1510.0,
1475.0,
1439.0,
1416.0,
1392.0,
1357.0,
1333.0,
1310.0,
1286.0,
1263.0,
1239.0,
1216.0,
1204.0,
1181.0,
1157.0,
1145.0,
1122.0,
1110.0,
1086.0,
1075.0,
1063.0,
1051.0,
1028.0,
1016.0,
1004.0,
992.0,
981.0,
969.0,
957.0,
934.0,
922.0,
922.0,
910.0,
898.0,
886.0,
875.0,
863.0,
851.0,
851.0,
839.0,
828.0,
816.0,
816.0,
804.0,
792.0,
781.0,
781.0,
769.0,
769.0,
757.0,
745.0,
745.0,
734.0,
734.0,
722.0,
722.0,
710.0,
710.0,
698.0,
687.0,
687.0,
675.0,
675.0,
675.0,
675.0};