// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: April 28, 2025
// Program that displays a sequence of rgb color codes
// from [0, 0, 0] to[255, 255, 255]

#include <iostream>
#include <cstdio>

int main() {
    // RED
    for (int r = 0; r < 256; r += 15) {
        // GREEN
        for (int g = 0; g < 256; g += 15) {
            // BLUE
            for (int b = 0; b < 256; b += 15) {
                // COLOR
                printf("\033[38;2;%i;%i;%im", r, g, b);
                // RGB(RED, GREEN, BLUE)
                printf("RGB(%03d,%03d,%03d)\n", r, g, b);
            }
        }
    }
    // Program completion message
    printf("Thanks for Playing!\n");
}
