#ifndef SIGNAL_PARAMETERS_H
#define SIGNAL_PARAMETERS_H

#define SIGNAL_CLASSES 3
#define SIGNAL_FEATURES 60
#define SIGNAL_DIMENSIONS 1
#define SIGNAL_WINDOW 10

const float SIGNAL_XBAR[SIGNAL_FEATURES] = {-3.07641414141, 6.78867424242, 6.63805555556, -5.60997474747, -29.120530303, 37.3151262626, -3.83411616162, 6.61455808081, 6.13625, -9.71189393939, -48.4443813131, 58.4361742424, -4.42684343434, 6.14579545455, 5.57348484848, -11.217209596, -60.2466035354, 72.8361868687, -4.92762626263, 5.38568181818, 4.85691919192, -12.8124747475, -67.0980681818, 82.2981060606, -5.21776515152, 4.3833459596, 4.01338383838, -12.7614772727, -70.2859469697, 85.6362878788, -5.18457070707, 3.14666666667, 2.99039141414, -9.27800505051, -64.5527272727, 79.8533712121, -4.96755050505, 1.82973484848, 2.01998737374, -6.15347222222, -49.2723232323, 64.667979798, -4.77348484848, 0.651477272727, 1.26022727273, -5.38718434343, -32.0818434343, 45.1293308081, -4.71051767677, -0.181742424242, 0.692651515152, -3.36551767677, -17.5121085859, 26.9923484848, -4.76444444444, -0.673560606061, 0.384482323232, 1.10582070707, -4.46435606061, 12.2967550505};
const float SIGNAL_SCALINGS[SIGNAL_FEATURES][SIGNAL_DIMENSIONS] = {{0.0209569937643}, {-0.0482915017821}, {0.0499583511605}, {0.00349684106967}, {-0.000610209839701}, {0.00536726359614}, {0.0418744948321}, {-0.0289200671172}, {0.07277638074}, {0.00132242024194}, {0.000295109068044}, {0.00189065038139}, {0.0402123393457}, {0.055872450014}, {0.00109197992953}, {0.00121071924334}, {0.000986470783648}, {0.000285430855638}, {0.0439240321642}, {0.110116042799}, {0.0105421504497}, {0.00089097377771}, {0.00229071733796}, {0.00185405998819}, {-0.0136943185725}, {0.208825657621}, {-0.0199576620933}, {0.000534416647334}, {0.00193777390183}, {-9.77350020626e-05}, {-0.0059723043491}, {0.174739743235}, {-0.0187493774626}, {0.00202751789196}, {0.00257419640891}, {-0.00541376597128}, {0.079429015567}, {0.179011663113}, {-0.0780320911938}, {0.0039355654567}, {0.00111903828094}, {-0.0109169598044}, {0.122247364439}, {0.242509767588}, {-0.0700038505233}, {-0.00159113187879}, {0.00337161114394}, {-0.0143263348842}, {0.0367895397084}, {0.188363408776}, {-0.0697512478427}, {-0.00654164161067}, {0.00279448979723}, {-0.010133256513}, {-0.000335933094341}, {0.715175085317}, {-0.0867458415606}, {-0.00434050338011}, {0.00586223091706}, {-0.0229066231343}};

const float SIGNAL_GNB_CLASS_PRIOR[SIGNAL_CLASSES] = {0.344696969697, 0.32196969697, 0.333333333333};
const float SIGNAL_GNB_MEANS[SIGNAL_CLASSES][SIGNAL_DIMENSIONS] = {{-4.64846217229}, {-12.2985012849}, {16.6861666693}};
const float SIGNAL_GNB_STDEVS[SIGNAL_CLASSES][SIGNAL_DIMENSIONS] = {{1.11012984867}, {0.793907346565}, {1.07381930569}};

#endif