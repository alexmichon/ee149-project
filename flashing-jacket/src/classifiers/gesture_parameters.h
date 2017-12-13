#ifndef GESTURE_PARAMETERS_H
#define GESTURE_PARAMETERS_H

#define GESTURE_CLASSES 2
#define GESTURE_FEATURES 60
#define GESTURE_DIMENSIONS 1
#define GESTURE_WINDOW 10

const float GESTURE_XBAR[GESTURE_FEATURES] = {-2.06861909651, 6.8368275154, 6.28041067762, -2.42978439425, -12.0185472279, 15.4811344969, -2.37732032854, 6.76625256674, 6.0761036961, -4.16684291581, -19.9106622177, 24.1327874743, -2.61870123203, 6.57561601643, 5.84693531828, -4.76771047228, -24.7031416838, 29.9860677618, -2.82273100616, 6.26645277207, 5.55539527721, -5.41039527721, -27.4919507187, 33.8305646817, -2.94117043121, 5.85883470226, 5.21216632444, -5.39223819302, -28.7921252567, 35.1840708419, -2.92828542094, 5.35607289528, 4.7960164271, -3.97566735113, -26.4742402464, 32.8285934292, -2.84063141684, 4.82063141684, 4.40136036961, -2.70128850103, -20.2704928131, 26.6474691992, -2.76239219713, 4.34169917864, 4.09229979466, -2.38252053388, -13.2920225873, 18.6972279261, -2.73731519507, 4.00293634497, 3.86154517454, -1.55439938398, -7.3728798768, 11.3215708419, -2.75991786448, 3.80283880903, 3.7360523614, 0.264953798768, -2.06704312115, 5.34666837782};
const float GESTURE_SCALINGS[GESTURE_FEATURES][GESTURE_DIMENSIONS] = {{0.192014534361}, {0.0627327397586}, {0.0438938702015}, {-0.00404546720509}, {-0.00313063404884}, {-0.00426819137215}, {0.087712287735}, {0.0412773344593}, {0.0481531815726}, {-0.00443780376844}, {-0.00216712829185}, {0.000582786024838}, {0.0879194430551}, {-0.00156976797807}, {0.133033886134}, {-0.00326681762945}, {0.000516120875253}, {-0.00403510035719}, {0.0935459961954}, {-0.0110458811219}, {0.0559963317588}, {-0.00265684984467}, {0.000761912631422}, {-0.00458194935127}, {-0.0174600598543}, {0.007832458527}, {-0.0395703739399}, {-0.00308332258355}, {0.000314309418453}, {-0.00504602702217}, {-0.0380010294293}, {0.00705233208396}, {-0.0402366484244}, {-0.00285711950339}, {-0.000912823144385}, {-0.00473898122619}, {0.0233239254935}, {-0.0581192343987}, {0.0994335940263}, {-0.0038055849813}, {0.00209368734008}, {-0.00535134052235}, {0.0105775799977}, {-0.000349492704424}, {0.0901825282473}, {0.000356041252851}, {-0.00011480852364}, {-0.00260180740651}, {-0.0822044973724}, {-0.153365484599}, {-0.156548855027}, {-0.00725648589271}, {-0.00352708120544}, {0.005645522724}, {-0.440217238754}, {-0.20900561388}, {-0.640218819392}, {0.0122647597013}, {0.00419638830177}, {-0.00205115668321}};

const float GESTURE_GNB_CLASS_PRIOR[GESTURE_CLASSES] = {0.593429158111, 0.406570841889};
const float GESTURE_GNB_MEANS[GESTURE_CLASSES][GESTURE_DIMENSIONS] = {{-2.34658456758}, {3.42506535368}};
const float GESTURE_GNB_STDEVS[GESTURE_CLASSES][GESTURE_DIMENSIONS] = {{0.79818881094}, {1.29203756585}};

#endif