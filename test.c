//
// Created by YaNan on 2018/10/3.
//

//#include < stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//
//int get_word(char *buf, int buf_size, FILE *fp) {
//    int len;
//    int ch;
//
//    /*跳过读取空白字符*/
//
//    while ((ch = getc(fp) != EOF && !isalnum(ch)));
//    if (ch == EOF)
//        return EOF;
//
//    /*此时，ch中保存了单词的初始字符*/
//    len = 0;
//    do {
//        buf[len] = ch;
//        len++;
//        if (len >= buf_size) {
//            /*由于单词太长，提示错误*/
//            fprintf(stderr, "word too long.\n");
//            exit(1);
//
//        }
//
//
//    } while ((ch = getc(fp) != EOF && isalnum(ch)));
//    buf[len] = '\0';
//    return 0;
//
//
//}
//
//int main(void) {
//    char buf[256];
//
//    while (get_word(buf, 256, stdin) != EOF) {
//        printf("<<%S>>\n", buf);
//    }
//
//    return 0;
//
//}



#include "apue.h"
#include <fcntl.h>

char    buf1[] = "abcdefghij";
char    buf2[] = "ABCDEFGHIJ";

int
main(void)
{
    int     fd;

    if ((fd = creat("file.hole", FILE_MODE)) < 0)
        err_sys("creat error");

    if (write(fd, buf1, 10) != 10)
        err_sys("buf1 write error");
    /* offset now = 10 */

    if (lseek(fd, 16384, SEEK_SET) == -1)
        err_sys("lseek error");
    /* offset now = 16384 */

    if (write(fd, buf2, 10) != 10)
        err_sys("buf2 write error");
    /* offset now = 16394 */

    exit(0);
}