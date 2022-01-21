//网上找到的读取txt的方法
#include <stdio.h>
#include <string.h>

/**
 * Handle a single line
 * You could implement your code function here.
 */
int handleline(int linenum, char * text) {
    printf("line[%d]=[%s]\n", linenum, text);
    return 0;
}

int readtext(const char * filename) {
    FILE * fp;
    int linenum;
    char * p, buf[1024];

    fp = fopen(filename, "r");
    if (fp == NULL) {
        return -1;
    }

    for (linenum = 1; fgets(buf, sizeof(buf), fp) != NULL; ++linenum) {
        if ((p = strchr(buf, '\n')) == NULL) {
            p = buf + strlen(buf);
        }
        if (p > buf && p[-1] == '\r') {
            --p;
        }
        *p = '\0';
        for (p = buf; *p != '\0' && isspace((int)*p); ++p) {
            ;
        }
        if (*p == '\0' || *p == '#') {
            continue;
        }

        if (handleline(linenum, p) != 0) {
            printf("WARNING: cannot parse line[%d]=[%s], skipped\n", linenum, buf);
            continue;
        }
    }
    fclose(fp);

    return 0;
}

int main(int argc, char * argv[]) {
    readtext("rule1.txt");
}