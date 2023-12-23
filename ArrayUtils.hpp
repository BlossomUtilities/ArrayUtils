#pragma once

#include <iostream>
#include <algorithm>

namespace Blossom::Utils {
    /**
     * @class Array
     *
     * @brief Makes working with arrays easier.
     */
    class Array {
        public:
            /**
             * @brief Checks if a given string is contained within an array of C-style strings.
             *
             * @param arr An array of C-style strings (char*).
             * @param str The string to search for within the array.
             * @return True if the string is found in the array, false otherwise.
             */
            static bool contains(char *arr[], char *str) {
                for (int i = 0; arr[i] != nullptr; i++) {
                    std::string element(arr[i]);

                    if (element.find(str) != std::string::npos) {
                        return true;
                    }
                }

                return false;
            }
    };
}
