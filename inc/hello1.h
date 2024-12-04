#ifndef HELLO1_H
#define HELLO1_H


struct hello_data {
    ktime_t start;
    ktime_t end;
    struct list_head list;
};

void print_hello(int count);

#endif
