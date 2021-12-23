#ifndef _KEYCODE_DEF_HPP
#define _KEYCODE_DEF_HPP

namespace vind {
    using KeyCode = unsigned char ;
}

#define KEYCODE_MOUSE_LEFT   (static_cast<unsigned char>(1))
#define KEYCODE_MOUSE_RIGHT  (static_cast<unsigned char>(2))
#define KEYCODE_MOUSE_MID    (static_cast<unsigned char>(4))

#define KEYCODE_0            (static_cast<unsigned char>(48))
#define KEYCODE_1            (static_cast<unsigned char>(49))
#define KEYCODE_2            (static_cast<unsigned char>(50))
#define KEYCODE_3            (static_cast<unsigned char>(51))
#define KEYCODE_4            (static_cast<unsigned char>(52))
#define KEYCODE_5            (static_cast<unsigned char>(53))
#define KEYCODE_6            (static_cast<unsigned char>(54))
#define KEYCODE_7            (static_cast<unsigned char>(55))
#define KEYCODE_8            (static_cast<unsigned char>(56))
#define KEYCODE_9            (static_cast<unsigned char>(57))

#define KEYCODE_MINUS        (static_cast<unsigned char>(189))
#define KEYCODE_HAT          (static_cast<unsigned char>(222))
#define KEYCODE_VBAR         (static_cast<unsigned char>(220))
#define KEYCODE_BKSPACE      (static_cast<unsigned char>(8))

#define KEYCODE_TAB          (static_cast<unsigned char>(9))
#define KEYCODE_Q            (static_cast<unsigned char>(81))
#define KEYCODE_W            (static_cast<unsigned char>(87))
#define KEYCODE_E            (static_cast<unsigned char>(69))
#define KEYCODE_R            (static_cast<unsigned char>(82))
#define KEYCODE_T            (static_cast<unsigned char>(84))
#define KEYCODE_Y            (static_cast<unsigned char>(89))
#define KEYCODE_U            (static_cast<unsigned char>(85))
#define KEYCODE_I            (static_cast<unsigned char>(73))
#define KEYCODE_O            (static_cast<unsigned char>(79))
#define KEYCODE_P            (static_cast<unsigned char>(80))
#define KEYCODE_AT           (static_cast<unsigned char>(192))
#define KEYCODE_LBOX_BRACKET (static_cast<unsigned char>(219))
#define KEYCODE_ENTER        (static_cast<unsigned char>(13))

#define KEYCODE_SHIFT_CAPSLOCK (static_cast<unsigned char>(20))
#define KEYCODE_CAPSLOCK       (static_cast<unsigned char>(240))

#define KEYCODE_A            (static_cast<unsigned char>(65))
#define KEYCODE_S            (static_cast<unsigned char>(83))
#define KEYCODE_D            (static_cast<unsigned char>(68))
#define KEYCODE_F            (static_cast<unsigned char>(70))
#define KEYCODE_G            (static_cast<unsigned char>(71))
#define KEYCODE_H            (static_cast<unsigned char>(72))
#define KEYCODE_J            (static_cast<unsigned char>(74))
#define KEYCODE_K            (static_cast<unsigned char>(75))
#define KEYCODE_L            (static_cast<unsigned char>(76))
#define KEYCODE_PLUS         (static_cast<unsigned char>(187))
#define KEYCODE_COLON        (static_cast<unsigned char>(186))
#define KEYCODE_RBOX_BRACKET (static_cast<unsigned char>(221))

#define KEYCODE_LSHIFT       (static_cast<unsigned char>(160))
#define KEYCODE_Z            (static_cast<unsigned char>(90))
#define KEYCODE_X            (static_cast<unsigned char>(88))
#define KEYCODE_C            (static_cast<unsigned char>(67))
#define KEYCODE_V            (static_cast<unsigned char>(86))
#define KEYCODE_B            (static_cast<unsigned char>(66))
#define KEYCODE_N            (static_cast<unsigned char>(78))
#define KEYCODE_M            (static_cast<unsigned char>(77))

#define KEYCODE_COMMA        (static_cast<unsigned char>(188))
#define KEYCODE_PERIOD       (static_cast<unsigned char>(190))
#define KEYCODE_SLASH        (static_cast<unsigned char>(191))
#define KEYCODE_BKSLASH      (static_cast<unsigned char>(226))
#define KEYCODE_RSHIFT       (static_cast<unsigned char>(161))

#define KEYCODE_LCTRL        (static_cast<unsigned char>(162))
#define KEYCODE_LWIN         (static_cast<unsigned char>(91))
#define KEYCODE_RWIN         (static_cast<unsigned char>(92))
#define KEYCODE_LALT         (static_cast<unsigned char>(164))
#define KEYCODE_NOCONVERT    (static_cast<unsigned char>(29))
#define KEYCODE_SPACE        (static_cast<unsigned char>(32))
#define KEYCODE_CONVERT      (static_cast<unsigned char>(28))
#define KEYCODE_KANA         (static_cast<unsigned char>(242))
#define KEYCODE_KANJI        (static_cast<unsigned char>(25))
#define KEYCODE_RALT         (static_cast<unsigned char>(165))
#define KEYCODE_APP          (static_cast<unsigned char>(93))
#define KEYCODE_RCTRL        (static_cast<unsigned char>(163))

#define KEYCODE_ESC          (static_cast<unsigned char>(27))
#define KEYCODE_F1           (static_cast<unsigned char>(112))
#define KEYCODE_F2           (static_cast<unsigned char>(113))
#define KEYCODE_F3           (static_cast<unsigned char>(114))
#define KEYCODE_F4           (static_cast<unsigned char>(115))
#define KEYCODE_F5           (static_cast<unsigned char>(116))
#define KEYCODE_F6           (static_cast<unsigned char>(117))
#define KEYCODE_F7           (static_cast<unsigned char>(118))
#define KEYCODE_F8           (static_cast<unsigned char>(119))
#define KEYCODE_F9           (static_cast<unsigned char>(120))
#define KEYCODE_F10          (static_cast<unsigned char>(121))
#define KEYCODE_F11          (static_cast<unsigned char>(122))
#define KEYCODE_F12          (static_cast<unsigned char>(123))
#define KEYCODE_F13          (static_cast<unsigned char>(124))
#define KEYCODE_F14          (static_cast<unsigned char>(125))
#define KEYCODE_F15          (static_cast<unsigned char>(126))
#define KEYCODE_F16          (static_cast<unsigned char>(127))
#define KEYCODE_F17          (static_cast<unsigned char>(128))
#define KEYCODE_F18          (static_cast<unsigned char>(129))
#define KEYCODE_F19          (static_cast<unsigned char>(130))
#define KEYCODE_F20          (static_cast<unsigned char>(131))
#define KEYCODE_F21          (static_cast<unsigned char>(132))
#define KEYCODE_F22          (static_cast<unsigned char>(133))
#define KEYCODE_F23          (static_cast<unsigned char>(134))
#define KEYCODE_F24          (static_cast<unsigned char>(135))

#define KEYCODE_SNAPSHOT     (static_cast<unsigned char>(44))
#define KEYCODE_SCROLL       (static_cast<unsigned char>(145))
#define KEYCODE_PAUSE        (static_cast<unsigned char>(19))
#define KEYCODE_INSERT       (static_cast<unsigned char>(45))
#define KEYCODE_HOME         (static_cast<unsigned char>(36))
#define KEYCODE_PAGEUP       (static_cast<unsigned char>(33))
#define KEYCODE_DELETE       (static_cast<unsigned char>(46))
#define KEYCODE_END          (static_cast<unsigned char>(35))
#define KEYCODE_PAGEDOWN     (static_cast<unsigned char>(34))

#define KEYCODE_LEFT         (static_cast<unsigned char>(37))
#define KEYCODE_UP           (static_cast<unsigned char>(38))
#define KEYCODE_RIGHT        (static_cast<unsigned char>(39))
#define KEYCODE_DOWN         (static_cast<unsigned char>(40))

#define KEYCODE_NUMLOCK      (static_cast<unsigned char>(144))

#define KEYCODE_FROM_JP      (static_cast<unsigned char>(244))
#define KEYCODE_TO_EN        (static_cast<unsigned char>(243))
#define KEYCODE_FROM_EN      (static_cast<unsigned char>(243))
#define KEYCODE_TO_JP        (static_cast<unsigned char>(244))
#define KEYCODE_IME          (static_cast<unsigned char>(14))

#define KEYCODE_BACKTAB      (static_cast<unsigned char>(245))

//
// Keyboards with two Windows-keys are rare, so we don't support them.
// Replated Code: @Double-Win-Key
//
//#define KEYCODE_WIN          (static_cast<unsigned char>(15))

#define KEYCODE_SHIFT        (static_cast<unsigned char>(16))
#define KEYCODE_CTRL         (static_cast<unsigned char>(17))
#define KEYCODE_ALT          (static_cast<unsigned char>(18))
#define KEYCODE_OPTIONAL     (static_cast<unsigned char>(177))
#define KEYCODE_OPTNUMBER    (static_cast<unsigned char>(178))

#define KEYCODE_UNDEFINED    (static_cast<unsigned char>(0))

#endif
