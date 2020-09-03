void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        for (int j = i + 1; j < argc; j++) {
            if ((mx_strcmp( argv[i], argv[j])) > 0) {
                const char *temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
