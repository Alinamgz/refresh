int mx_strlen(const char *s);

int main(void) {
    int result = mx_strlen("Kukus\0iki sho kak");
    return result;
}
