#include "part_of_the_matrix.h"

void mx_calculate(char *operand1, char *operation, char *operand2, char *result,
                  int operand1_length, int operand2_length, int result_length) {

    //check operation
    if (*operation == '?') {
        mx_calculate(operand1, "+", operand2, result,
                    operand1_length, operand2_length, result_length);
        mx_calculate(operand1, "-", operand2, result,
                    operand1_length, operand2_length, result_length);
        mx_calculate(operand1, "*", operand2, result,
                    operand1_length, operand2_length, result_length);
        mx_calculate(operand1, "/", operand2, result,
                    operand1_length, operand2_length, result_length);
        return;
    }

    //check negative numbers
    bool is_negative_operand1 = false;
    if (operand1[0] == '-') {
        is_negative_operand1 = true;
        operand1++;
        operand1_length--;
    } 

    bool is_negative_operand2 = false;
    if (operand2[0] == '-') {
        is_negative_operand2 = true;
        operand2++;
        operand2_length--;
    }

    bool is_negative_result = false;
    if (result[0] == '-') {
        is_negative_result = true;
        result++;
        result_length--;
    }

    long long first_number = mx_atoi(operand1);
    long long second_number = mx_atoi(operand2);
    long long third_number = mx_atoi(result);

    //algorithm
    //check first operand
    for (long long i = 0; i < mx_pow(10, operand1_length); i++) {
        if (first_number > 0) {
            i = first_number;
        }

        char *i_str = mx_itoa(i);
        int i_str_length = mx_strlen(i_str);
        bool isCorrectI = true;

        for (int i_i = 0; i_i < operand1_length - i_str_length; i_i++) {
            if (mx_isdigit(operand1[i_i]) && operand1[i_i] != '0') {
                isCorrectI = false;
                break;
            }
        }

        for (int i_i = operand1_length - i_str_length, i_str_i = 0; i_i < operand1_length; i_i++, i_str_i++) {
            if (operand1[i_i] != '?' && operand1[i_i] != i_str[i_str_i]) {
                isCorrectI = false;
                break;
            }
        }

        free(i_str);
        i_str = NULL;

        if (!isCorrectI) {
            continue;
        }

        //check second operand
        for (long long j = 0; j < mx_pow(10, operand2_length); j++) {  
            if (second_number > 0) {
                j = second_number;
            }

            char *j_str = mx_itoa(j);
            int j_str_length = mx_strlen(j_str);
            bool isCorrectJ = true;

            for (int j_i = 0; j_i < operand2_length - j_str_length; j_i++) {
                if (mx_isdigit(operand2[j_i]) && operand2[j_i] != '0') {
                    isCorrectJ = false;
                    break;
                }
            }

            for (int j_i = operand2_length - j_str_length, j_str_i = 0; j_i < operand2_length; j_i++, j_str_i++) {
                if (operand2[j_i] != '?' && operand2[j_i] != j_str[j_str_i]) {
                    isCorrectJ = false;
                    break;
                }
            }

            free(j_str);
            j_str = NULL;

            if (!isCorrectJ) {
                continue;
            }
            
            //check result
            for (long long k = 0; k < mx_pow(10, result_length); k++) {
                if (third_number > 0) {
                    k = third_number;
                }
                char *k_str = mx_itoa(k);
                int k_str_length = mx_strlen(k_str);
                bool isCorrectK = true;

                for (int k_i = 0; k_i < result_length - k_str_length; k_i++) {
                    if (mx_isdigit(result[k_i]) && result[k_i] != '0') {
                        isCorrectK = false;
                        break;
                    }
                }

                for (int k_i = result_length - k_str_length, k_str_i = 0; k_i < result_length; k_i++, k_str_i++) {
                    if (result[k_i] != '?' && result[k_i] != k_str[k_str_i]) {
                        isCorrectK = false;
                        break;
                    }
                }

                free(k_str);
                k_str = NULL;

                if (!isCorrectK) {
                    continue;
                }

                //print result
                if (is_negative_operand1) {
                    i *= -1;
                }
                if (is_negative_operand2) {
                    j *= -1;
                }
                if (is_negative_result) {
                    k *= -1;
                }

                if (*operation == '+') {
                    if (i + j == k) {
                        mx_print(i, " + ", j, k);
                    }
                }
                else if (*operation == '-') {
                        if (i - j == k) {
                            mx_print(i, " - ", j, k);
                    }
                }
                else if (*operation == '*') {
                        if (i * j == k) {
                        mx_print(i, " * ", j, k);
                    }
                }
                else if (*operation == '/') {
                    if (j != 0 && i / j == k) {
                        mx_print(i, " / ", j, k);
                    }
                }
                
                if (is_negative_operand1) {
                    i *= -1;
                }
                if (is_negative_operand2) {
                    j *= -1;
                }
                if (is_negative_result) {
                    k *= -1;
                }
                if (third_number > 0) {
                    break;
                }
            }
            if (second_number > 0) {
                break;
            }
        }
        if (first_number > 0) {
            break;
        }
    }

    if (is_negative_operand1) {
        operand1--;
    }
    if (is_negative_operand2) {
        operand2--;
    }
    if (is_negative_result) {
        result--;
    }
}

