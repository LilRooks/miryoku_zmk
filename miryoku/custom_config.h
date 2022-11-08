#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define XXX &none

// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp ESC,           &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LCTRL,         &kp SPC,           &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_DONE \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp TILDE,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp Q,             &kp W,             &kp C,             &kp I,             &kp T,             U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_LT(U_DTWO, ESC), &kp SPC,           &kp LSHFT,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_DTWO \
LS(N1),            LS(N2),            LS(N3),            LS(N4),            &kp TILDE,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp P,             &kp M,             &kp S,             &kp I,             &kp T,             U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_NA,              &kp SPC,           &kp LSHFT,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Direct custom layer access
#define MIRYOKU_LAYOUTMAPPING_TECHNIKABLE(\
K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,                         K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04  XXX  &to U_GAME K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14  XXX  XXX        K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24  XXX  &to U_DONE K25  K26  K27  K28  K29 \
          K32  K33  K34  XXX  &to U_BASE K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Gaming") \
MIRYOKU_X(DONE,   "Diablo1") \
MIRYOKU_X(DTWO,   "Diablo2")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_DONE MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_DTWO MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10
#define U_DONE   11
#define U_DTWO   12
