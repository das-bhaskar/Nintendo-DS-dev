#ifndef _KEYINPUT_H
#define _KEYINPUT_H

/**
 * @brief
 * Event- based Input Handler
 * Version 1.__STDC_UTF_32__
 *
 * Credits: Tyler Russ - GCO
 * Remade: Bhaskar Das
 *
 */

// Key Defines.
#define KA 1
#define KB 2
#define KX 3
#define KY 4
#define KUP 5
#define KDOWN 6
#define KLEFT 7
#define KRIGHT 8
#define KL 10
#define KR 11
#define KSTART 12
#define KSELECT 13
#define KTOUCH 14

// protoypes.
void OnKeyPressed(int key);
// void InitKB();
int getKey();
int getKey(int size, int list[]);
int getKey(int k1);
int getKey(int k1, int k2);
int getKey(int k1, int k2, int k3);
int getKey(int k1, int k2, int k3, int k4);
int getKey(int k1, int k2, int k3, int k4, int k5);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6, int k7);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int k10);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int k10, int k11);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int k10, int k11, int k12);
int getKey(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int k10, int k11, int k12, int k13);

#endif // _KEYINPUT_H