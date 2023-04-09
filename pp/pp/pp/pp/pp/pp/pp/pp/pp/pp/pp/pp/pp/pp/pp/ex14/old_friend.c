#include <stdio.h>
#include <unistd.h>

void draw_pyramid(int size) {
    int i, j, k, n;
    int height = 2 + size;
    int width = 2 * height + 1;
    // int door_width = size % 2 == 0 ? size - 1 : size;
    // int door_start = height - 2;
    // int door_end = door_start + door_width;
    int start = 0;

    for (i = 0, n = 1; i < height; i++) {
        // int level_width = width - 2 * (n - 1);
        // int start = (width - level_width) / 2;

        for (j = 0; j < width; j++) {
            write(1," ",2);
        }
        printf("/");
        for (j = n; j <= level_width; j++) {
            if (i == height - 1 && j >= door_start && j < door_end) {
                write(1,"-",2);
            } else {
                write(1,"*",2);
            }
        }
        for (j = 1; j < n; j++) {
            if (i >= door_start && i < door_end && j == (level_width - door_width) / 2) {
                write(1,"|",2);
            } else {
                write(1,"*",2);
            }
        }
        write(1,"\\\n",3);

        n++;
        if (i == door_start) {
            n += door_width;
        }
    }
}

int main() {
    int size = 5;
    draw_pyramid(size);
    return 0;
}