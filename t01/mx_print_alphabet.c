void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 0; i <= 26; i++) {
        if (i == 26) {
            mx_printchar('\n');
            break;
        }
        if (i % 2 == 0) {
            mx_printchar(i + 65);
        } else {
            mx_printchar(i + 97);
        }
    }
}
