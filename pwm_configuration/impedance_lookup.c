/*
 * impedance_lookup.c
 *
 *  Created on: 15.03.2021
 *      Author: dvarx
 */

#include "impedance_lookup.h"

float fres=325.0;       //resonance frequency
float maxfreq=400.0;       //maximum measured frequency
float minfreq=430.0;       //closest frequency to fres that is allowed
unsigned int num_entries=290;    // #of impedance / frequency entries

//calculates the frequency f where Z(f)=imp
float inverse_impedance(float imp){
    //if impedance requested is too high return -1.0
    if(imp>imps[num_entries-1])
        return -1.0;
    //if impedance requested too low return -2.0
    if(imp<imps[0])
        return -2.0;
    //otherwise perform binary search to find next two closest impedances
    unsigned int upper_ind=num_entries-1;
    unsigned int lower_ind=0;
    while((upper_ind-lower_ind)>1){
        unsigned int mid_ind=(upper_ind+lower_ind)/2;
        if(imp>imps[mid_ind]){
            lower_ind=mid_ind;
        }
        else
            upper_ind=mid_ind;
    }
    //interpolate frequency
    return (imp-imps[lower_ind])/(imps[upper_ind]-imps[lower_ind])*(freqs[upper_ind]-freqs[lower_ind])+freqs[lower_ind];
}


//auto generated code for frequencies
const float freqs[]={
325.700000,
328.000000,
330.300000,
332.700000,
335.000000,
337.300000,
339.700000,
342.000000,
344.300000,
346.700000,
349.000000,
351.300000,
353.700000,
356.000000,
358.300000,
360.700000,
363.000000,
365.300000,
367.700000,
370.000000,
372.300000,
374.700000,
377.000000,
379.300000,
381.700000,
384.000000,
386.300000,
388.700000,
391.000000,
393.300000,
395.700000,
398.000000,
400.300000,
402.700000,
405.000000,
407.300000,
409.700000,
412.000000,
414.300000,
416.700000,
419.000000,
421.300000,
423.700000,
426.000000,
428.300000,
430.700000,
433.000000,
435.300000,
437.700000,
440.000000,
442.300000,
444.700000,
447.000000,
449.300000,
451.700000,
454.000000,
456.300000,
458.700000,
461.000000,
463.300000,
465.700000,
468.000000,
470.300000,
472.700000,
475.000000,
477.300000,
479.700000,
482.000000,
484.300000,
486.700000,
489.000000,
491.300000,
493.700000,
496.000000,
498.300000,
500.700000,
503.000000,
505.300000,
507.700000,
510.000000,
512.300000,
514.700000,
517.000000,
519.300000,
521.700000,
524.000000,
526.300000,
528.700000,
531.000000,
533.300000,
535.700000,
538.000000,
540.300000,
542.700000,
545.000000,
547.300000,
549.700000,
552.000000,
554.300000,
556.700000,
559.000000,
561.300000,
563.700000,
566.000000,
568.300000,
570.700000,
573.000000,
575.300000,
577.700000,
580.000000,
582.300000,
584.700000,
587.000000,
589.300000,
591.700000,
594.000000,
596.300000,
598.700000,
601.000000,
603.300000,
605.700000,
608.000000,
610.300000,
612.700000,
615.000000,
617.300000,
619.700000,
622.000000,
624.300000,
626.700000,
629.000000,
631.300000,
633.700000,
636.000000,
638.300000,
640.700000,
643.000000,
645.300000,
647.700000,
650.000000,
652.300000,
654.700000,
657.000000,
659.300000,
661.700000,
664.000000,
666.300000,
668.700000,
671.000000,
673.300000,
675.700000,
678.000000,
680.300000,
682.700000,
685.000000,
687.300000,
689.700000,
692.000000,
694.300000,
696.700000,
699.000000,
701.300000,
703.700000,
706.000000,
708.300000,
710.700000,
713.000000,
715.300000,
717.700000,
720.000000,
722.300000,
724.700000,
727.000000,
729.300000,
731.700000,
734.000000,
736.300000,
738.700000,
741.000000,
743.300000,
745.700000,
748.000000,
750.300000,
752.700000,
755.000000,
757.300000,
759.700000,
762.000000,
764.300000,
766.700000,
769.000000,
771.300000,
773.700000,
776.000000,
778.300000,
780.700000,
783.000000,
785.300000,
787.700000,
790.000000,
792.300000,
794.700000,
797.000000,
799.300000,
801.700000,
804.000000,
806.300000,
808.700000,
811.000000,
813.300000,
815.700000,
818.000000,
820.300000,
822.700000,
825.000000,
827.300000,
829.700000,
832.000000,
834.300000,
836.700000,
839.000000,
841.300000,
843.700000,
846.000000,
848.300000,
850.700000,
853.000000,
855.300000,
857.700000,
860.000000,
862.300000,
864.700000,
867.000000,
869.300000,
871.700000,
874.000000,
876.300000,
878.700000,
881.000000,
883.300000,
885.700000,
888.000000,
890.300000,
892.700000,
895.000000,
897.300000,
899.700000,
902.000000,
904.300000,
906.700000,
909.000000,
911.300000,
913.700000,
916.000000,
918.300000,
920.700000,
923.000000,
925.300000,
927.700000,
930.000000,
932.300000,
934.700000,
937.000000,
939.300000,
941.700000,
944.000000,
946.300000,
948.700000,
951.000000,
953.300000,
955.700000,
958.000000,
960.300000,
962.700000,
965.000000,
967.300000,
969.700000,
972.000000,
974.300000,
976.700000,
979.000000,
981.300000,
983.700000,
986.000000,
988.300000,
990.700000,
993.000000,
995.300000,
997.700000,
1000.000000
};


const float imps[]={
2.334000,
2.406000,
2.554000,
2.774000,
3.032000,
3.327000,
3.663000,
4.001000,
4.352000,
4.737000,
5.113000,
5.485000,
5.879000,
6.256000,
6.636000,
7.035000,
7.416000,
7.796000,
8.196000,
8.575000,
8.964000,
9.361000,
9.738000,
10.120000,
10.510000,
10.880000,
11.260000,
11.650000,
12.020000,
12.380000,
12.770000,
13.130000,
13.500000,
13.890000,
14.250000,
14.610000,
14.990000,
15.350000,
15.700000,
16.070000,
16.430000,
16.780000,
17.150000,
17.510000,
17.850000,
18.220000,
18.560000,
18.910000,
19.270000,
19.610000,
19.950000,
20.310000,
20.650000,
20.990000,
21.340000,
21.680000,
22.020000,
22.370000,
22.700000,
23.030000,
23.370000,
23.700000,
24.030000,
24.370000,
24.700000,
25.030000,
25.370000,
25.690000,
26.020000,
26.350000,
26.670000,
26.990000,
27.330000,
27.640000,
27.960000,
28.290000,
28.610000,
28.930000,
29.250000,
29.570000,
29.880000,
30.200000,
30.510000,
30.820000,
31.170000,
31.470000,
31.790000,
32.100000,
32.410000,
32.720000,
33.040000,
33.340000,
33.640000,
33.960000,
34.260000,
34.560000,
34.880000,
35.180000,
35.480000,
35.800000,
36.100000,
36.390000,
36.700000,
37.000000,
37.290000,
37.600000,
37.890000,
38.190000,
38.490000,
38.790000,
39.080000,
39.390000,
39.680000,
39.970000,
40.270000,
40.560000,
40.850000,
41.150000,
41.440000,
41.730000,
42.030000,
42.320000,
42.610000,
42.900000,
43.190000,
43.470000,
43.770000,
44.050000,
44.330000,
44.630000,
44.910000,
45.200000,
45.490000,
45.770000,
46.050000,
46.350000,
46.630000,
46.900000,
47.200000,
47.480000,
47.750000,
48.040000,
48.320000,
48.600000,
48.890000,
49.170000,
49.440000,
49.730000,
50.000000,
50.280000,
50.570000,
50.840000,
51.110000,
51.400000,
51.680000,
51.950000,
52.230000,
52.510000,
52.780000,
53.060000,
53.330000,
53.600000,
53.880000,
54.150000,
54.430000,
54.700000,
54.980000,
55.250000,
55.530000,
55.800000,
56.060000,
56.340000,
56.610000,
56.880000,
57.160000,
57.420000,
57.690000,
57.970000,
58.240000,
58.500000,
58.780000,
59.040000,
59.300000,
59.580000,
59.840000,
60.110000,
60.380000,
60.650000,
60.910000,
61.190000,
61.450000,
61.710000,
61.990000,
62.250000,
62.510000,
62.780000,
63.040000,
63.300000,
63.570000,
63.840000,
64.100000,
64.370000,
64.630000,
64.890000,
65.160000,
65.420000,
65.680000,
65.950000,
66.200000,
66.470000,
66.740000,
67.000000,
67.250000,
67.520000,
67.780000,
68.030000,
68.300000,
68.560000,
68.810000,
69.080000,
69.340000,
69.600000,
69.860000,
70.120000,
70.370000,
70.640000,
70.890000,
71.150000,
71.410000,
71.670000,
71.920000,
72.190000,
72.450000,
72.700000,
72.960000,
73.220000,
73.470000,
73.730000,
73.980000,
74.240000,
74.500000,
74.750000,
75.010000,
75.270000,
75.520000,
75.780000,
76.040000,
76.290000,
76.540000,
76.800000,
77.050000,
77.300000,
77.560000,
77.810000,
78.070000,
78.330000,
78.580000,
78.830000,
79.090000,
79.340000,
79.590000,
79.850000,
80.100000,
80.340000,
80.610000,
80.860000,
81.110000,
81.370000,
81.610000,
81.860000,
82.120000,
82.370000,
82.610000,
82.870000,
83.120000,
83.370000,
83.630000,
83.880000,
84.120000,
84.380000,
84.630000,
84.870000,
85.130000,
85.380000,
85.620000,
85.880000,
86.130000,
86.380000,
86.630000,
86.880000
};
