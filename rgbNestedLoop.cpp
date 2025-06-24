// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: May 2, 2025
/* This program uses nested loops to
display some of the RGB colors. */

/* Include the cstdio library to
adhere to style guidelines. */
#include <cstdio>
/* Include the iostream library for
input and output functionalities. */
#include <iostream>

// Runs the main function.
int main() {
    // Display a newline for formatting.
    std::cout << "\n";
    /* Use a for loop to iterate over the red
    intensity levels from 0 to 255 (inclusive).
    Increment by 51 to prevent display issues. */
    for (int redCounter = 0; redCounter <= 255; redCounter += 51) {
        /* Nest a for loop to iterate over the green
        intensity levels from 0 to 255 (inclusive).
        Increment by 51 to prevent display issues. */
        for (int greenCounter = 0; greenCounter <= 255; greenCounter += 51) {
            /* Nest a for loop to iterate over the blue
            intensity levels from 0 to 255 (inclusive).
            Increment by 51 to prevent display issues. */
            for (int blueCounter = 0; blueCounter <= 255; blueCounter += 51) {
                /* Display the RGB notation and format
                it to show the actual colour. */
                printf("\033[38;2;%i;%i;%imRGB(%i, %i, %i)\n",
                redCounter, greenCounter, blueCounter,
                redCounter, greenCounter, blueCounter);
            }
        }
    }
}
