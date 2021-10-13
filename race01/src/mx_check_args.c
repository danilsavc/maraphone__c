#include "part_of_the_matrix.h"

void mx_check_args(char *argv[], char *operand1, char *operation, char *operand2, char *result) {}
    
    int length_of_operand1 = mx_strlen(operand1);
    int length_of_operand2 = mx_strlen(operand2);
    int length_of_operation = mx_strlen(operation);
    int length_of_result = mx_strlen(result);

    //check first operand
    if (length_of_operand1 <= 0) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[1]);
        mx_printerr("\n");
        exit(-1);
    }
    for (int i = 0; i < length_of_operand1; i++) {
        if (i == 0 && operand1[i] == '-') {
            continue;
        }
        if (operand1[i] != '?' && !mx_isdigit(operand1[i])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[1]);
            mx_printerr("\n");
            exit(-1);
        }
    }

    //check second operand
    if (length_of_operand2 <= 0) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[3]);
        mx_printerr("\n");
        exit(-1);
    }
    for (int i = 0; i < length_of_operand2; i++) {
        if (i == 0 && operand2[i] == '-') {
            continue;
        }
        if (operand2[i] != '?' && !mx_isdigit(operand2[i])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[3]);
            mx_printerr("\n");
            exit(-1);
        }
    }

    //check operation
    if (length_of_operation != 1) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(-1);
    }
    if (*operation != '?' && *operation != '+' && *operation != '-' && *operation != '*' && *operation != '/') {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(-1);
    }

    //check result
    if (length_of_result <= 0) {
        mx_printerr("Invalid result: ");
        mx_printerr(argv[4]);
        mx_printerr("\n");
        exit(-1);
    }
    for (int i = 0; i < length_of_result; i++) {
        if (i == 0 && result[i] == '-') {
            continue;
        }
        if (result[i] != '?' && !mx_isdigit(result[i])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[4]);
            mx_printerr("\n");
            exit(-1);
        }
    }
}
