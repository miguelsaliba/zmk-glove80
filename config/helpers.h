#define ZMK_BASE_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH)                    \
    ZMK_LAYER(                                                                  \
        name,                                                                   \
        &none &none &none &none &none             &none &none &none &none &none \
        &none &none &none &none &none &none &none &none &none &none &none &none \
        LT                                                                   RT \
        LM                                                                   RM \
        LB                &none &none &none &none &none &none                RB \
        &magic MAGIC 0 &none &none &none &none LH    RH    &none &none &none &none &magic MAGIC 0 \
            )
