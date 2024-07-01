#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++; // Move past the '%'
            switch (*format) {
                case 'd':
                    printf("%d", va_arg(args, int));
                    break;
                case 'f':
                    printf("%f", va_arg(args, double));
                    break;
                case 's':
                    printf("%s", va_arg(args, char *));
                    break;
                case 'c':
                    printf("%c", va_arg(args, int));
                    break;
                default:
                    putchar('%'); // Print '%' if unknown specifier
                    putchar(*format);
                    break;
            }
        } else {
            putchar(*format);
        }
        format++; // Move to the next character in the format string
    }

    va_end(args);
}

int main() {
    int num = 10;
    double pi = 3.14159;
    char *str = "Hello, world!";
    char ch = 'A';
    printf("%d");

    my_printf("Integer: %d\n", num);
    my_printf("Float: %f\n", pi);
    my_printf("String: %s\n", str);
    my_printf("Character: %c\n", ch);
    my_printf("Unknown specifier: %x\n", 123); // Demonstrating handling of unknown specifier
    return 0;
}
