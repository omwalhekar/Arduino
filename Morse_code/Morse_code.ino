int LED = 2;
int dit = 200;
int dah = dit * 3;
int letterSpace = dit * 3;
int wordSpace = dit * 7;

void setup()
{
    // put your setup code here, to run once:
    pinMode(LED, OUTPUT);
    S_();
    delay(letterSpace);
    O_();
    delay(letterSpace);
    S_();
}
void dot()
{
    digitalWrite(LED, HIGH);
    delay(dit);
    digitalWrite(LED, LOW);
    delay(dit);
}
void dash()
{
    digitalWrite(LED, HIGH);
    delay(dah);
    digitalWrite(LED, LOW);
    delay(dit);
}
void space()
{
    delay(wordSpace);
}
void A_()
{
    dot();
    dash();
}
void B_()
{
    dash();
    dot();
    dot();
    dot();
}
void C_()
{
    dash();
    dot();
    dash();
    dot();
}
void D_()
{
    dash();
    dot();
    dot();
}
void E_()
{
    dot();
}
void F_()
{
    dot();
    dot();
    dash();
    dot();
}
void G_()
{
    dash();
    dash();
    dot();
}
void H_()
{
    dot();
    dot();
    dot();
    dot();
}
void I_()
{
    dot();
    dot();
}
void J_()
{
    dot();
    dash();
    dash();
    dash();
}
void K_()
{
    dash();
    dot();
    dash();
}
void L_()
{
    dot();
    dash();
    dot();
    dot();
}
void M_()
{
    dash();
    dash();
}
void N_()
{
    dash();
    dot();
}
void O_()
{
    dash();
    dash();
    dash();
}
void P_()
{
    dot();
    dash();
    dash();
    dot();
}
void Q_()
{
    dash();
    dash();
    dot();
    dash();
}
void R_()
{
    dot();
    dash();
    dot();
}
void S_()
{
    dot();
    dot();
    dot();
}
void T_()
{
    dash();
}
void U_()
{
    dot();
    dot();
    dash();
}
void V_()
{
    dot();
    dot();
    dot();
    dash();
}
void W_()
{
    dot();
    dash();
    dash();
}
void X_()
{
    dash();
    dot();
    dot();
    dash();
}
void Y_()
{
    dash();
    dot();
    dash();
    dash();
}
void Z_()
{
    dash();
    dash();
    dot();
    dot();
}

void loop()
{
}
