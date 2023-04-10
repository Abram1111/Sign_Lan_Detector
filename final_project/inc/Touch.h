#ifndef TOUCH_SENSOR_H_
#define TOUCH_SENSOR_H_

typedef enum
{
    TOUCH_ON = 1,
    TOUCH_OFF = 0
} touch_StateType;
typedef enum
{
    TOUCH_ONE,
    TOUCH_TOW,
    TOUCH_THREE,
    TOUCH_FOUR,
    TOUCH_FIVE
} touch_PostionType;
typedef enum
{
    SPACE,
    A_CHAR,
    B_CHAR,
    C_CHAR,
    D_CHAR,
    E_CHAR,
    F_CHAR,
    G_CHAR,
    H_CHAR,
    I_CHAR,
    J_CHAR,
    K_CHAR,
    L_CHAR,
    M_CHAR,
    N_CHAR,
    O_CHAR,
    P_CHAR,
    Q_CHAR,
    R_CHAR,
    S_CHAR,
    T_CHAR,
    U_CHAR,
    V_CHAR,
    W_CHAR,
    X_CHAR,
    Y_CHAR,
    Z_CHAR
} touch_CharType;
void Touch_sensor_Init(void);
touch_CharType touch_ReadAll();

#endif